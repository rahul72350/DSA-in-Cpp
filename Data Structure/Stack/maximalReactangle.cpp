#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;


int largestRectangleArea(vector<int>& height) {
    int size = height.size();
    stack<int> st;
    int ans = 0;

    for(int i = 0; i < size; i++) {
        while(!st.empty() && height[i] < height[st.top()]) {
            int h = height[st.top()];
            st.pop();

            int right = i;
            int left = st.empty() ? -1 : st.top();

            int width = right - left - 1;
            ans = max(ans, h * width);
        }
        st.push(i);
    }

   
    while(!st.empty()) {
        int h = height[st.top()];
        st.pop();

        int right = size;
        int left = st.empty() ? -1 : st.top();

        int width = right - left - 1;
        ans = max(ans, h * width);
    }

    return ans;
}


int maximalRectangle(vector<vector<int>>& matrix) {
    if(matrix.empty()) return 0;

    int row = matrix.size();
    int col = matrix[0].size();
    int ans = 0;

    vector<int> height(col, 0);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(matrix[i][j] == '0') {
                height[j] = 0;
            } else {
                height[j] += 1;
            }
        }

        ans = max(ans, largestRectangleArea(height));
    }

    return ans;
}

// Driver Code
int main() {

    vector<vector<int>> matrix = {
        {1,0,1,0,0},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    int ans = maximalRectangle(matrix);

    cout <<ans << endl;

    return 0;
}
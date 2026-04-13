#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Stack{
    queue<int>q1,q2;
    public:

    //empty method
    bool empty(){
        return q1.empty() && q2.empty();
    }
    
    //push method
    void push(int val){
        if(empty()){
            q1.push(val);
        }

        else if(q1.empty()){
            q2.push(val);
        }
        else{
            q1.push(val);
        }
    }

    //pop method
    int pop()
    {
        int element;
        if(empty()){
            return 0;
        }
        else if(q1.empty()){
            while(q2.size() > 1){
                q1.push(q2.front());
                    q2.pop();
                }

                element =q2.front();
                q2.pop();
                return element;
            }
            else{
                while(q1.size()>1){
                    q2.push(q1.front());
                        q1.pop();
                    }
                    element = q1.front();
                    q1.pop();
                    return element;
                } 
        }

        int top(){
            if(empty()){
                return 0;
            }
            else if(q1.empty()){
                return q2.back();
            }
            else{
                return q1.back();
            }
        }

    };

int main(){




    return 0;
}
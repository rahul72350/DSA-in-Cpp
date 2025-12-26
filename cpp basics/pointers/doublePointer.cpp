#include<iostream>
using namespace std;

void question1(){
    char c[] = "GATE2025";
    char *p = c;
    cout<<p + p[3] - p[1];  //aswer is 2025
}

void question2(int* p1,int* p2){
    p1 = p2;
    *p1 = 2;
}

void question3(){
    int* ptr;
    int x = 0;
    ptr = &x;
    int y = *ptr;
    *ptr = 1;
    cout<<x<<y<<endl;
}

void question4(){
    int a = 4, b = 10;
    int &name = a;
    int *ptr = &a;
    (*ptr)++;
    ptr = &b;
    *ptr = *ptr+5;
    name += 5;
    cout<<a<<b;

}
int main(){

    // int a = 10;
    // int *ptr = &a;
    // int **ptr2 = &ptr;
    // int ***ptr3 = &ptr2;
    // int ****ptr4 = &ptr3;

    // cout<<"value of a is: "<<*ptr<<endl;
    // cout<<"value of a is: "<<**ptr2<<endl;
    // cout<<"value of a is: "<<***ptr3<<endl;
    // cout<<"value of a is: "<<****ptr4<<endl;


    // question1();

    // int i = 0, j = 1;
    // question2(&i,&j);
    // cout<<i<<j;

    // question3();
    question4();

    return 0;
}
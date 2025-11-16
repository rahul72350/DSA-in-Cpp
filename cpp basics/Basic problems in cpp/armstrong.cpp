#include<iostream>
using namespace std;

int countDigits(int params){
    int count = 0;
    while(params > 0){
        params /= 10;
        count++;
    }
    return count;
}

int power(int base,int expo){

}


//here we have some built functions like min, max, pow but we will create our own so that i can understand working. 
int main(){


    int input;
    cout<<"enter input: ";
    cin>>input;
    int realinput = input;
    int result = 0;
    int total = 0;
    int totaldigits = countDigits(input);
   
    while(input > 0){
      int extractDigit = input % 10;
      int x = 1;
      for(int i = 0; i < totaldigits; i++){
        x *= extractDigit;
      }

      total += x; 
      input /= 10;
    }



   if(total == realinput){
    cout<<"given number is armstrong number "<<total;
   }

   else{
    cout<<"given number is not a armstrong number "<<total;
   }

    return 0;
}
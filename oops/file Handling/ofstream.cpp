

#include<iostream>
#include<fstream>
using namespace std;


int main()
{

    //opening file

    ofstream fout;
    fout.open("./demo.txt");
    
    //writing data
    fout<<"hello india";


    fout.close();
  


    return 0;
}
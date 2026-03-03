


//all file stream classes inherit from basic_ios, which holds a stream buffer (rdbuf()). the actual I/O happens in the buffer filebuf for file streams.
//basic_ios is the base class for all stream classes.
//It DOES NOT directly read/write files.
//It only manages stream state and connects to a buffer.
// ios_base
//   └── ios
//         ├── istream  ──────────────────── ifstream (file input)
//         ├── ostream  ──────────────────── ofstream (file output)
//         └── iostream (istream + ostream) ─ fstream  (file I/O)

// User code
//    ↓  (<<, >>, read(), write())
// Stream object (ifstream/ofstream/fstream)
//    ↓  (calls sputc, sgetn, etc.)
// filebuf  ←→  Internal buffer (char array)
//    ↓  (underflow/overflow/sync)
// OS Kernel  ←→  Page cache / disk

#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main(){

    fstream file("demo.txt");

    string message;
    string line;

    while(getline(file,line)){
        message += line + '\n';
    }
    
    cout<<"fetched message is: "<<message;


    return 0;
}
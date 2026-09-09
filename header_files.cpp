// There are two types of header files
// 1. System header files: It comes with the compiler.
#include<iostream>
// 2. User defined user files: It is written by the prpgrammer
// #include "this.h"     //----> this will produce an error if this.h is not present in the current directory
using namespace std;

int main(){
    int a = 5, b = 8;
    cout<<"operators in c++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;

    // Arithmetic operators
    cout<<"The value of a + b is " <<a+b<<endl;
    cout<<"The value of a - b is " <<a-b<<endl;
    cout<<"The value of a * b is " <<a*b<<endl;
    cout<<"The value of a / b is " <<a/b<<endl;
    cout<<"The value of a % b is " <<a%b<<endl;
    cout<<"The value of a ++  is " <<a++<<endl;
    cout<<"The value of a --  is " <<a--<<endl;
    cout<<"The value of ++a is " <<++a<<endl;
    cout<<"The value of --a is " <<--a<<endl;

    //Assignment operator
    return 0;
}
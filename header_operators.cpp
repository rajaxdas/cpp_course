// There are two types of header files
// 1. System header files: It comes with the compiler.
#include<iostream>
// 2. User defined user files: It is written by the prpgrammer
// #include "this.h"     //----> this will produce an error if this.h is not present in the current directory
using namespace std;

int main(){
    // int a = 5, b = 8;
    // cout<<"operators in c++"<<endl;
    // cout<<"Following are the types of operators in c++"<<endl;

    // // Arithmetic operators
    // cout<<"The value of a + b is " <<a+b<<endl;
    // cout<<"The value of a - b is " <<a-b<<endl;
    // cout<<"The value of a * b is " <<a*b<<endl;
    // cout<<"The value of a / b is " <<a/b<<endl;
    // cout<<"The value of a % b is " <<a%b<<endl;
    // cout<<"The value of a ++  is " <<a++<<endl;
    // cout<<"The value of a --  is " <<a--<<endl;
    // cout<<"The value of ++a is " <<++a<<endl;
    // cout<<"The value of --a is " <<--a<<endl;

    //Assignment operator--------> used to assign a value to a variable
    // int a = 3, b = 9;
    // char d = 'd';

    //Comparison operators------.(it will return (0 = false 1 = true))
    // cout<<"These are the comparision operators in c++"<<endl;
    // cout<<"The value of a == b is "<<(a==b)<<endl;
    // cout<<"The value of a != b is "<<(a!=b)<<endl;
    // cout<<"The value of a > b is "<<(a>b)<<endl;
    // cout<<"The value of a < b is "<<(a<b)<<endl;
    // cout<<"The value of a >= b is "<<(a>=b)<<endl;
    // cout<<"The value of a <= b is "<<(a<=b)<<endl;


    
    //Logical Operator....
    int a = 3, b = 9;

    cout<<"These are the logical operators in c++"<<endl;
    //AND operator(both should be true)...
    cout<<"The value of logical and operator is "<<((a == b) && (a<b))<<endl;

    //OR operator(any of one should be true)...
    cout<<"The value of logical and operator is "<<((a == b) || (a<b))<<endl;

    //NOT operator(flips the result)
    cout<<"The value of logical and operator is "<< (!(a == b))<<endl;

    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // we can value of a variable
    // int a = 35;
    // // a = 45;
    // // cout<<"The value of a is: "<<a;


    // //constants in c++(using a const keyword we cannot change the value of the variable)
    // const int a = 78;
    // cout<<"The value of a is: "<<a;

    //Manipulators 
    // int a = 3, b = 5, c = 900;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    
    // // setw will take width ...we have taken 5 width
    // cout<<"The value of a is: "<<setw(5)<<a<<endl;
    // cout<<"The value of b is: "<<setw(5)<<b<<endl;
    // cout<<"The value of c is: "<<setw(5)<<c<<endl;

    
    //Operator Precedence-- we can check reference from (en.cppreference.com)
    int a = 3, b = 4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<"The value of c is: "<<c;

    return 0;
}
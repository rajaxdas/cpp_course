#include<iostream>

//global variable
using namespace std;
int c = 45; //global variable

int main(){
    // int a, b, c;
    //build in data types

    // cout<<"Enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum of c is:"<<c;
    // cout<<"The global variable c is:"<<::c; //using scope resolution operator to access global variable

    
    //FLoat, double and long double literals

    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The side of 34.4 is: " <<sizeof(34.4)<<endl;    c
    // out<<"The side of 34.4f is: " <<sizeof(34.4f)<<endl;
    // cout<<"The side of 34.4F is: " <<sizeof(34.4F)<<endl;
    // cout<<"The side of 34.4l is: " <<sizeof(34.4l)<<endl;
    // cout<<"The side of 34.4L is: " <<sizeof(34.4L)<<endl;



    // cout<<"The value of d is: "<<d<<endl;
    // cout<<"The value of e is: "<<e<<endl;


    //Reference variable
    float x = 455;
    float & y = x; //y is reference variable to x
    cout<<x<<endl;
    cout<<y<<endl;

    //typecasting---(convert one data type into another data type)
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is: "<<(float)a<<endl;
    cout<<"The value of a is: "<<int(b)<<endl;
    int c = int(b);
    
    cout<<"The expression is: "<<a + b<<endl;
    cout<<"The expression is: "<<a + int(b)<<endl;
    cout<<"The expression is: "<<a + (int)b<<endl;

    return 0;
}
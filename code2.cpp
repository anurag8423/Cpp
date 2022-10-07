#include<iostream>
using namespace std;
int main(){
    cout<<"Opertors in C++"<<endl;/*endl gives new line after the output*/
    //Arithmetic operators
    int a=4,b=5;
    cout<<"Value of a+b "<<a+b<<endl;
    /*Arithmetic operators
    +, -, *, %, /, ++a, a--, --a, a++*/
    /*Comparisional operators
    ==, !=, <=, >=, <, >*/
    cout<<"Value of a==b "<<(a==b)<<endl;/*1=>true   0=>false*/
    /*Logical operators
    &&(AND--both true), ||(OR--atleat one true), !(NOT--inver true to false and vice versa)*/
    cout<<"The value of (a==b)||(a>b) is "<<((a==b)||(a>b))<<endl;
    cout<<"The value of !(a==b)||(a>b) is "<<(!(a==b)||(a>b))<<endl;
    return 0;
}
/*Includes manipulators and operators precedence info*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // //CONSTANTS
    // const int a=90;/*Here a has become a constant(read-only variable) i.e. its value cannot be changed*/
    // //a=0;  gives error
    // cout<<a<<endl;
    //MANIPULATORS IN C++
    //setw(5) function is present in iomanip header file
    int b=25,c=588,d=69325;
    cout<<"Value of b without setw "<<b<<endl;
    cout<<"Value of c without setw "<<c<<endl;
    cout<<"Value of d without setw "<<d<<endl<<endl<<endl;

    cout<<"Value of b with setw "<<setw(5)<<b<<endl;
    cout<<"Value of c with setw "<<setw(5)<<c<<endl;
    cout<<"Value of d with setw "<<setw(5)<<d<<endl;
    /*OPERATOR PRECENDENCE
    for same precedence operators associativity is from left to right*/
 return 0;   
}

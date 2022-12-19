#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the value of num1\n";/*'<<' is called insertion operator*/
    cin>>num1;/*'>>' is called extraction operator*/
    num2=num1*num1;
    cout<<"\n"<<num2<<"\n";
    cout<<num1+num2;
    cout<<"Addded this hello World message"<<endl;
    return 0;
}
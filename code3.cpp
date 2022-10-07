#include<iostream>
using namespace std;
int c=45;//Global c variable
int main(){
//     int a,b,c;//Local c variable
//     cout<<"Enter the value of a & b"<<endl;
//     cin>>a>>b;
//     c=a+b;
//     cout<<"The value of local c is:"<<c<<endl;/*Local variable has preference over global variable*/
//    cout<<"the value of global is:"<<::c<<endl;/*:: is scope resolution operator used in to access global variable in functions containing  local varibale with same name*/
    float f=34.4f;
    long double d=34.5l;
cout<<"Value of float f is :"<<f<<endl<<"Value of double d is :"<<d<<endl;
/*A decimal number will be considered as double(not double) by compiler--to specify it float add a suffix f/F(34.4f)and for double l/L(34.5l)*/
  cout<<"Size of 34.4 "<<sizeof(34.4)<<endl;//double
cout<<"Size of 34.4f "<<sizeof(34.4f)<<endl;//float
cout<<"Size of 34.4L "<<sizeof(34.4L)<<endl;//long double
//REFERENCE VARIABLES
    int x=48;
    int &y=x;
    cout<<x<<endl;   
    cout<<y<<endl; 
/*y is reference variable for x that points towards x ****not a different varibale with same value as that of x */
//TYPECASTING
float w=52.114f;
cout<<"Value of w is "<<int(w)<<endl; //typecasted and below syntax also gives same output
cout<<"Value of w is "<<(int)w<<endl; 
int c=int(w);
cout<<"value of c "<<c<<endl;
cout<<"value of w+c "<<w+c<<endl;
cout<<"vlaue of int(w)+c "<<c+int(w)<<endl;
 return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b;
    b=a++;//post increment b=a;a=a+1;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    b=++a;//pre increment a=a+1;b=a;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
}
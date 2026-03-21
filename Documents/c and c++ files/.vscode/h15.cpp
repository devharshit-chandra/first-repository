#include<iostream>
using namespace std;
int *ret(){
    int *p=new int();
    *p=5;
    delete p;
    return p;
}
int main(){
    int *p1=ret();
    cout<<*p1; 
}
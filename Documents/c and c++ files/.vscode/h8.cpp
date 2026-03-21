#include<iostream>
using namespace std;
int a;
int* fn(){
    a=5;
    cout<<&a<<endl;
    return &a;
}
int main(){
    int *b=fn();
    cout<<b;
}
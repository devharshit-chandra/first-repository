#include<iostream>
using namespace std;
int change(int &A,int &B){
    int x=A;
    A=B;
    B=x;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"before change : "<<a<<","<<b<<endl;
    change(a,b);
    cout<<"after change : "<<a<<","<<b;
}
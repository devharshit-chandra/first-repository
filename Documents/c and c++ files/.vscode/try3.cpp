#include<iostream>
using namespace std;
int sum(int a,int b,int c,int d){
    return a+b+c+d;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int sum(int a,int b){
    return a+b;
}
int main(){
    int a=5;
    int b=6;
    int c=9;
    int d=3;
    cout<<"4 constraints : "<<sum(a,b,c,d)<<endl;
    cout<<"3 constraints : "<<sum(a,b,c)<<endl;
    cout<<"2 constraints : "<<sum(a,b);
}
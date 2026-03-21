#include<iostream>
using namespace std;
int sum(int a,int b=20){
    return a+b;
}
int main(){
    int a=5;int b=3;
    int s=sum(a,b);
    cout<<s;
}
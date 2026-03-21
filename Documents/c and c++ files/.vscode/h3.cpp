#include<iostream>
using namespace std;
int change(int *a,int*b){
    int x=*a;
    *a=*b;
    *b=x;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int *p=&x;
    cout<<"address of x before : "<<p<<endl;
    cout<<x<<","<<y<<endl;
    change(&x,&y);
    cout <<"address of x after : "<<p<<endl;
    cout<<x<<","<<y;
}
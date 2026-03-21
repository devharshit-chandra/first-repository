#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=new int[10];//dynamically allocated array
    for(int i=0;i<10;i++){
        *(p+i)=a++;
    }
    for(int i=0;i<10;i++){
        cout<<*(p+i)<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int i=0;
    a:
    cout<<i<<endl;
    i=i+1;
    if(i<5){
        goto a;
    }
}
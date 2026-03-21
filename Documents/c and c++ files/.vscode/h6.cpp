#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
float sum(float x,float y){
    return x+y;
}
int main(){
    cout<<sum(1,3)<<endl;
    cout<<sum(5.46f,3.7f);
}
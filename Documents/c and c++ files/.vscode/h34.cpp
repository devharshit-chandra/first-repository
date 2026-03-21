#include<iostream>
using namespace std;
int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    int *p1=&arr[1];
    int *p2=&arr[17];
    cout<<p1<<" "<<p2<<endl;
    cout<<p2-p1<<endl;
}
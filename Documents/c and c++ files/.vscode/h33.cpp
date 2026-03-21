#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=10;
    for(int i=1;i<5;i++){
        arr[i]=arr[i-1]+10;
    }
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    string c="harshit";
    cout<<sizeof(c)<<endl;
    cout<<sizeof("harshit");
}
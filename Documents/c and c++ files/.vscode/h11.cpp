#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i=i+1){
        arr[i]=arr[i]+1;
    }
    for(int i=0;i<7;i=i+1){
        cout<<arr[i]<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,7,9,4,3};
    int i=1;
    int a=arr[i];
    for(int &x:arr){
        cout<<a*x<<" ";
        i=i+1;
    }
}
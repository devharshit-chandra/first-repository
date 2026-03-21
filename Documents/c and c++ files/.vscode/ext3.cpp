#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        for(int j=0;j<n-i;j=j+1){
            cout<<" ";
        }
        for(int j=1;j<=n;j=j+1){
            if(i==1 || j==1){
                cout<<"*";
            }
            else if(i==n || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
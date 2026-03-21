#include<iostream>
using namespace std;
int main(){
    int n;
    a:
    cin>>n;
    if(n%2==0 || n<=0){
        cout<<"enter a postive odd number to avoid asymmetricity and ambiguity"<<endl;
        goto a;
    }
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=n;j=j+1){
            if(i==1){
                if(j==1 || j>n/2){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            else if(i==n){
                if(j==n || j<=(n/2+1)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            else if(i==(n+1)/2){
                cout<<"* ";
            }
            else if(j==(n+1)/2){
                cout<<"* ";
            }
            else if(i<=n/2){
                if(j==1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            else if(i>n/2){
                if(j==n){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}
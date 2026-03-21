#include<iostream>
using namespace std;
int main(){
    int heads;
    int legs;
    cin>>heads;
    cin>>legs;
    int hens=0;int goats=0;
    int i=0;
    while(heads>0){
        if(legs>0){
            if(i==0){
                hens=hens+1;
                heads=heads-1;
                legs=legs-2;
                i=1;
            }
            else{
                goats=goats+1;
                heads=heads-1;
                legs=legs-4;
                i=0;
            }
        }
        else{
            break;
        }
    }
    cout<<hens<<" ";cout<<goats;
}
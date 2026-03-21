#include<iostream>
using namespace std;
int main(){
    char str[10];
    fgets(str,10,stdin);
    int st=0;
    if((int)str[0]%2==0){
        for(int i=1;i<10;i=i+2){
            if((int)str[i]%2==0 && (int)str[i]%2!=0){
                st=0;
                break;
            }
            else{
                st=1;
                continue;
            }
        }
    }
    else{
        for(int i=1;i<10;i=i+2){
            if((int)str[i]%2==0 && (int)str[i]%2!=0){
                st=1;
                continue;
            }
            else{
                st=0;
                break;
            }
        }
    }
    if(st==0){
        cout<<"its a magic number";
    }
    else{
        cout<<"not a magic number";
    }
}
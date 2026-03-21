#include<iostream>
using namespace std;
int main(){
    char a[100];
    fgets(a,100,stdin);
    int count=0;
    int pointer=0;
    int i=0;
    while(a[i]!='\0'){
        if(a[i]==' '){
            pointer=0;
        }
        else{
            if(pointer==0){
                pointer=1;
                count=count+1;
            }
        }
        i=i+1;
    }
    cout<<"total words : "<<count;
}
#include<iostream>
using namespace std;
int main(){
    char str1[100];
    char str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    int i=0;
    int j=0;
    while(str1[i]!='\0'){
        while(str1[j]!='\0'){
            if(str1[j]>str1[j+1]){
                char a=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=a;
                j=j+1;
            }
        }
        i=i+1;
    }
    int x=0;
    int y=0;
    while(str2[x]!='\0'){
        while(str2[y]!='\0'){
            if(str2[y]>str2[y+1]){
                char a=str2[y];
                str2[y]=str2[y+1];
                str2[y+1]=a;
                y=y+1;
            }
        }
        x=x+1;
    }
    int pointer=0;
    int a=0;
    int b=0;
    if(sizeof(str1)==sizeof(str2)){
        while(str1[i]!='\0'){
            if(str1[a]==str2[b]){
                pointer=1;
            }
            a=a+1;b=b+1;
        }
    }
    else{
        cout<<"not anagram";
    }
    if(pointer==1){
        cout<<"anagram";
    }
}
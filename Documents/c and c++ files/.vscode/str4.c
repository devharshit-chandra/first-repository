#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\0'){
        i=i+1;
    }
    for(int a=0 ;a<i/2;a=a+1){
        char t;
        t=str[a];
        str[a]=str[i-a-1];
        str[i-a-1]=t;
    }
    printf("%s",str);
    return 0;
}
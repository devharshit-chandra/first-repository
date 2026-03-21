#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\n'){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i]>='a'&& str[i]<='z'){
            str[i]=str[i]-32;
        }
        i=i+1;
    }
    printf("%s",str);
}
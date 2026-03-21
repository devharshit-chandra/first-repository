#include<stdio.h>
int main(){
    char s[1000];
    fgets(s,1000,stdin);
    int i=0;
    int j=0;
    while(s[i]!='\0'){
        if(s[i]!=' '){
            s[j]=s[i];
            j=j+1;
        }
        i=i+1;
    }
    printf("%s",s);
}
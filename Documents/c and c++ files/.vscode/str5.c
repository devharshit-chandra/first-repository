#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\0'){
        i=i+1;
    }
    int flag=0;
    for(int a=0 ;a<i/2;a=a+1){
        if(str[a]!=str[i-a-1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}
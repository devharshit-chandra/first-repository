#include <stdio.h>
int main(){
    char s[1000];
    fgets(s,1000,stdin);
    int i=0;
    int l=0;
    int p=0;
    while(s[i]!='\n'){
        l=l+1;
        i=i+1;
    }
    for (int k=0;k<l/2;k=k+1){
        if (s[k]!=s[l-k-1]){
            p=1;
            break;
        }
    }
    if(p==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}
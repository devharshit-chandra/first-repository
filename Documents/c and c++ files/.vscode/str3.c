#include <stdio.h>
int main(){
    char str[100];
    fgets(str, 100, stdin);
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if(str[i]==' ')count++;
        i++;
    }
    printf("%d\n", count+1);
    return 0;
}
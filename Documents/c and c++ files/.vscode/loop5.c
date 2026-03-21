#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int i=1;
    while (i<=10){
        printf("%d\n",i*x);
        i=i+1;
    }
}
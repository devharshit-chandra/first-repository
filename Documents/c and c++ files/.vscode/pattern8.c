#include <stdio.h>
int main(){
    int c=1;
    for(int i=1;i<=4;i=i+1){
        for(int j=1;j<=i;j=j+1){
            printf("%d ",c);
            c=c+1;
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    for(int i=0;i<4;i=i+1){
        for(int j=0;j<=i;j=j+1){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=3;i>0;i=i-1){
        for (int j=1;j<=i;j=j+1){
            printf("* ");
        }
        printf("\n");
    }
}
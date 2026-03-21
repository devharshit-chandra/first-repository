#include<stdio.h>
int main(){
    for (int i=1;i<=5;i=i+1){
        for(int j=1;j<=5;j=j+1){
            if(j>=6-i && j<=5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
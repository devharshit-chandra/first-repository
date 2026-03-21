#include <stdio.h>
int main(){
    for(int i=0;i<5;i=i+1){
        for(int j=0;j<5-i;j=j+1){
            if(i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for (int j=0;j<=i;j=j+1){
            printf("* ");
        }
    printf("\n");
    }
}
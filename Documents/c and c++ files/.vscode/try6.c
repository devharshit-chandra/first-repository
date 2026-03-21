#include <stdio.h>
int main(){
    for(int i=5;i>0;i=i-1){
        for(int j=0;j<5-i;j=j+1){
            printf("    ");
        }
        for (int j=0;j<i;j=j+1){
            printf("* ");
        }
    printf("\n");
    }
}
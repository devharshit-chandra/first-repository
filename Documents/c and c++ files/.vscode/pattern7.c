#include <stdio.h>
int main(){
    for(int i=0;i<4;i=i+1){
        for(int j=0;j<4;j=j+1){
            if(i==1 && j==2){
                printf("  ");
            }
            else if( i==2 && j==1){
                printf("  ");
            }
            else{
                printf("* ");
            }

        }
        printf("\n");
    }
}
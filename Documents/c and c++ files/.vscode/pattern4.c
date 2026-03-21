#include <stdio.h>
int main(){
    for(int i=1;i<4;i=i+1){
        for(int j=1;j<4;j=j+1){
            if(i==2 && j==2){
                printf("  ");
            }
            else{
                printf("* ");
            }

        }
        printf("\n");
    }
}

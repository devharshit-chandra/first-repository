#include<stdio.h>
int main(){
    int c=1;
    for(int i=0;i<5;i=i+1){
        for(int j=0;j<=i;j=j+1){
            if (i%2==0){
                printf("%d",c);
                if(i==j){
                    c=c+1;
                }
                else{
                    c=c+0;
                }
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}
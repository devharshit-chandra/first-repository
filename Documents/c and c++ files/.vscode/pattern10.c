#include <stdio.h>
int main(){
    int num=1;
    for(int i=1;i<=4;i=i+1){
        for(int j=1;j<=i;j=j+1){
            if(i%2==0){
                printf("* ");
            }
            else{
                printf("%d ",num);
                if(j==i){
                    num=num+1;
                }
            }
        }
        printf("\n");
    }
}
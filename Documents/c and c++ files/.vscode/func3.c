#include <stdio.h>
void pat1(int n){
    for( int i=1;i<=n;i=i+1){
        for(int j=1;j<=n;j=j+1){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    pat1(5);
}
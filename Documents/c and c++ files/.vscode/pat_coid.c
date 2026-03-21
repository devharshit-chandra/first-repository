#include <stdio.h>
void pat(int n){
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=n;j=j+1){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int x;
    scanf("%d",&x);
    pat(x);
    
}
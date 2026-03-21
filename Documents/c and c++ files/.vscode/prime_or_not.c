#include <stdio.h>
void prime(int n){
    int z=0;
    for (int i=1;i<=n;i=i+1){
        if(n%i==0){
            z=z+1;
        }
    }
    if(z==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}
int main(){
    int x;
    scanf("%d",&x);
    prime(x);
}
#include <stdio.h>
int prime(int n){
    int z=0;
    for (int i=1;i<=n;i=i+1){
        if(n%i==0){
            z=z+1;
        }
    }
    if(z==2){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    if(prime(x)==0){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}
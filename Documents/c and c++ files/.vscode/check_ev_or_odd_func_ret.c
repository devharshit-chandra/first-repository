#include <stdio.h>
int check(int n){
    if(n%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    int c=check(x);
    if(c==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
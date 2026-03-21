#include <stdio.h>
int neg_or_pos(int n){
    if (n>=0){
        return 0 ;
    }
    else{
        return 1;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    int c=neg_or_pos(x);
    if (c==0){
        printf("positive");
    }
    else{
        printf("negative");
    }
}
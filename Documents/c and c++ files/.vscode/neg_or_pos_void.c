#include <stdio.h>
void neg_or_pos(int n){
    if (n>=0){
        printf("positive");
    }
    else{
        printf("negative");
    }
}
int main(){
    int x;
    scanf("%d",&x);
    neg_or_pos(x);
}
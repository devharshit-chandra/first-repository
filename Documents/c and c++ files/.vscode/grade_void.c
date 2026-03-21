#include <stdio.h>
void grade(int n){
    if (n>90){
        printf("grade : a");
    }
    else if (n>75 && n<=90){
        printf("grade : b");
    }
    else if (n>50 && n<=75){
        printf("grade : c");
    }
    else if (n>32 && n<=50){
        printf("grade : d");
    }
    else{
        printf("grade : f");
    }
}
int main(){
    int x;
    scanf("%d",&x);
    grade(x);
}
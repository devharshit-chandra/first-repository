#include <stdio.h>
int grade(int n){
    if (n>90){
        return 0;
    }
    else if (n>75 && n<=90){
        return 1;
    }
    else if (n>50 && n<=75){
        return 2;
    }
    else if (n>32 && n<=50){
        return 3;
    }
    else{
        return 4;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    if (grade(x)==0){
        printf("grade : a");
    }
    if (grade(x)==1){
        printf("grade : b");
    }
    if (grade(x)==2){
        printf("grade : c");
    }
    if (grade(x)==3){
        printf("grade : d");
    }
    if (grade(x)==4){
        printf("grade : f");
    }
}
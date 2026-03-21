#include <stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if (x>90 && x<100){
        printf("excellent");
    }
    else if (x>80 && x<91){
        printf("very good");
    }
    else if (x>70 && x<81){
        printf("good");
    }
    else if (x>60 && x<71){
        printf("need improvement");
    }
    else if (x>50 && x<61){
        printf("average student");
    }
    else if (x>40 && x<51){
        printf("average student");
    }
    else{
        printf("fail");
    }
}
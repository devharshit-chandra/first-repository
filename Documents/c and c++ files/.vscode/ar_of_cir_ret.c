#include<stdio.h>
int ar_of_cir(float r){
    float a=3.14*r*r;
    return a;
}
int main(){
    float x;
    scanf("%f",&x);
    float c=ar_of_cir(x);
    printf("%f",c);
}
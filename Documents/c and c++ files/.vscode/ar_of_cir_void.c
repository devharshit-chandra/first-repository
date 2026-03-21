#include<stdio.h>
void ar_of_cir(float r){
    float a=3.14*r*r;
    printf("%f",a);
}
int main(){
    float x;
    scanf("%f",&x);
    ar_of_cir(x);
}
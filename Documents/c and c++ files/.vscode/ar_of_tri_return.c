#include<stdio.h>
float ar_of_tri(float x,float y){
    float c=0.5*x*y;
    return c;
}
int main(){
    float a,b;
    scanf("%f\n%f",&a,&b);
    printf("%f",ar_of_tri(a,b));
}
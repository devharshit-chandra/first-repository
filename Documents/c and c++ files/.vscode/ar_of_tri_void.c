#include<stdio.h>
void ar_of_tri(float x,float y){
    float c=0.5*x*y;
    printf("%f",c);
}
int main(){
    float a,b;
    scanf("%f\n%f",&a,&b);
    ar_of_tri(a,b);
}
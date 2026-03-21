#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("remainder when num1 divides num2 %d\n",a%b);
    printf("remainder when num2 divides num1 %d",b%a);
}
#include <stdio.h>
int main(){
int units;
float bill = 0;
printf("Enter the number of units consumed: ");
scanf("%d", &units);
if (units <= 100)
{
bill = units * 4.0;
}
else if (units <= 150)
{
bill = 100 * 4.0 + (units - 100) * 4.6;
}
else if (units <= 200)
{
bill = 100 * 4.0 + 50 * 4.6 + (units - 150) * 5.2;
}
else if (units <= 300)
{
bill = 100 * 4.0 + 50 * 4.6 + 50 * 5.2 + (units - 200) * 6.3;
}
else {
bill = 100 * 4.0 + 50 * 4.6 + 50 * 5.2 + 100 * 6.3 + (units - 300) * 8.0;
}
printf("The total electricity bill is: %.2f\n", bill);
return 0;
}
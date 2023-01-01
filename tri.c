#include <stdio.h>
#include <math.h>
int main()
{

float a,b,c,s,t;
printf("enter 3 sides of triangle");
scanf("%f %f %f",&a,&b,&c);
s = (a+b+c)/2;
t = pow((s*(s-a)*(s-b)*(s-c)),0.5);
printf("A = %.2f",t);

return 0;
}
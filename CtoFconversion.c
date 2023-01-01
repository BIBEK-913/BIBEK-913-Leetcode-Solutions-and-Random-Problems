#include <stdio.h>
int main(int argc, char const *argv[])
{
float c,f;
printf("enter temperature in celsius scale\n");
scanf("%f",&c);
f=9*(c/5)+32;
printf("%.2f degree celsius = %.2f degree fahrenheit",c,f);
    return 0;
}

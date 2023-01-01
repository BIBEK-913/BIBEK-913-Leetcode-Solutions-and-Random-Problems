#include <stdio.h>
int main(int argc, char const *argv[])
{
    int bs,da,hra,gs; //basic salary, dearness allowance, house rent allowance, gross salary//
    printf("enter your basic salary\n");
scanf("%d",&bs);
da=0.4*bs;
hra=0.2*bs;
gs=bs+da+hra;
printf("your gross salary is %d",gs);




    return 0;
}

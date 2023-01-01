#include<stdio.h>
int main(int argc, char const *argv[])
{
    float sal;
    printf("enter your salary : ");
    scanf("%f",&sal);
sal>=25000 && sal<=40000?printf("manager"):sal>=15000 && sal<25000?printf("accountant"):printf("clerk");
    return 0;
}
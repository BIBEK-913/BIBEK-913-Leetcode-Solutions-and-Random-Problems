#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,g;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    g = a>b?(a>c?a:c):(b>c?b:c);
    printf("greatest = %d",g);
    return 0;
}
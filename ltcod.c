#include <stdio.h>
int reverse(int);
int main()
{ 
    int x;
    printf("%d",reverse(x));
    return 0;
}
int reverse(int x)
{
    int r, rev = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        r = x % 10;
        x = x / 10;
        rev = rev * 10 + r;
    }
    return(rev);
}
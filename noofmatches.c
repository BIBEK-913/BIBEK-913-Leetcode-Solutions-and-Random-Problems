//my code
#include <stdio.h>
int numberOfMatches(int);
int main()
{
    int n;
    printf("%d", numberOfMatches(n));
    return 0;
}
int numberOfMatches(int n)
{
    int m = 0;
    scanf("%d", &n);
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            m += n / 2;
            n /= 2;
        }
        else
        {
            m += (n - 1) / 2;
            n = (n - 1) / 2 + 1;
        }
    }
    return (m);
}
#include <stdio.h>
#include <stdbool.h>
bool isThree(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Does %d have exactly 3 divisors?\n", n);
    (isThree(n)) ? printf("-True") : printf("-False");
    return 0;
}
bool isThree(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c += 1;
    }
    return c == 3;
}
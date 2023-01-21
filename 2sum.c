#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int);
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    printf("Is %d a palindrome number?\n", x);
    (isPalindrome(x)) ? printf("True") : printf("False");
    return 0;
}
bool isPalindrome(int x)
{
    int r, rev = 0, temp = x;
    while (x > 0)
    {
        r = x % 10;
        x /= 10;
        rev = rev * 10 + r;
    }
    return (rev == temp);
}

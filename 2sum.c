#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int);
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    printf("Is %d a palindrome number? - %d",x,bool isPalindrome(int x));

    return 0;
}
bool isPalindrome(int x)
{
    int r, rev = 0,temp=x;
    while (x>0)
    {
        r = x % 10;
        x/=10;
        rev=rev*10+r;
    }
    return(rev==temp);
}



bool isSameAfterReversals(int n)
{
    int r, rev1 = 0, rev2 = 0, temp = n;
    while (n > 0)
    {
        r = n % 10;
        rev1 = rev1 * 10 + r;
        n /= 10;
    }
    while (rev1 > 0)
    {
        r = rev1 % 10;
        rev2 = rev2 * 10 + r;
        rev1 /= 10;
    }
    return rev2 == temp;
}

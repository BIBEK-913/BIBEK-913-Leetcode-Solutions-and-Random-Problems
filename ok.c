#include <math.h>
#include <stdint.h>
#include<stdio.h>
int32_t main()
{
    int rem, rev = 0;
    int reverse(int32_t); {
        int32_t x;
        printf("Enter x : ");
        scanf("%d", &x);

        while (x != 0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        return (rev);
    }

    return 0;
}

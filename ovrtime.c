#include <stdio.h>
int main()
{
    int i = 1, hr, extra, pay;
    while (i <= 10)
    {
        printf("\nEnter no. of hours worked : ");
        scanf("%d", &hr);

        extra = hr - 40;

        if (extra >= 0)
            pay = 12 * extra;
        else
            pay = 0;
        printf("\nYour overtime pay is Rs.%d", pay);
        i = i + 1;
    }

    return 0;
}

#include <stdio.h>
int totalMoney(int);
int main()
{
    int n;
    printf("Enter no. of days : ");
    scanf("%d", &n);
    printf("Total Money at the end of %dth day : $%d", n, totalMoney(n));
    return 0;
}

int totalMoney(int n)
{
    int cash = 1, tot = 0, week_num = 1, day = 1;
    while (day <= n)
    {
        tot += cash;
        if (day % 7 == 0)
        {
            week_num++;
            cash = week_num;
        }
        else
            cash++;
        day++;
    }
    return tot;
}
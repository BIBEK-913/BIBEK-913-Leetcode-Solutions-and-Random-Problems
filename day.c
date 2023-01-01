#include <stdio.h>
int main()
{
    int refyr = 1, yr, diff, days, day, lpyrs;

    printf("Enter any year : ");
    scanf("%d", &yr);

    diff = yr - refyr;

    if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
        lpyrs = (yr / 4) - (yr / 100) + (yr / 400) - 1;
    else
        lpyrs = (yr / 4) - (yr / 100) + (yr / 400);
    printf("\nLeap years/days from 1 AD to %d AD = %d", yr, lpyrs);
    days = diff * 365 + lpyrs; // no. of leapyrs = no. of days to be added//
    day = days % 7;
    /* if total days including 1st jan of reference year are exactly divisible by 7,
    then they can exactly fit into the WEEK-ROW & hence 1st jan of input year will be on fst day
    of week i.e. monday; if remainder is 1 then it'll shift to 1 day after(tuesday) & so on...*/

    if (day == 0) 
        printf("\nIt was Monday on 1st January of %d AD.", yr); 
    else if (day == 1)
        printf("\nIt was Tuesday on 1st January of %d AD.", yr);
    else if (day == 2)
        printf("\nIt was Wednesday on 1st January of %d AD.", yr);
    else if (day == 3)
        printf("\nIt was Thursday on 1st January of %d AD.", yr);
    else if (day == 4)
        printf("\nIt was Friday on 1st January of %d AD.", yr);
    else if (day == 5)
        printf("\nIt was Saturday on 1st January of %d AD.", yr);
    else if (day == 6)
        printf("\nIt was Sunday on 1st January of %d AD.", yr);
    return 0;
}
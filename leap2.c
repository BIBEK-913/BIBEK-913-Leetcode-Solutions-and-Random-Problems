#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year : ");
    scanf("%d",&yr);
    if((yr%4 == 0 && yr%100!=0) || (yr%4 == 0 && yr%400 == 0))
        printf("%d is a leap year.",yr);
    else
        printf("%d isn't a leap year.",yr);

    return 0;
}

#include <stdio.h>
int numWaterBottles(int, int);
int main()
{
    int full_bottles, num_exchange;
    printf("Enter no. of possessed full bottles :");
    scanf("%d", &full_bottles);
    printf("Enter no. of empty bottles needed to exchange for a full bottle: ");
    scanf("%d", &num_exchange);
    printf("No. of water bottles you can drink : %d", numWaterBottles(full_bottles, num_exchange));
    return 0;
}
int numWaterBottles(int full_bottles, int num_exchange)
{
    int drunk = 0, empty = full_bottles;
    while (full_bottles > 0)
    {
        drunk += full_bottles;
        full_bottles = empty / num_exchange;
        empty = empty % num_exchange + full_bottles;
    }
    return drunk;
}
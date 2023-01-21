#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, a, b, d;

    printf("\nEnter x & y coordinates of centre of circle : ");
    scanf("%f %f", &x, &y);

    printf("\nEnter radius of circle : ");
    scanf("%f", &r);

    printf("\nEnter x & y coordinates of any point : ");
    scanf("%f %f", &a, &b);

    d = sqrt(pow((a - x), 2) + pow((b - y), 2));

    if (d < r)
        printf("\n(%f,%f) lies inside the circle.", a, b);
    else if (d > r)
        printf("\n(%f,%f) lies outside the circle.", a, b);
    else
        printf("\n(%f,%f) lies on the circle.", a, b);

    return 0;
}
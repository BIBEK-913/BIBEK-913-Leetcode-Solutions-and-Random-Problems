#include <stdio.h>
int main()
{
    float r, h, a, v;
    printf("enter radius of circle");
    scanf("%f", &r);
    a = (22 / 7) * r * r;
    printf("area of circle = %.2f \n", a);
    printf("enter height of cylinder");
    scanf("%f", &h);
    v = a * h;
    printf("volume of cylinder= %.2f\n", v);

    return 0;
}

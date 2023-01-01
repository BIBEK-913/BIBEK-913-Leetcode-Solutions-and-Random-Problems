#include <stdio.h>
int main(int argc, char const *argv[])
{
    float r,g,b,c,m,y,k,w,rf,gf,bf;
    printf("Enter values of Red,Green,Blue(RGB) respectively(0-255) : ");
    scanf("%f %f %f",&r,&g,&b);
    rf = r/255;
    gf = g/255;
    bf = b/255;
    if(rf>gf && rf>bf)
        w = rf;
    else if(gf>rf && gf>bf)
        w = gf;
    else
        w = bf;
    c = (w-rf)/w;
    m = (w-gf)/w;
    y = (w-bf)/w;
    k = 1-w;
    printf("Cyan(C) = %f\nMagenta(M) = %f\nYellow(Y) = %f\nBlack(K) = %f",c,m,y,k);
    return 0;
}

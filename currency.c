#include <stdio.h>
int main()
{
    int n,a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2,t;
    printf("Enter amount in possession : ");
    scanf("%d",&n);
    a1 = n/100;
    a2 = n%100;
    b1 = a2/50;
    b2 = a2%50;
    c1 = b2/10;
    c2 = b2%10;
    d1 = c2/5;
    d2 = c2%5;
    e1 = d2/2;
    e2 = d2%2;
    f1 = e2/1;
    f2 = e2%1;
    t = a1+b1+c1+d1+e1+f1;
    printf("\nf2 = %d",f2);
    printf("\nrequired no. of notes = %d",t);
return 0;
}

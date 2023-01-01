#include <stdio.h>
int main()
{
int n,a,b,c,d,e,s,r;
printf("Enter a 5-digit number ");
scanf("%d",&n);
e = n%10;
d = (n/10)%10;
c = (n/100)%10;
b = (n/1000)%10;
a = (n/10000)%10;
s = a+b+c+d+e;
r = e*10000+d*1000+c*100+b*10+a;
printf("Sum of digits of %d = %d\n",n,s);
printf("Reversed number = %d",r);
return 0;
}

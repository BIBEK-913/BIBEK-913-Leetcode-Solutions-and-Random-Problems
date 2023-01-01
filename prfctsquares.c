#include<stdio.h>
#include<math.h>
int main()
{
    float n,t=0,temp;
    int i,c=0;
    printf("enter a num : ");
    scanf("%f",&n);
    temp=n;
    if(fmodf(n,(pow(n,0.5)))==0.0)
    printf("\ncount=%f",1.0);
    else{
            for(i=1;i<=temp;i++) {
                n=n-1;
                if(fmodf(n,(pow(n,0.5)))==0.0) {
                t=t+n;
                c=c+1;
                if(t==temp)
                break;
                else
                continue;
                }
                
                
            }
            printf("\ncount=%d",c);
            
    }
    return 0;
}

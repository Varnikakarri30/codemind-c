#include <stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
printf("%d",sum);    
}
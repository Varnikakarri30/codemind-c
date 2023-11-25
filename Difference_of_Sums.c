#include <stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,sq2,sq;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        sum1=sum1+sq;
        sum2=sum2+i;
        sq2=sum2*sum2;
    }
    printf("%d",sq2-sum1);
}
#include <stdio.h>
int main()
{
    int n,r,t;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        t=r+1;
        printf("%d",t);
        break;
    }
}
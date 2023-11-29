#include <stdio.h>
int main()
{
    int n,m,x,y;
    scanf("%d%d",&n,&m);
    x=(500-(n*2)+1000-((n+m)*4));
    y=(500-(n+m)*2)+1000-(m*4);
    if(x>y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}
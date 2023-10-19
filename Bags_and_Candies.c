#include <stdio.h>
#include <math.h>
int main()
{
    int n,k,m,bags;
    scanf("%d %d %d %d",&n,&k,&m);
    bags=ceil(n/(k*m));
    if(n%(k*m)==0)
    {
        printf("%d",bags);
    }
    else 
    {
    printf("%d",bags+1);
    }
}
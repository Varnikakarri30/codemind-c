#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x%y==0)
    {
        printf("%d",x/y);
    }
    else if(x%y!=0)
    {
        int z=ceil(x/y);
        printf("%d",z+(x-y*z));
    }
}
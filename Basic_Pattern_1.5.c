#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=65;i<=n+64;i++)
    {
        for(j=65;j<=n+64;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
    
}
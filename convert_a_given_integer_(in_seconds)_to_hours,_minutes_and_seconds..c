#include <stdio.h>
int main()
{
    int n,h,min,s;
    scanf("%d",&n);
    h=n/3600;
    min=(n%3600)/60;
    s=(n%3600)%60;
    printf("H:M:S-%d:%d:%d",h,min,s);
}
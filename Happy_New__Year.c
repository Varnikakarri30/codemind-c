#include <stdio.h>
int main()
{
    int h,m,H;
    scanf("%d %d",&h,&m);
    H=(h*60)+m;
    printf("%d",1440-H);
}
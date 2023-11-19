#include <stdio.h>
int main()
{
    int sec;
    scanf("%d",&sec);
    printf("%d Hour(s) ",sec/60);
    printf("%d Minute(s)",sec%60);
}
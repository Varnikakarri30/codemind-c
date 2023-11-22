#include <stdio.h>
int main()
{
    int x,y;
    float avg;
    scanf("%d %d",&x,&y);
    avg=(x+y)/2.0;
    printf("Average of %d and %d is: %.2f",x,y,avg);
}
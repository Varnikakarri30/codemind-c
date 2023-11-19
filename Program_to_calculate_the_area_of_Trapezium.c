#include <stdio.h>
int main()
{
    int base1,base2,height;
    float area;
    scanf("%d %d %d",&base1,&base2,&height);
    area=0.5*height*(base1+base2);
    printf("%.4f",area);
}
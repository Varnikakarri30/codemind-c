#include<stdio.h>
int main()
{
    float a,b,c,pf,gs;
    scanf("%f %f %f",&a,&b,&c);
    pf=(12.0/100)*a;
    gs=a+b+c+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}
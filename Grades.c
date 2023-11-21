#include <stdio.h>
int main()
{
    int p,ch,b,m,cs;
    scanf("%d %d %d %d %d",&p,&ch,&b,&m,&cs);
    if((p+ch+b+m+ch)/5>=90)
    {
        printf("Grade A");
    }
    else if((p+ch+b+m+ch)/5>=80)
    {
        printf("Grade B");
    }
    else if((p+ch+b+m+ch)/5>=70)
    {
        printf("Grade C");
    }
    else if((p+ch+b+m+ch)/5>=60)
    {
        printf("Grade D");
    }
    else if((p+ch+b+m+ch)/5>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}
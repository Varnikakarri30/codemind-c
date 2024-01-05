#include <stdio.h>
int main()
{
    char c[100];
    scanf("%[^n]s",c);
    int count=0;
    int a,e,i,o,u;
    for(int i=0;c[i]!=NULL;i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        count=count+1;
    }
    printf("%d",count);
}
#include <stdio.h>
int main()
{
    char st[100];
    scanf("%s",st);
    for(int i=0;st[i]!=NULL;i++)
    {
        if(i==6)
        printf("%c",st[i]);
    }
}
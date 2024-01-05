#include <stdio.h>
int main()
{
    int i,j;
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int count1=0;
    int count2=0;
    for(i=0,j=0;s1[i]!=NULL,s2[j]!=NULL;i++,j++)
    {
        if(s1[i]==s2[j])
        count1=count1+1;
        else
        count2=count2+1;
    }
    if(count2==0)
    printf("Strings are Equal");
    else
    printf("Strings are not Equal");
}
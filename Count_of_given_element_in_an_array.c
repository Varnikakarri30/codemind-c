#include <stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
          if(se==arr[i])
          {
              count++;
          }
    }
    printf("%d",count);
}
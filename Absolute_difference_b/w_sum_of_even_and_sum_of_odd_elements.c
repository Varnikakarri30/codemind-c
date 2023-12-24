#include <stdio.h>
int main()
{
    int n,sum=0,sum1=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum1=sum1+arr[i];
        }
    }
    printf("%d",sum1>sum?sum1-sum:sum-sum1);
}
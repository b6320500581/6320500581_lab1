#include<stdio.h>
int main()
{
   int n,b,sum;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    b=a[0];
    for (int i=0;i<n;i++)
    {
        if(a[i]>=b)
        {
            b=a[i];
            sum=i;
        }

    }
    for (int i=0;i<n;i++)
    {
        if(a[sum]==a[i])
        {
            sum=i;
            break;
        }
    }
     printf("%d %d",sum+1,a[sum]);

    return 0;
}

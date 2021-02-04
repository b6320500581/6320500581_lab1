#include<stdio.h>
int main()
{
    unsigned int n,m,a=0;
    unsigned long t;
    char k,sum;
    scanf("%u %u %lu",&n,&m,&t);
    scanf(" %c",&k);
    if(k=='L')
    {
        for (int i=1;i<t;i++)
        {
            a=a+n;
            if(a>=t)
            {
                sum='L';
                break;
            }
            a=a+m;
            if(a>=t)
            {
                sum='R';
                break;
            }
        }
    }
    else if(k=='R')
    {
        for (int i=1;i<t;i++)
        {
            a=a+m;
            if(a>=t)
            {
                sum='R';
                break;
            }
            a=a+n;
            if(a>=t)
            {
                sum='L';
                break;
            }
        }
    }
    printf("%c",sum);

    return 0;
}

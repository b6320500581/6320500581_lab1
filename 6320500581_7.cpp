#include<stdio.h>
int main()
{
    int m=0,i12=0,hour=0;
    float i24;
    scanf("%f",&i24);
    i12=i24*100;
    m=i12%100;
    hour=i24;
    if(hour>=0&&hour<=11)
    {

            if(m>=0&&m<10)
            {
                printf("%d:0%d a.m.",hour,m);
            }
            else
            {
                printf("%d:%d a.m.",hour,m);
            }

    }
    else if(hour>=12&&hour<=23)
    {
        if(hour>12)
        {
            hour=hour-12;
        }

            if(m>=0&&m<10)
            {
                printf("%d:0%d p.m.",hour,m);
            }
            else
            {
                printf("%d:%d p.m.",hour,m);
            }

    }

    return 0;
}

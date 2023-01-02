#include<stdio.h>
int main()
{
    int i,n,m=0,avg,v=0;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=m+a[i];
    }
    avg=m/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            printf("True");
            break;
        }
        else
        {
            v+=1;
        }
    }
    if(v==n)
    {
        printf("False");
    }
}
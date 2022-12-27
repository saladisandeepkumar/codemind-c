#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float count=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        count=count+sqrt(i);
    }
    printf("%.2f",count);
}
#include<stdio.h>
int main()
{
    int i,a,d=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            d=d+i;
            
        }
    }
    if(d>a) printf("ABUNDANT");
    else if(d==a) printf("PERFECT");
    else if(d<a) printf("DEFICIENT");
}
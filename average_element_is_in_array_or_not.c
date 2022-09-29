#include<stdio.h>
int main()
{
    int n,i,a[1000],avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
       
        avg=sum/n;
       
       
    }
    for(i=0;i<n;i++)
    {
         if(avg==a[i])
        {
            printf("True");
            break;
        }
    }
    if(avg!=a[i])
    {
        printf("False");
    }
}
#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
}
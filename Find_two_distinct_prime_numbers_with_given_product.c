#include<stdio.h>
int main()
{
    int n,i,j,c=0,d=0,e=0,f=0,k,l;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(i*j==n)
            {
                c=i;
                d=j;
            }
            
        }
    }
    for(k=1;k<c;k++)
    {
        if(c%k==0)
        {
            e++;
        }
    }
    for(l=1;l<d;l++)
    {
        if(d%l==0)
        {
            f++;
        }
    }
    if(e==1 && f==1)
    {
    printf("%d %d",d,c);
    }
    else
    {
        printf("-1");
    }
}
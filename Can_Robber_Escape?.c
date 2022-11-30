#include<stdio.h>
int main()
{
    int n,a,i,odd=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==1)
        {
            odd++;
        }
        
    }
    if(odd>2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
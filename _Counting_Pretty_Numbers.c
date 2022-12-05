#include<stdio.h>
int main()
{
    int n,a,b,c=0;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d%d",&a,&b);
        c=0;
        while(a<=b)
        {
            if(a%10==2||a%10==3||a%10==9)
            {
                c++;
            }
            a++;
        
        }
        n--;
        printf("%d
",c);
    }
}
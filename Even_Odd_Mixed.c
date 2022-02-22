#include<stdio.h>
int main()
{
    int n,r,E=0,O=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            E++;
        }
        else
        {
            O++;
        }
        n=n/10;
    
    }
    if(O==0)
    {
    printf("Even");
        
    }
    else if(E==0)
   { printf("Odd");
       
   }
    else
    {
        printf("Mixed");
        
    }
        
    
        
}
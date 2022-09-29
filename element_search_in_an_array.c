#include<stdio.h>
int main()
{
    int n,a[1000],i,se,c;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
          
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        {
            if(se==a[i])
            {
             printf("True");
             break;
            }
           
        }  
    }
    if(se!=a[i])
    {
        printf("False");
    }
    
    
}
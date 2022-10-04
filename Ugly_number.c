#include<stdio.h>
int main()
{
    int n,i,a=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=1)
     {
         if(temp%2==0)
         {
             temp=temp/2;
         }
         else if(temp%3==0)
         {
             temp=temp/3;
         }
         else if(temp%5==0)
         {
             temp=temp/5;
         }
         else
         {
             a=1;
             break;
         }
     }
     if(a==0)
     {
         printf("Ugly Number");
     }
     else
    {
         printf("Not Ugly Number");
     }
   
}
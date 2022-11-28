#include<stdio.h>
int main()
{
    int a,b,sum,dif,pro,rem,quo;
    scanf("%d %d",&a,&b);
    sum=a+b;
    dif=a-b;
    pro=a*b;
    quo=a/b;
    rem=a%b;
    printf("Sum:%d
",sum);
    printf("Difference:%d
",dif);
    printf("Product:%d
",pro);
    printf("Quotient:%d
",quo);
    printf("Remainder:%d
",rem);
}
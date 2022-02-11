#include<stdio.h>
int main()
{
    int n;
    int sqr, sum=0, rem;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        rem=sqr%10;
        sum+=rem;
        sqr/=10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}
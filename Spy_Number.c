#include<stdio.h>
int main() 
{
    int a, s=0, m=1, temp,r;
    scanf("%d",&a);
    temp=a;
    while (temp!=0)
    {
       r=temp%10;
       s=s+r;
       m=m*r;
       temp=temp/10;
    }
    if(s==m)
    printf ("Spy Number");
    else
    printf ("Not Spy Number");
    return 0;
    
}
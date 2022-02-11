#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d%d",&a,&b);
    r=(a>b)?a:b;
    while(1)
    {
        if(r%a==0&&r%b==0)
        {
            printf("%d",r);
            break;
        }
        ++r;
    }
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,temp,b,rev;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        temp=arr[i];
        while (temp>0)
        {
            b=temp%10;
            rev=(rev*10)+b;
            temp=temp/10;
        }
        if (arr[i]==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}
#include<stdio.h>
#include<stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    float avg,sum=0;
    int c=0,count=0;
    for (i=0; i<a; i++)
    {
        c=1;
        for (j=0; j<a; j++)
        {
            if (i!=j && arr[i]!=-1)
            {
                if (arr[i]==arr[j])
                {
                    c++;
                    arr[j]=-1;
                }
            }
        }
        if (arr[i]==c)
        {
            count++;
            sum+=arr[i];
        }
    }
    if (count==0)
    {
        printf("%d",-1);
    }
    else
    {
        avg=sum/(count*1.0);
        printf("%.2f",avg);
    }
}
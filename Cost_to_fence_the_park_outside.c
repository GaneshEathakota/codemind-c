#include<stdio.h>
int main()
{
    int l, b, w, c, area, cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    
        area=((l+w+w)*(b+w+w))-l*b;
        cost=c*area;
        {
            
        printf("%d",cost);
    }
}
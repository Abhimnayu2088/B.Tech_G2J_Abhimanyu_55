#include<stdio.h>
int main()
{
    int n,i,esum=0,osum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            esum+=i;
        }
        else
        {
            osum+=i;            
        }
    }
    printf("sum of all even no.=%d",esum);
    printf("sum of all odd no.=%d",osum);
    return 0;
}

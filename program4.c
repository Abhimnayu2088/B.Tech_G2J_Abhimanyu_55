#include<stdio.h>
int main()
{
    int n,count,sum=0,r,n1;
    printf("enter a number");
    scanf("n%d",&n);
    n1=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("no. of digit=%d",count);
        n=n1;
        while(n>0)
        {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
        if (sum==n1)
        printf("number is a armstrong number");
        else
        printf("number is not a armstrong number");
        return 0;
    }
}
    

    

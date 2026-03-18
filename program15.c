#include<stdio.h>
int main()
{
    int a[50],n,i,key,loc=-1;
    printf("enter no. of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("enter searching element");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
        loc=i;
        printf("%d element is found at %d index",key,loc);
        break;
    }
}
    if(loc==-1)
    printf("search is unsuccessfully");
    return 0;
}
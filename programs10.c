#include<stdio.h>
int main()
{
    int hindi,english,science,math,computer;
    float sum,per;
    printf("enter marks of hindi");
    scanf("%d",&hindi);
    printf("enter marks of english");
    scanf("%d",&english);
    printf("enter marks of science");
    scanf("%d",&science);
    printf("enter marks of math");
    scanf("%d",&math);
    printf("enter marks of computer");
    scanf("%d",&computer);

    sum=hindi+english+science+math+computer;
    per=(float)sum/5;    
    if(per>=90&& per<=100)
    {
        printf("grade A");

    }
    else if (per>=80&& per<=90)
    {
        printf("grade B");

    }
    else if (per>=60&& per<=80)
    {
        printf("grade C");

    }
    else if (per<60)
    {
        printf("grade D");

    }
}
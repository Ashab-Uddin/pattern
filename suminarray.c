#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,sum=0;
    for (i=0;i<=4;i++)
    {
        sum = sum +a[i];
    }
        printf("Total: %d\n",sum);
        printf("Average: %d",sum/5);
    
    return 0;
}
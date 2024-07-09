#include<stdio.h>
int main()
{
    int i,n,a[20],sum =0;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the %d numbers: ",n);
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<=n-1;i++)
    {
        sum = sum+a[i];
    }
        printf("Total: %d",sum);
    
    return 0;
}
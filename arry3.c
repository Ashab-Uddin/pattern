#include<stdio.h>
int main()
{
    int a[50],i;
    for (i=1;i<=10; i++)
        a[i] = i*10;
    for (i=1;i<=10;i++)
        printf("%d ",a[i]);

    return 0;
}
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (row = 1; row<=n; row++)
    {
        for (col = 1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col = 1 ; col<=row; col++)
        {
            printf("%c",col+64);//if sum 96 then is small alphabet print
        }
            printf("\n");
    }
        return 0;
}
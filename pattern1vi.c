// patter type 1vi
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (row = 1; row<=n; row++)
    {
        for (col =1; col<=row; col++)
        {
                printf("%d",row+64);// if i sum 96 printf small alphabet
        }
                printf("\n");
    }
        return 0;
}

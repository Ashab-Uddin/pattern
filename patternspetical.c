/*
Enter a number: 9
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36
7 14 21 28 35 42 49
8 16 24 32 40 48 56 64
9 18 27 36 45 54 63 72 81 */
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (row=1; row<=n; row++)
    {
        for (col=1; col<=row; col++)
        {
            printf("%d ", col*row);
        }
            printf("\n");
    }
        return 0;
}
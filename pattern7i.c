/*Enter a number: 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9*/
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n;col++)
        {
            printf("%d ",col);
        }
            printf("\n");
    }
        return 0;
}
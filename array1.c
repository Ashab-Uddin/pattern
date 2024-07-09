#include<stdio.h>
int main(){
    int i,j;

    int marks[5];
    for (i=0;i<=4;i++)
    {
        scanf("%d",&marks[i]);
    }
    for (j=0;j<=4;j++)
    {
        printf("%d ",marks[j]);
    }
        return 0;
}
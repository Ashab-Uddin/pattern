#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number 1-7: ");
    scanf("%d",&n);
    switch(n)
    {
        case 7:
                printf("Saturday");
            break;
        case 6:
                printf("Sunday");
            break;
        case 5:
                printf("Monday");
            break;
        case 4:
                printf("Tuesday");
            break;
        case 3:
                printf("Wednesday");
            break;
        case 2:
                printf("Thursday");
            break;
        case 1:
                printf("Friday");
            break;
        default:
                printf("You Entered the invalid input");
    }
        return 0;
}
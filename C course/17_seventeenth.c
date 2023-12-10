#include<stdio.h>
int main()
{
    int rows;
    printf("Enter No. of rows:");
    scanf("%d", &rows);
    for(int i = 1; i <= rows; i++)
    // for (int i = rows; i >= 1; i--)
    {
        // Inner Loop to print white spaces
        for(int j = 1; j <= 2*(rows -i); j++)
        {
            printf(" ");
        }
        for (int k =1; k < 2*i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
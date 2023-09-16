#include<stdio.h>

int main () {
    int A, B, sum = 0;
    printf("Enter two Numbers, A and B: \n");
    scanf("%d%d", &A, &B);
    sum = A + B;
    printf("The sum of the numbers is %d",sum);
    return 0;
}
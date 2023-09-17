#include<stdio.h>

int main() {
    int x, y, temp;
    printf("Enter what is x:");
    scanf("%d", &x);
    printf("Enter what is y:");
    scanf("%d",&y);
    
    temp = x;
    x=y;
    y=temp;
    printf("the swapped values of x: %d and y: %d", x, y);
    return 0;
}
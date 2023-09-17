#include<stdio.h>
#include<math.h>

int factorial(int n, int *fact)
{
    int x;
    *fact = 1;
    for ( x = 1; x < n; x++)
    {
        *fact = *fact * x;
    }
    
}

int main()
{
    int fact;
    int num = 5;
    factorial(num,&fact);
    printf("The value of factorial of %d is %d",num,fact);
}

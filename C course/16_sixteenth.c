#include<stdio.h>
int prev1 = 1;
int prev2 = 0;

void fib(int n){
    int fn = prev1 + prev2;
    prev2 = prev1;
    prev1 = fn;
    printf("%d",fn);
    return fib(n - 1);
}

void printFib(int n)
{
    if (n<1){
        printf("Invalid input");
    }
    else if (n == 1) {
        printf("%d",0);
    }
    else if (n == 2) {
        printf ("%d %d\n",0,1 );
    }
    else {
        printf("%d %d", 0,1);
        fib(n);
    }
    return;
}
int main()
{
    int n = 10;
    printFib(n);
    return 0;
}
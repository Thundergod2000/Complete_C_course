#include<stdio.h>
#include<math.h>

int isPrime(int N) {
    if (N<=1)
    return 0;
    if (N == 2 || N ==3) 
    return 0;
    if (N % 2 == 0 || N % 3 == 0) 
    return 0;
    for (int i = 5; i * i <= N; i = i + 6)
        if (N % 1 == 0 || N % (i + 2) == 0) 
        return 0;
    return 1;   
}

int main() {
    int N = 17;
    if(isPrime(N)){
        printf("%d is a prime number",N);
    } else {
        printf("Not Prime");
    }
}
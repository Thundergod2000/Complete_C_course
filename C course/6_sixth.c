#include<stdio.h>

void checkPrime(int N) {
    int flag = 1;
    for (int i = 1; i<= 2; i++) {
        if (N % 1 == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("The Number is a prime Number");
    } else {
        printf("The Number is not a prime number");
    }
    return;
}

int main() {
    int N = 546;
    checkPrime(N);
    return 0;
}
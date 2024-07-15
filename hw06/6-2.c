#include <stdio.h>

int isPrime(int num) {
    if(num == 1) return 0;
    
    for(int i = 2; i < num; i++) {
        if(num%i == 0) return 0;
    }
    
    return 1;
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    int sw = isPrime(n);
    
    if(sw == 0) printf("%d is not a prime number\n", n);
    else if(sw == 1) printf("%d is a prime number\n", n);

    return 0;
}
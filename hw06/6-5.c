#include <stdio.h>

long long int factorial(int num) {
    if(num == 1) return 1;
    else return factorial(num-1)*num;
}

int main() {
    int n;
    
    scanf("%d", &n);
    printf("%lld", factorial(n));
    
    return 0;
}
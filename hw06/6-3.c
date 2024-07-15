#include <stdio.h>

int isPrime(int num) {
    if(num == 1) return 0;
    
    for(int i = 2; i < num; i++) {
        if(num%i == 0) return 0;
    }
    
    return 1;
}

int main() {
    int n, cnt = 0;
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        if(isPrime(i)) cnt += 1;
    }
    
    printf("%d", cnt);
    
    return 0;
}

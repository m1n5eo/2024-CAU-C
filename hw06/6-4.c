#include <stdio.h>

int fibonacci(int first, int second, int third, int now, int num) {
    if(now >= num) {
        if(num == 1) return second;
        else if(now == num) return third;
    }
    else return fibonacci(second, third, second+third, now+1, num);
}

int main() {
    int n;
    
    scanf("%d", &n);
    printf("%d", fibonacci(0, 0, 1, 2, n));
    
    return 0;
}
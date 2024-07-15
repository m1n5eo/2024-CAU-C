#include <stdio.h>

int main() {
    int arr[11];
    double sum = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("%.3lf", sum/10);
    
    return 0;
}

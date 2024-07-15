#include <stdio.h>

int main() {
    int n = 10;
    int arr[11], arr_reverse[11];
    
    printf(">> ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr_reverse[n-i-1] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr_reverse[i]);
    }
    
    return 0;
}
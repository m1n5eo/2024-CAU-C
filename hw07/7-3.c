#include <stdio.h>

int main() {
    int n, arr[111];
    
    printf("Enter the length of array: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter the array value #%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int n = 10, arr[11];
    
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        if(arr[i] == 10) {
            printf("Index: %d\n", i);
            break;
        }
        if(i == n-1) {
            printf("Index: -1\n");
            break;
        }
    }
    
    return 0;
}
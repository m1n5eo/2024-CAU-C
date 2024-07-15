#include <stdio.h>

int main() {
    int n, x[111], y[111];
    double sum_x = 0, sum_y = 0;
    
    printf("Enter the number of coordinates: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter the #%d coordinate: ", i+1);
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for(int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
    }
    
    printf("%.3lf %.3lf", sum_x/n, sum_y/n);
    
    return 0;
}
#include <stdio.h>

int main() {
    char ch;

    while(1) {
        scanf(" %c", &ch);

        if(ch == 'A') {
            printf("100");
            break;
        }
        else if(ch == 'B') {
            printf("90");
            break;
        }
        else if(ch == 'C') {
            printf("80");
            break;
        }
        else {
            printf("Please enter a current value again.\n");
            continue;
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100] = {0};
    fgets(string, sizeof(string), stdin);

    FILE *file = NULL;
    file = fopen("test.txt", "w");
    if(file == NULL) {
        perror("Failed to write file.\n");
        return -1;
    }

    fputs(string, file);

    fclose(file);

    file = NULL;
    file = fopen("test.txt", "r");
    if(file == NULL) {
        perror("Failed to read file.\n");
        return -1;
    }

    fgets(string, sizeof(string), file);
    printf(string);

    fclose(file);

    return 0;
}
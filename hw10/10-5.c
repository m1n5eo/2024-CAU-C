#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[1111] = {0};
    char *token = NULL;
    char *next_token = NULL;

    int word_count = 0;
    int is_count = 0;

    fgets(string, 1111, stdin);

    token = strtok(string, " ");
    while(token != NULL) {
        next_token = strtok(NULL, " ");

        if(next_token == NULL) {
            token[strlen(token)-1] = 0;
            word_count += 1;

            if(strcmp(token, "is") == 0 || strcmp(token, "Is") == 0) {
                is_count += 1;
            }
        }
        else {
            word_count += 1;

            if(strcmp(token, "is") == 0 || strcmp(token, "Is") == 0) {
                is_count += 1;
            }
        }

        token = next_token;
    }

    printf("Word count: %d, is count: %d", word_count, is_count);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[1111] = {0};
    char word[111] = {0};

    scanf("%s", word);

    if(strcmp(word, "end") == 0) return 0;

    sprintf(string, "%s", word);
    printf("%s\n", string);

    scanf("%s", word);
    while(strcmp(word, "end") != 0) {
        sprintf(string, "%s %s", string, word);
        printf("%s\n", string);
        scanf("%s", word);
    }

    return 0;
}
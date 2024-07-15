#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Food {
    int price;
    char name[111];
} Food;

int main() {
    int food_count = 0;
    int i = 0;
    int price;
    char name[111] = {0};
    
    FILE *file = fopen("test.txt", "r");
    if(file == NULL) {
        perror("Failed to read file.");
        return -1;
    }

    char buffer[111];

    while(fgets(buffer, sizeof(buffer), file) != NULL) {
        food_count += 1;
    }
    rewind(file);

    Food *food_list = (Food *)calloc(food_count, sizeof(Food));

    while(fscanf(file, "#%d: %s (%d)\n", &i, name, &price) != EOF) {
        i -= 1;

        strncpy(food_list[i].name, name, strlen(name));
        food_list[i].price = price;
    }

    fclose(file);

    int over_10k_count = 0;

    for(int i = 0; i < food_count; i++) {
        if(food_list[i].price >= 10000) {
            over_10k_count += 1;
        }
    }

    printf("%d items are detected from %d items.\n", over_10k_count, food_count);

    free(food_list);

    return 0;
}
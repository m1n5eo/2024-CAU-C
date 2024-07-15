#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Food {
    int price;
    char name[111];
} Food;

int main() {
    int food_count = 0;

    printf("How many foods do you have: ");
    scanf("%d", &food_count);
    getchar();

    Food *food_list = (Food *)calloc(food_count, sizeof(Food));
    
    for(int i = 0; i < food_count; i++) {
        printf("Give the name of food (#%d): ", i+1);
        fgets(food_list[i].name, sizeof(food_list[i].name), stdin);
        food_list[i].name[strlen(food_list[i].name)-1] = 0;

        printf("Give the price of food (#%d): ", i+1);
        scanf("%d", &food_list[i].price);
        getchar();
    }

    FILE *file = fopen("test.txt", "w");
    if(file == NULL) {
        perror("Failed to write file.\n");
        return -1;
    }

    for(int i = 0; i < food_count; i++) {
        fprintf(file, "#%d: %s (%d)\n", i+1, food_list[i].name, food_list[i].price);
    }
    
    fclose(file);
    free(food_list);

    file = fopen("test.txt", "r");
    if(file == NULL) {
        perror("Failed to read file.\n");
        return -1;
    }

    char string[111] = {0};
    char name[111] = {0};

    int i = 0;
    int price;
    
    food_list = (Food *)calloc(food_count, sizeof(Food));

    while(fscanf(file, "#%d: %s (%d)\n", &i, name, &price) != EOF) {
        i -= 1;

        strncpy(food_list[i].name, name, strlen(name));
        food_list[i].price = price;

        printf("#%d: %s (%d)\n", i+1, food_list[i].name, food_list[i].price);
    }

    fclose(file);
    free(food_list);

    return 0;
}
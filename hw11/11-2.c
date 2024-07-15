#include <stdio.h>
#include <string.h>

typedef struct Food {
    int price;
    char name[22];
} Food;

int main() {
    Food food_list[11111] = {0};

    int menu_size = 0;
    printf("How many foods do you have: ");
    scanf("%d", &menu_size);
    getchar();

    for(int i = 0; i < menu_size; i++) {
        printf("Give the name of food (#%d): ", i+1);
        fgets(food_list[i].name, 22, stdin);

        int length = strlen(food_list[i].name);
        food_list[i].name[length-1] = 0;

        printf("Give the price of food (#%d): ", i+1);
        scanf("%d", &food_list[i].price);
        getchar();
    }

    for(int i = 0; i < menu_size; i++) {
        printf("#%d: %s (%d)\n", i+1, food_list[i].name, food_list[i].price);
    }

    return 0;
}
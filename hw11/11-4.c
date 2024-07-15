#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Food {
    int price;
    char name[22];
} Food;

typedef struct Menu {
    int size;
    Food *food_list;
} Menu;

void printMenu(Menu *menu) {
    int total_price = 0;

    printf("<Menu>\n");
    for(int i = 0; i < menu->size; i++) {
        total_price += menu->food_list[i].price;
        printf("#%d: %s (%d)\n", i+1, menu->food_list[i].name, menu->food_list[i].price);
    }
    printf("Total: %d", total_price);
}

int main() {
    Menu menu = {0};

    int menu_size = 0;

    printf("How many foods do you have: ");
    scanf("%d", &menu.size);
    getchar();

    menu.food_list = (Food *)calloc(menu.size, sizeof(Food));

    for(int i = 0; i < menu.size; i++) {
        printf("Give the name of food (#%d): ", i+1);
        fgets(menu.food_list[i].name, 22, stdin);

        int length = strlen(menu.food_list[i].name);
        menu.food_list[i].name[length-1] = 0;

        printf("Give the price of food (#%d): ", i+1);
        scanf("%d", &menu.food_list[i].price);
        getchar();
    }

    printMenu(&menu);

    free(menu.food_list);

    return 0;
}
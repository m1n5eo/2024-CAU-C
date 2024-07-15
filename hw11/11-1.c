#include <stdio.h>
#include <string.h>

typedef struct Food {
    int price;
    char name[22];
} Food;

int main() {
    Food food = {0};

    printf("Give the name of food: ");
    fgets(food.name, 22, stdin);

    int length = strlen(food.name);
    food.name[length-1] = 0;

    printf("Give the price of food: ");
    scanf("%d", &food.price);

    printf("%s (%d)\n", food.name, food.price);

    return 0;
}
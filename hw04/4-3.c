#include <stdio.h>

int main() {
    int money;
    char rate;

    scanf("%d %c", &money, &rate);

    if(rate == 'A') money += money*0.05;
    else if(rate == 'B') money += money*0.04;
    else if(rate == 'C') money += money*0.02;
    else if(rate == 'D') money += money*0.01;
    else if(rate == 'E') money += money*0.005;

    printf("%d", money);

    return 0;
}
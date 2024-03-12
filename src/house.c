#include <stdio.h>

#include "house_calc.h"

int main() {
    int width, length, height, budget;
    if (scanf("%d%d%d%d", &width, &length, &height, &budget) &&
        width > 0 && length > 0 && height > 0) {
        calculate_house_cost(width, length, height, budget);
    } else {
        print_error();
    }
    return 0;
}

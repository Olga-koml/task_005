#include <stdio.h>
#include <stdlib.h>
#include "house_calc.h"

void calculate_house_cost(int width, int len, int height, int budget) {
    int foundation_calc = width * len * FOUNDATION_COSTS;
    int wall_calc = (width + len) * 2 * height * WALL_COSTS;
    int roof_calc = width * len * ROOF_COSTS + height * ROOF_HEIGHT_COSTS;
    int total_cost_building_house = foundation_calc + wall_calc + roof_calc;
    if (total_cost_building_house <= budget) {
        printf("YES");
    } else {
        printf("NO %d", total_cost_building_house - budget);
    }
}

void print_error() {
    fprintf(stderr, "Grep, you are have negative sides of house");
    exit(EXIT_FAILURE);
}

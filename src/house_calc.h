#ifndef HOUSE_CALC_H
#define HOUSE_CALC_H

#define FOUNDATION_COSTS 1000
#define WALL_COSTS 500
#define ROOF_COSTS 700
#define ROOF_HEIGHT_COSTS 100

void calculate_house_cost(int width, int len, int height, int budget);
void print_error();

#endif
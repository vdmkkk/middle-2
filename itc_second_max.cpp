#include "middle.h"

int itc_second_max_num(long long number){
    if (number < 0) number = -number;
    int maxx = 0;
    int maxx2 = 0;
    while (number > 0){
        if (number % 10 > maxx){
            maxx2 = maxx;
            maxx = number % 10;
        }
        number /= 10;
    }
    return maxx2;
}

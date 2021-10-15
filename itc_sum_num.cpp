#include "middle.h"

int itc_sum_num(long long number){
    if (number < 0) number = -number;
    int counter = 0;
    while (number > 0){
        counter += number % 10;
        number /= 10;
    }
    return counter;
}

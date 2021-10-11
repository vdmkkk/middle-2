#include "middle.h"

int itc_sum_num(long long number){
    int counter = 0;
    while (number > 9){
        counter += number % 10;
        number /= 10;
    }
    counter += number;
    return counter;
}

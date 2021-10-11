#include "middle.h"

int itc_null_count(long long number){
    if (number < 0) number = -number;
    int counter = 0;
    while (number > 0){
        if (number % 10 == 0){
            counter += 1;
        }
        number /= 10;
    }
    return counter;
}

#include "middle.h"

int itc_len_num(long long number){
    if (number < 0) number = -number;
    int counter = 1;
    while (number > 9){
        counter += 1;
        number /= 10;
    }
    return counter;
}

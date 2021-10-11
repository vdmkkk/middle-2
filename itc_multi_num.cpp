#include "middle.h"

long long itc_multi_num(long long number){
    if (number < 0) number = -number;
    int counter = 1;
    while (number > 9){
        counter *= number % 10;
        number /= 10;
    }
    counter *= number;
    return counter;
}

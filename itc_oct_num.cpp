#include "middle.h"

long long itc_oct_num(long long number){
    int res = 0;
    int counter = 0;
    while (number > 0){
        res += number % 8 * itc_pow(10, counter);
        counter += 1;
        number /= 8;
    }
    return res;
}

#include "middle.h"

int itc_rev_bin_num(long long number){
    int res = 0;
    int counter = 0;
    while (number > 0){
        res += number % 10 * itc_pow(2, counter);
        counter += 1;
        number /= 10;
    }
    return res;
}

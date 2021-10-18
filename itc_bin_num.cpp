#include "middle.h"


long long itc_bin_num(long long number) {
    long long res = 0;
    int counter = 0;
    while (number > 0){
        res += (number % 2) * itc_pow(10, counter);
        counter += 1;
        number /= 2;
    }
    return res;
}

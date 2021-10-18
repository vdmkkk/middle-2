#include "middle.h"


long long itc_bin_num(long long number) {
    long long res = 0;
    int counter = 0;
    while (num > 0){
        res += (num % 2) * itc_pow(10, counter);
        counter += 1;
        num /= 2;
    }
    return res;
}

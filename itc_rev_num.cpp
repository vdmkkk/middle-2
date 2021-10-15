#include "middle.h"

int itc_rev_num(long long number){
    if (number < 0) number = -number;
    if(number == 0) return 1;
    while(number % 10 == 0){
        number /= 10;
    }
    return itc_len_num(number);
}

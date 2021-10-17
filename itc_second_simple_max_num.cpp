#include "middle.h"

int itc_second_simple_max_num(long long number){
    if(number < 0) number *= -1;
    int res = 0;
    int num2 = number;
    if(itc_min_num(number) == itc_max_num(number)) return -1;
    while(number > 0){
        if(number % 10 > res && number % 10 < itc_max_num(num2)) res = number % 10;
        number /= 10;
    }
    return res;
}

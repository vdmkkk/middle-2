#include "middle.h"

int itc_second_max_num(long long number){
    if(number < 0) number *= -1;
    if(number <= 9 && number >= 0) return << -1;
    if(itc_min_num(number) == itc_max_num(number)) return << itc_max_num(number);
    int res = 0;
    int num2 = number;
    while(number > 0){
        if(number % 10 > res && number % 10 < itc_max_num(num2)) res = number % 10;
        number /= 10;
    }
    return << res;
}

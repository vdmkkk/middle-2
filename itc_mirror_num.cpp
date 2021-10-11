#include "middle.h"


int itc_abs(int num){
    if (num >= 0) return num;
    return -num;
}


double itc_pow(int num, int n){
    if (n == 0) return 1;
    int res = num;
    for (int i=1; i < itc_abs(n); i++){
        res *= num;
    }
    if (n >= 0) return res;
    return 1.0 / res;
}


bool itc_mirror_num(long long number){
    if (number < 0) number = -number;
    if (number % 10 == 0) return false;
    int res = 0;
    int oldnum = number;
    for (int i = itc_len_num(number) - 1; i >= 0; i--){
        res += number % 10 * itc_pow(10, i);
        number = (number - number % 10) / 10;
    }
    return (res == oldnum);
}

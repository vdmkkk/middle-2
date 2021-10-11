#include "middle.h"

int itc_min_num(long long number){
    if (number < 0) number = -number;
    int minn = 10;
    while (number > 0){
        if (number % 10 < minn){
            minn = number % 10;
        }
        number /= 10;
    }
    return minn;
}

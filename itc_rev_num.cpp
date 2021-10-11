#include "middle.h"

int itc_rev_num(long long number){
    if (number < 0) number = -number;
    int counter = 0;
    bool firstTime = true;
    bool flag = false;
    while (number > 0){
        if (firstTime) {
            if (number % 10 == 0) flag = false;
            else{
                flag = true;
                firstTime = false;
            }
        }
        if (flag) {
            counter += 1;
            number /= 10;
        }
        else {
            if (number % 10 != 0){
                counter += 1;
            }
            number /= 10;
        }
    }
    return counter;
}

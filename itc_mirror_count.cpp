#include "middle.h"

int itc_mirror_count(long long number){
    int counter = 0;
    for (int i=1; i <= number; i++){
        if (itc_mirror_num(i)) counter += 1;
    }
    return counter;
}

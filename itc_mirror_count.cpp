#include "middle.h"

int itc_mirror_count(long long number){
    int counter = 0;
    for (int i=0; i < number; i++){
        if (itc_min_num(i)) counter += 1;
    }
    return counter;
}

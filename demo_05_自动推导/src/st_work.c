#include"st_work.h"

int MaxIntInArray(int s[], int len) {
    assert(len>0);
    int max = s[0];
    int i = 1;
    for(; i < len; i++ ) {
        max = MaxInt(s[i], max);
    }
    return max;
}
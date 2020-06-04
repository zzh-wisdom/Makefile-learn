#include<stdio.h>

#include"st_work.h"

int main() {
    int s[] = {5, 3, 9, 4, 8};
    int len = 5;
    int max = MaxIntInArray(s, len);
    printf("Max:%d\n", max);
    return 0;
}
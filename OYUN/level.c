#include <stdio.h>
#include <stdlib.h>
#include "puan.h"

int MAX_LEVEL_VALUE = 10;

void levelVariable(int *level, int value){
    if (value > MAX_LEVEL_VALUE) {
    *level = MAX_LEVEL_VALUE;

    }else{
    *level = value;
    }
}


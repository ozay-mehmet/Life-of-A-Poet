#include <stdio.h>
#include <stdlib.h>

void levelVariable(int *level, int value)
{
    void setLevelValue(int *level, int value) {
    if (value > MAX_LEVEL_VALUE) {
        *level = MAX_LEVEL_VALUE;
    } else {
        *level = value;
    }
}
}

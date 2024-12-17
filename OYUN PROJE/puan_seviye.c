#include <stdio.h>
#include "features.h"
#include "puan_seviye.h"
#include "yoldas.h"

void update_score_and_level(int *score, int *level) {
    (*score)++; // Skoru bir artt�r

    if (*score > MAX_SCORE) {
        (*level)++; // Seviyeyi artt�r
        *score = 0; // Skoru s�f�rla
        printf("Tebrikler, seviyeyi ge�tiniz! Yeni Seviye: %d\n", *level);
        hayvanMesaj(level);
    }
}

void display_status(int score, int level) {
    printf("SEVIYE: %d\nSKOR: %d\n", level, score);
}

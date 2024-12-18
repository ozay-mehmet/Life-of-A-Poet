#include <stdio.h>
#include "features.h"
#include "puan.h"
#include "yoldas.h"

void update_score_and_level(int *score, int *level) {
    (*score)++; // Skoru bir arttýr

    if (*score > MAX_SCORE) {
        (*level)++; // Seviyeyi arttýr
        *score = 0; // Skoru sýfýrla
        printf("Tebrikler, seviyeyi geçtiniz! Yeni Seviye: %d\n", *level);
        hayvanMesaj(level);
    }
}

void display_status(int score, int level) {
    printf("SEVIYE: %d\nSKOR: %d\n", level, score);
}

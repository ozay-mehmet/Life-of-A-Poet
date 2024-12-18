#include <stdio.h>
#include "features.h"
#include "puan.h"
#include "yoldas.h"

void update_score_and_level(int *score, int *level) {
    if (*score >= MAX_SCORE) {
        (*level)++;
        *score = 0;
        printf("Tebrikler, seviyeyi ge�tiniz! Yeni Seviye: %d\n", *level);
        hayvanMesaj(level);
    } else {
        printf("�zg�n�z. Puan�n�z yetersiz.\n");
    }
}

void display_status(int score, int level) {
    printf("SEVIYE: %d\nSKOR: %d\n", level, score);
}

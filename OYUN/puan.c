#include <stdio.h>
#include <unistd.h>
#include "features.h"
#include "yoldas.h"
#include "puan.h"

void update_score_and_level(int *score, int *level) {

    if (*score >= MAX_SCORE) {
    (*level)++;
    *score = 0;
    printf("Tebrikler, seviyeyi gectiniz! Yeni Seviye: %d\n", *level);
    sleep(1);
    hayvanMesaj(*level);

    }else{
    printf("Maalesef. Puaniniz yetersiz :(\n");
    sleep(2);
    }
}

void display_status(int score, int level) {
    printf("SEVIYE: %d\nSKOR: %d\n", level, score);
}


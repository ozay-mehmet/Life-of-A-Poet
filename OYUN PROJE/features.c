#include <stdio.h>
#include "features.h"

int MAX_FEATURE_VALUE_QUALITY = 100;
int MIN_FEATURE_VALUE_QUALITY = 0;
int MAX_FEATURE_VALUE_SKILLS = 25;
int MIN_FEATURE_VALUE_SKILLS = 0;

int CAN = 100;
int TOK = 100;
int HIJYEN = 100;
int MUTLULUK = 100;
int SAGLIK = 100;
int ALTIN = 10;

float SANS = 0;
int PUAN = 0;
int GUC = 3;
int CEVIKLIK = 3;
int DAYANIKLILIK = 3;
int AVCILIK = 3;
int KARIZMA = 3;
int BINICILIK = 3;
int TOPLAYICILIK = 3;

void setFeatureValue(int *feature, int value) {
    if (value > MAX_FEATURE_VALUE_QUALITY) {
        *feature = MAX_FEATURE_VALUE_QUALITY;
    }
    else if(value <= 20 && value > 0){
        printf("%d cok az, %d degerinizi arttirmaniz gerekmektedir :((\n", *feature,*feature);
    }
    else {
        *feature = MIN_FEATURE_VALUE_QUALITY;
    }
}

void showQualification() {
    printf("CAN: %d\n", CAN);
    printf("TOK: %d\n", TOK);
    printf("HIJYEN: %d\n", HIJYEN);
    printf("MUTLULUK: %d\n", MUTLULUK);
    printf("SAGLIK: %d\n", SAGLIK);
    printf("ALTIN: %d\n", ALTIN);
}

void showSkills(){
    printf("SANS : %f\n",SANS);
    printf("PUAN : %d\n",PUAN);
    printf("Guc : %d\n", GUC);
    printf("Ceviklilik : %d\n", CEVIKLIK);
    printf("Dayaniklilik : %d\n", DAYANIKLILIK);
    printf("Karizma : %d\n", KARIZMA);
    printf("Avcilik : %d\n", AVCILIK);
    printf("Binicilik : %d\n", BINICILIK);
}

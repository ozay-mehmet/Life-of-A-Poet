#include "features.h"

int CAN = 100;     
int TOK = 100;
int HIJYEN = 100;
int MUTLULUK = 100;
int SAGLIK = 100;
int ASK = 0;
int PARA = 10;

int GUC = 100;     
int CEVIKLIK = 100;
int DAYANIKLILIK = 100;
int HANIMCILIK = 0;
int AVCILIK = 50;
int KARIZMA = 100;
int BINICILIK = 50;
int TOPLAYICILIK = 50;

void setFeatureValue(int *feature, int value) {
    if (value > MAX_FEATURE_VALUE) {
        *feature = MAX_FEATURE_VALUE;
    } else {
        *feature = value;
    }
}

void showQualification() {
    printf("CAN: %d\n", CAN);
    printf("TOK: %d\n", TOK);
    printf("HIJYEN: %d\n", HIJYEN);
    printf("MUTLULUK: %d\n", MUTLULUK);
    printf("SAGLIK: %d\n", SAGLIK);
    printf("ASK: %d\n", ASK);
    printf("PARA: %d\n", PARA);
}

void showSkills(){
    printf("Guc : %d\n", GUC);
    printf("Ceviklilik : %d\n", CEVIKLIK);
    printf("Dayaniklilik : %d\n", DAYANIKLILIK);
    printf("Karizma : %d\n", KARIZMA);
    printf("Avcilik : %d\n", AVCILIK);
    printf("Binicilik : %d\n", BINICILIK);
    printf("Hanimcilik : %d\n", HANIMCILIK);
}
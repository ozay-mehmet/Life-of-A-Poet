#include <stdio.h>
#include "features.h"

int MAX_FEATURE_VALUE_QUALITY = 100;
int MAX_FEATURE_VALUE_SKILLS = 25;

int UYKU = 100;
int CAN = 100;
int TOK = 100;
int HIJYEN = 100;
int MUTLULUK = 100;
int SAGLIK = 100;
int ALTIN = 10;

int SEVIYE = 1;

float SANS = 50.0;
int PUAN = 0;
int GUC = 3;
int CEVIKLIK = 3;
int DAYANIKLILIK = 3;
int AVCILIK = 3;
int KARIZMA = 3;
int BINICILIK = 3;
int TOPLAYICILIK = 3;

void setFeatureValueQuality(int *feature, int value) {

    *feature = value;

    if (value >= MAX_FEATURE_VALUE_QUALITY) {
        *feature = MAX_FEATURE_VALUE_QUALITY;
    }
    else if(value <= 20 && value > 0){
        printf("Aktiviteyi yapamazsiniz. Degerinizi arttirmaniz gerekmektedir :((\n");
    }
}

void setFeatureValueSkills(int *feature, int value){

    *feature = value;

    if(value >= MAX_FEATURE_VALUE_SKILLS){
        *feature = MAX_FEATURE_VALUE_SKILLS;
    }
    else if(value > 0 && value <= 20){
        printf("Aktiviteyi yapamazsiniz. Degerinizi arttirmaniz gerekmektedir :((\n");
    }
}

void showQualification() {
    printf("\n---- Temel Nitelikler ----\n");
    printf("UYKU: %d\n",UYKU);
    printf("CAN: %d\n", CAN);
    printf("TOK: %d\n", TOK);
    printf("HIJYEN: %d\n", HIJYEN);
    printf("MUTLULUK: %d\n", MUTLULUK);
    printf("SAGLIK: %d\n", SAGLIK);
    printf("ALTIN: %d\n", ALTIN);
}

void showSkills(){
    printf("\n---- Beceriler ----\n");
    printf("SANS : %.2f\n",SANS);
    printf("PUAN : %d\n",PUAN);
    printf("Guc : %d\n", GUC);
    printf("Ceviklilik : %d\n", CEVIKLIK);
    printf("Dayaniklilik : %d\n", DAYANIKLILIK);
    printf("Karizma : %d\n", KARIZMA);
    printf("Avcilik : %d\n", AVCILIK);
    printf("Binicilik : %d\n", BINICILIK);
    printf("Toplayicilik : %d\n",TOPLAYICILIK);
}

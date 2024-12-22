#include <stdio.h>
#include <stdlib.h>
#include "features.h"
#include "yoldas.h"


void showSkillsAndQualification(){
    system("cls");
    printf("---- Ana Menu -----\t\t---- BECERILER ----\t---- TEMEL NITELIKLER ----\n");
    printf("1 - Kamp Alanina Git\t\tSANS : %.2f\t\tUYKU: %d\n", SANS, UYKU);
    printf("2 - Sifahaneye Git\t\tPUAN : %d\t\tCAN: %d\n", PUAN, CAN);
    printf("3 - Hana Git\t\t\tGuc : %d\t\t\tTOK: %d\n", GUC, TOK);
    printf("4 - Maceraya Git\t\tCeviklilik : %d\t\tHIJYEN: %d\n", CEVIKLIK, HIJYEN);
    printf("5 - Seviye Atla\t\t\tDayaniklilik : %d\tMUTLULUK: %d\n", DAYANIKLILIK, MUTLULUK);
    printf("6 - Durumu Goster\t\tKarizma : %d\t\tSAGLIK: %d\n", KARIZMA, SAGLIK);
    printf("7 - Yoldaslar\t\t\tAvcilik : %d\t\tALTIN: %d\n", AVCILIK, ALTIN);
    printf("8 - Cikis\t\t\tBinicilik : %d\t\tYOLDAS: %s\n", BINICILIK,mevcutHayvan);
    printf("\t\t\t\tToplayicilik : %d\n", TOPLAYICILIK);
}

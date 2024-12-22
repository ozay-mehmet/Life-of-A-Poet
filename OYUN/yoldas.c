#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "menu.h"

char *hayvan[3] = {"At", "Kartal", "Aslan"};
char *mevcutHayvan = "YOLDAS BULUNAMADI";

void hayvanMesaj(int level) {

    if (level < 1 || level > sizeof(hayvan) / sizeof(hayvan[0])) {
    printf("Geçersiz seviye.\n");
    printf("Cikis yapiliyor...");
    exit(0);
    }
    while (1) {
    int hayvanSecim;
    printf("SEVIYE %d. %s yoldasinin kilidi acildi.\n", level, hayvan[level - 1]);
    sleep(1);
    printf("Yoldas edinmek istiyor musun?\n1 - EVET\t2 - HAYIR\n");
    printf("Secim: ");
        scanf("%d",&hayvanSecim);

    if (hayvanSecim == 1) {
    mevcutHayvan = hayvan[level - 1];
    printf("Mevcut yoldasiniz: %s\n", mevcutHayvan);
    break;

    }else if (hayvanSecim == 2){
    printf("Yoldas edinmediniz.\n");
    mevcutHayvan = "YOLDAS BULUNAMADI";
    printf("Koy meydanina donuluyor...");
    showSkillsAndQualification();
    break;

    }else{
    printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.\n");
    getchar();
    sleep(1);
    system("cls");
    }
   }
}

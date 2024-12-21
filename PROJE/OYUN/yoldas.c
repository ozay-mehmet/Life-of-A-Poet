#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hayvan[3] = {"At", "Kartal", "Aslan"};
char *mevcutHayvan = "YOLDAS BULUNAMADI";

void hayvanMesaj(int level) {
    char temp;

    if (level < 1 || level > sizeof(hayvan) / sizeof(hayvan[0])) {
    printf("Geçersiz seviye.\n");
    printf("Cikis yapiliyor...");
    exit(0);
    }

    printf("SEVIYE %d. %s yoldaşının kilidi açıldı.\n", level, hayvan[level - 1]);
    printf("Yoldaş edinmek istiyor musun?\n1 - EVET\t2 - HAYIR\n");

    while (1) {
    printf("Seçiminizi yapın (1/2): ");
        while (getchar() != '\n');
        temp = getchar();

    if (temp == '1') {
    mevcutHayvan = hayvan[level - 1];
    printf("Mevcut yoldasiniz: %s\n", mevcutHayvan);
    break;

    }else if (temp == '2'){
    printf("Yoldas edinmediniz.\n");
    mevcutHayvan = NULL;
    break;

    }else{
    printf("Hatalı giriş! Lütfen tekrar deneyin.\n");
    }
   }
}

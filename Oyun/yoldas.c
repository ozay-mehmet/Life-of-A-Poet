#include <stdio.h>
#include <stdlib.h>

const char *hayvan[3] = {"At", "Kartal", "Aslan"};
char *mevcutHayvan = NULL;

void hayvanMesaj(int level) {
    int choice;
    char temp;

    if (level < 1 || level > 3) {
        printf("Gecersiz seviye.\n");
        return;
    }

    printf("SEVIYE %d. %s yoldasinin kilidi acildi.\n", level, hayvan[level - 1]);
    printf("Yoldas edinmek istiyor musun?\n1 - EVET\t2 - HAYIR\n");

    while (1) {
        printf("Seciminizi yapin (1/2): ");
        getchar();
        temp = getchar();

        if (temp == '1') {
            mevcutHayvan = (char*)hayvan[level - 1];
            printf("Mevcut yoldasiniz: %s\n", mevcutHayvan);
            break;
        } else if (temp == '2') {
            break;
        } else {
            printf("Hatali giris! Lütfen tekrar deneyiniz\n");
            getchar();
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "yoldas.h"
#include "features.h"
#include "menu.h"

void yoldasMenu(int level){
    int temp;
    int choice;

    while (1) {
    system("cls");
    printf("Yoldaslar:\n");

    for (int i = 0; i < level; i++) {
    printf("> %s\n", hayvan[i]);
    }

    printf("\n1 - Yoldas edin\n2 - Yoldas birak\n3 - Koy meydanina don\n");
    printf("Seciminizi yapin: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1: {
        while (1) {
        system("cls");
        for (int k = 0; k < level; k++) {
        printf("%d - %s\n", k + 1, hayvan[k]);
        }
    printf("%d - Menu(YOLDASLAR)\n", level + 1);
    printf("Secim: ");
    scanf("%d", &temp);

    if (temp >= 1 && temp <= level) {
    mevcutHayvan = hayvan[temp - 1];
    system("cls");
    printf("Mevcut yoldasiniz: %s\n", mevcutHayvan);
    sleep(1);
    break;
    } else if (temp == level + 1) {
    break;
    } else {
    printf("Hatali giris! Lutfen gecerli bir deger giriniz.\n");
    sleep(1);
    }
    }
    break;
    }
    case 2: {
    if (strcmp(mevcutHayvan, "YOLDAS BULUNAMADI") != 0) {
    mevcutHayvan = "YOLDAS BULUNAMADI";
    system("cls");
    printf("Yoldas birakildi.\n");
    sleep(1);
    } else {
    system("cls");
    printf("Zaten bir yoldasa sahip degilsiniz.\n");
    sleep(1);
    }
    break;
    }
    case 3: {
    system("cls");
    printf("Koy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();
    return;
    }
    default: {
    printf("Hatali giris! Lutfen gecerli bir deger giriniz.\n");
    sleep(1);
    break;
   }
  }
 }
}

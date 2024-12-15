#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sifahane.h"
#include <math.h>
#include "features.h"

void sifaciMenu(){
    printf("Sifacidan yaralarini sarmasini iste\n");
    printf("Sifacidan merhem yapip surmesini iste\n");
    printf("Koy meydanina don\n");

    int choise;
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choise);

    if (choise == 1){
        yara_sar();
    }
    else if (choise == 2){
        merhem_sur();
    }
    else if (choise == 3){
        printf("Koye donuluyor...\n");
    }
    else
    {
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
}

void yara_sar() {    
    setFeatureValue(&CAN, CAN + 10);
    setFeatureValue(&SAGLIK, SAGLIK + 10);
    setFeatureValue(&MUTLULUK, MUTLULUK + 10);

    int sayi = rand() % 10 + 1;

    for (int i = 0; i < strlen(sifahane_yazi[sayi]); i++) {
        printf("%c", sifahane_yazi[sayi][i]);
    }
}

void merhem_sur(){
    setFeatureValue(&CAN, CAN + 5);
    setFeatureValue(&SAGLIK, SAGLIK + 5);
    setFeatureValue(&MUTLULUK, MUTLULUK + 5);

    int sayi = rand() % 10 + 1;

    for (int i = 0; i < strlen(sifahane_yazi[sayi]); i++) {
        printf("%c", sifahane_yazi[sayi][i]);
    }   
}

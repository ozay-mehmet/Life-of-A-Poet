#include <string.h>
#include <stdio.h>
#include "features.h"
#include "han.h" 

int choise;

void hanciMenu(){
    printf("1 - Yiyecek satin al ve ye\n");
    printf("2 - Icecek satin al, ic ve eglen\n");
    printf("3 - Enstruman cal ve sarki soyle\n");
    printf("4 - Koy meydanina don\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choise);

    if (choise == 1)
    {
        yemekYe();
    }
    else if (choise == 2){
        icecekIc();
    }
    else if (choise == 3){
        enstrumanCal();
    }
    else if (choise == 4){
        printf("Koy meydanina donuluyor...\n");
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
}

void yemekYe(){
    printf("1 - Yahni\n");
    printf("2 - Balik\n");
    printf("3 - Pirinc\n");
    printf("Ne yemek istersiniz : ");
    scanf("%d", &choise);
    if (choise == 1)
    {
        setFeatureValue(&TOK, TOK + 30);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 20);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&PARA, PARA - 20);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_yemek_yazi[sayi]); i++){
            printf("%c", han_yemek_yazi[sayi][i]);
        }
    }
    else if (choise == 2){
        setFeatureValue(&TOK, TOK + 25);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 15);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&PARA, PARA - 15);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_yemek_yazi[sayi]); i++){
            printf("%c", han_yemek_yazi[sayi][i]);
        }
    }
    else if (choise == 3){
        setFeatureValue(&TOK, TOK + 25);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 15);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&PARA, PARA - 10);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_yemek_yazi[sayi]); i++){
            printf("%c", han_yemek_yazi[sayi][i]);
        }
    }   
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
}

void icecekIc(){
    printf("1 - Sarap\n");
    printf("2 - Ayran\n");
    printf("3 - Su\n");
    printf("Ne icecek istersiniz : ");
    scanf("%d", &choise);
    if (choise == 1){
        setFeatureValue(&TOK, TOK + 20);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 10);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&PARA, PARA - 20);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_icecek_yazi[sayi]); i++){
            printf("%c", han_icecek_yazi[sayi][i]);
        }
    }
    else if (choise == 2){
        setFeatureValue(&TOK, TOK + 15);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 10);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&PARA, PARA - 10);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_icecek_yazi[sayi]); i++){
            printf("%c", han_icecek_yazi[sayi][i]);
        }
    }
    else if (choise == 3){
        setFeatureValue(&TOK, TOK + 10);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 10);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&PARA, PARA - 5);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_icecek_yazi[sayi]); i++){
            printf("%c", han_icecek_yazi[sayi][i]);
        }
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
    
}

void enstrumanCal(){
    setFeatureValue(&MUTLULUK, MUTLULUK + 20);
    setFeatureValue(&PARA, PARA + 10 + (KARIZMA * (HIJYEN/100)));
    setFeatureValue(&HIJYEN, HIJYEN - 10);
    setFeatureValue(&TOK, TOK - 10);
    int sayi = rand() % 8 + 1;
    for (int i = 0; i < strlen(sarki_sozu[sayi]); i++){
        printf("%c", sarki_sozu[sayi][i]);
    }
}
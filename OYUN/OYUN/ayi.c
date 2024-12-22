#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "features.h"
#include "menu.h"
#include "degerYazdir.h"

void ayiylaKarsilasma() {
    system("cls");
    srand(time(NULL));

    int secim;
    int kacmaSans = rand() % 100;
    int korkutmaSans = rand() % 100 + 1;
    int savasSans;

    for(int i = 0 ; i == 0;){
    printf("Bir ayi karsina cikti! Ne yapmak istersiniz?\n");
    printf("1. Kacmaya calis\n");
    printf("2. Ayiya bagirarak korkutmaya calis\n");
    printf("3. Savas\n");
    printf("Seciminizi yapin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1: {
        if(TOK - 5 < 0){
        printf("TOKLUK degeri yetersiz! Islem gerceklestirilemez.");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;

        }else if(UYKU - 5 < 0){
        printf("UYKU degeri yetersiz! Islem gerceklestirilemez.");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;

        }else if(KARIZMA - 2 < 0){
        printf("KARIZMA degeri yetersiz! Islem gerceklestirilemez.");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;
        }

    if (kacmaSans > 70){
        system("cls");

        printf("Sansli gunundesin kasif, az daha olecektin !!!\n");

        SANS += 5;
        setFeatureValueQuality(&TOK, TOK - 5);
        setFeatureValueQuality(&UYKU, UYKU - 5);
        setFeatureValueSkills(&KARIZMA, KARIZMA - 2);

        degerYazdir("SANS",5,SANS);
        degerYazdir("TOK",(-5),TOK);
        degerYazdir("UYKU",(-5),UYKU);
        degerYazdir("KARIZMA",(-2),KARIZMA);
        sleep(1);

        printf("Koy meydanina donuluyor...");
        sleep(2);
        showSkillsAndQualification();
        break;

        }else{
        system("cls");
        printf("Kacmaya calisirken ayi sizi yakaladi ve yaralandin !!!\n");
        sleep(1);
        setFeatureValueQuality(&CAN, CAN - 5);
        setFeatureValueQuality(&TOK, TOK - 5);
        setFeatureValueQuality(&UYKU, UYKU - 5);

        degerYazdir("CAN",(-5),CAN);
        degerYazdir("TOK",(-5),TOK);
        degerYazdir("UYKU",(-5),UYKU);
        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(2);
        showSkillsAndQualification();
        break;
    }
}

    case 2: {
        if(TOK - 5 < 0){
        printf("TOKLUK degeri yetersiz! Islem gerceklestirilemez.");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;

        }else if(UYKU - 10 < 0){
        printf("UYKU degeri yetersiz! Islem gerceklestirilemez.");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;
        }


    if (korkutmaSans < 50) {
        system("cls");
        printf("Bagirislariniz ayiyi korkutuyor ve kaciriyor!\n");

        setFeatureValueQuality(&UYKU , UYKU - 10);
        setFeatureValueSkills(&KARIZMA , KARIZMA + 1);
        setFeatureValueQuality(&TOK , TOK - 5);

        degerYazdir("UYKU",(-10),UYKU);
        degerYazdir("KARIZMA",1,KARIZMA);
        degerYazdir("TOK",(-5),TOK);

        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;

    } else {
        system("cls");
        printf("Ayi bagirislariniza aldiris etmiyor ve size saldiriyor!\n");
        sleep(1);
        printf("Yaralandiniz ama hayattasiniz.\n");
        setFeatureValueQuality(&CAN, CAN - 25);
        degerYazdir("CAN",(-25), CAN);
        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;
    }
}
    case 3: {
        savasSans = rand() % 100;
    if (savasSans < 30) {
        system("cls");
        printf("Ayiyi yeniyorsunuz! Ancak biraz yaralandiniz.\n");
        setFeatureValueQuality(&CAN, CAN - 15);
        setFeatureValueSkills(&GUC, GUC + 5);
        setFeatureValueSkills(&KARIZMA, KARIZMA +3);
        degerYazdir("CAN",(-15),CAN);
        degerYazdir("GUC",5,GUC);
        degerYazdir("KARIZMA",3,KARIZMA);
        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;

    } else {
        system("cls");
        printf("Ayi cok guclu! Sana saldirdi ve agir yaralandin.\n");
        setFeatureValueQuality(&CAN,CAN-40);
        degerYazdir("CAN",(-40),CAN);
        sleep(1);
        system("cls");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;
    }
}
    default:
        system("cls");
        printf("Gecersiz bir secim yaptiniz. Ayi sizi fark ediyor ve saldiriyor!\n");
        getchar();
        sleep(2);
        system("cls");
        printf("Yaralandiniz ama hayattasiniz\n");
        sleep(1);
        setFeatureValueQuality(&CAN , CAN - 25);
        degerYazdir("CAN",(-25), CAN);
        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
    break;
    }
    break;
  }
}

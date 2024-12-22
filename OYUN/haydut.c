#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "menu.h"
#include "haydut.h"
#include "features.h"
#include "degerYazdir.h"
#include "macera.h"

int HAYDUT_CAN = 100;
int HAYDUT_GUC;
int HAYDUT_CEVIKLIK;
int HAYDUT_DAYANIKLILIK;

void initialize_easy_haydut_features() {
    HAYDUT_GUC = rand() % 3 + 1;
    HAYDUT_CEVIKLIK = rand() % 3 + 1;
    HAYDUT_DAYANIKLILIK = rand() % 3 + 1;
}
void initialize_medium_haydut_features() {
    HAYDUT_GUC = rand() % 3 + 4;
    HAYDUT_CEVIKLIK = rand() % 3 + 4;
    HAYDUT_DAYANIKLILIK = rand() % 3 + 4;
}
void initialize_hard_haydut_features() {
    HAYDUT_GUC = rand() % 3 + 7;
    HAYDUT_CEVIKLIK = rand() % 3 + 7;
    HAYDUT_DAYANIKLILIK = rand() % 3 + 7;
}

char haydut_bilgi_yazi[9][200] = {
    "Haydutlar seni fark etti, hizli karar vermelisin!",
    "Etrafini kusattilar cikis yolu bul!",
    "Haydut lideri seni meydan okumaya cagiriyor!",
    "Bazi haydutlar seni izliyor tuzaklardan kacin!",
    "Carpismaya hazir ol, hicbir yere saklanamazsin!",
    "Haydutlar bagirislarla uzerinize geliyor. Kacis yok!",
    "Kacacak misin, dovusecek misin yoksa biz mi karar verelim?\n...\nSenin karar verecgin yok. Gel buraya!!",
    "Haydutlar cok kalabalik gorunuyor Dikkatli ol!",
    "Zaman daraliyor, kararini ver: Dovus ya da ol!"
};

char haydut_tehdit_yazi[8][200] = {
    "Bu zirh sana pek yakismis ama bizim ganimet sandigimizda daha guzel durur!",
    "Benim adamlarimi yenebilecegini mi sandin? Gercek kabus simdi basliyor!",
    "Bu bolge benim kontrolumde. Ne yapacagin tamamen bana bagli!",
    "Adamlarim seni parca parca ederken, ben altinlarini sayacagim!",
    "Senin gibi cesurlar genelde uzun yasamaz. Son bir sozun var mi?",
    "Bu topraklara adim atan herkes bizim kurallarimiza uyar. Ve sen gec kaldin!",
    "Simdi geri donme sansin yok. Kaderin benim ellerimde!",
    "Yoluna devam etmek istiyorsan, en iyisi hemen teslim ol!"
};

void showEasyHaydutFeature(){
    initialize_easy_haydut_features();
    printf("\nHAYDUT CAN : %d\n", HAYDUT_CAN);
    printf("HAYDUT GUC : %d\n", HAYDUT_GUC);
    printf("HAYDUT CEVIKLIK : %d\n", HAYDUT_CEVIKLIK);
    printf("HAYDUT DAYANIKLILIK : %d\n", HAYDUT_DAYANIKLILIK);
}

void showMediumHaydutFeature(){
    initialize_medium_haydut_features();
    printf("\nHAYDUT CAN : %d\n", HAYDUT_CAN);
    printf("HAYDUT GUC : %d\n", HAYDUT_GUC);
    printf("HAYDUT CEVIKLIK : %d\n", HAYDUT_CEVIKLIK);
    printf("HAYDUT DAYANIKLILIK : %d\n", HAYDUT_DAYANIKLILIK);
}

void showHardHaydutFeature(){
    initialize_hard_haydut_features();
    printf("\nHAYDUT CAN : %d\n", HAYDUT_CAN);
    printf("HAYDUT GUC : %d\n", HAYDUT_GUC);
    printf("HAYDUT CEVIKLIK : %d\n", HAYDUT_CEVIKLIK);
    printf("HAYDUT DAYANIKLILIK : %d\n", HAYDUT_DAYANIKLILIK);
}


void haydutSavas(int *hardship){
    srand(time(NULL));

    float verilenHasar = 4 *GUC;
    float alinanHasar = verilenHasar - (verilenHasar * (DAYANIKLILIK/25) - 1);
    int saldiriSira;
    int savasSecim;

    system("cls");

    if(*hardship == 1)
    initialize_easy_haydut_features();
    else if(*hardship == 2)
    initialize_medium_haydut_features();
    else if(*hardship == 3)
    initialize_hard_haydut_features();

    if(CEVIKLIK > HAYDUT_CEVIKLIK){

    saldiriSira = 0;

    for(int i=1 ; i>0 ; i++){

    printf("\n***** %d. Tur *****\n", i);
    sleep(1);
        if (saldiriSira == 0){
        HAYDUT_CAN -= verilenHasar;

        if(CAN < 0)
        CAN = 0;
        else if(HAYDUT_CAN < 0)
        HAYDUT_CAN = 0;

        saldiriSira = 1;
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        sleep(1);

    }else{
        CAN -= alinanHasar;

        if(CAN < 0)
        CAN = 0;
        else if(HAYDUT_CAN < 0)
        HAYDUT_CAN = 0;

        saldiriSira = 0;
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        sleep(1);
        }

        if(CAN == 0 || HAYDUT_CAN == 0)
            break;

        while(1){
        system("cls");
        printf("\n***** %d. Tur *****\n", i);
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        printf("Tamam mi devam mi?\n");
        printf("1 - Savas\n2 - Kac\n");
        printf("Secim:");
        scanf("%d" , &savasSecim);
        if(savasSecim == 1){
        printf("Hadi yenelim sunu!\n");
        sleep(1);
        system("cls");
        break;
        }
        else if(savasSecim == 2){
        system("cls");
        printf("\"HAHAHAHA! Kac bakalim.\"\n");
        setFeatureValueSkills(&KARIZMA , KARIZMA - 2);
        degerYazdir("KARIZMA",(-2),KARIZMA);
        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;
        }
        else{
        printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.");
        getchar();
        sleep(1);
        system("cls");
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        }
      }
      if(savasSecim == 2)
        break;
    }

    }else if(HAYDUT_CEVIKLIK > CEVIKLIK){
        saldiriSira = 1;
        for(int i=1 ; i>0 ; i++){

        printf("\n***** %d. Tur *****\n", i);
        sleep(1);
        if (saldiriSira == 0){
        HAYDUT_CAN -= verilenHasar;

        if(CAN < 0)
        CAN = 0;
        else if(HAYDUT_CAN < 0)
        HAYDUT_CAN = 0;

        saldiriSira = 1;
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        sleep(1);

        }else{
        CAN -= alinanHasar;

        if(CAN < 0)
        CAN = 0;
        else if(HAYDUT_CAN < 0)
        HAYDUT_CAN = 0;

        saldiriSira = 0;
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        sleep(1);
    }
        if(CAN == 0 || HAYDUT_CAN == 0)
            break;

        while(1){
        system("cls");
        printf("\n***** %d. Tur *****\n", i);
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        printf("Tamam mi devam mi?\n");
        printf("1 - Savas\n2 - Kac\n");
        printf("Secim:");
        scanf("%d" , &savasSecim);
        if(savasSecim == 1){
        printf("Hadi yenelim sunu!\n");
        sleep(1);
        system("cls");
        break;
        }
        else if(savasSecim == 2){
        system("cls");
        printf("\"HAHAHAHA! Kac bakalim.\"\n");
        setFeatureValueSkills(&KARIZMA , KARIZMA - 2);
        degerYazdir("KARIZMA",(-2),KARIZMA);
        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;
        }
        else{
            printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.");
            getchar();
            sleep(1);
            system("cls");

        }
    }
    if(savasSecim == 2)
        break;
    }
    }else{
    int baslayan = rand() % 2;
    if (baslayan == 0) {
        saldiriSira = 0;

    for(int i=1 ; i>0 ; i++){

        printf("\n***** %d. Tur *****\n", i);
        sleep(1);
        if (saldiriSira == 0){
        HAYDUT_CAN -= verilenHasar;

        if(CAN < 0)
        CAN = 0;
        else if(HAYDUT_CAN < 0)
        HAYDUT_CAN = 0;

        saldiriSira = 1;
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        sleep(1);


        }else{
        CAN -= alinanHasar;

        if(CAN < 0)
        CAN = 0;
        else if(HAYDUT_CAN < 0)
        HAYDUT_CAN = 0;

        saldiriSira = 0;
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        sleep(1);
        }
        if(CAN == 0 || HAYDUT_CAN == 0)
        break;

        while(1){
        system("cls");
        printf("\n***** %d. Tur *****\n", i);
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        printf("Tamam mi devam mi?\n");
        printf("1 - Savas\n2 - Kac\n");
        printf("Secim:");
        scanf("%d" , &savasSecim);
        if(savasSecim == 1){
        printf("Hadi yenelim sunu!\n");
        sleep(1);
        system("cls");
        break;
        }
        else if(savasSecim == 2){
        system("cls");
        printf("\"HAHAHAHA! Kac bakalim.\"\n");
        setFeatureValueSkills(&KARIZMA , KARIZMA - 2);
        degerYazdir("KARIZMA",(-2),KARIZMA);
        sleep(1);
        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
        break;
        }
        else{
            printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.");
            getchar();
            sleep(1);
            system("cls");
        }
     }
     if(savasSecim == 2)
        break;
    }

    }else {
        saldiriSira = 1;

    for(int i=1 ; i>0 ; i++){

        printf("\n***** %d. Tur *****\n", i);
        sleep(1);

        if (saldiriSira == 0){
        HAYDUT_CAN -= verilenHasar;
            if(CAN < 0)
            CAN = 0;
            else if(HAYDUT_CAN < 0)
            HAYDUT_CAN = 0;

    saldiriSira = 1;
    printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
    sleep(1);

    }else{
        CAN -= alinanHasar;

        if(CAN < 0)
        CAN = 0;
        else if(HAYDUT_CAN < 0)
        HAYDUT_CAN = 0;

        saldiriSira = 0;
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        sleep(1);
    }
        if(CAN == 0 || HAYDUT_CAN == 0)
            break;
        while(1){
        system("cls");
        printf("\n***** %d. Tur *****\n", i);
        printf("OYUNCU CAN: %d\nHAYDUT CAN: %d\n",CAN,HAYDUT_CAN);
        printf("Tamam mi devam mi?\n");
        printf("1 - Savas\n2 - Kac\n");
        printf("Secim:");
        scanf("%d" , &savasSecim);
        if(savasSecim == 1){
        printf("Hadi yenelim sunu!\n");
        sleep(1);
        system("cls");
        break;
        }
        else if(savasSecim == 2){
        system("cls");
        printf("\"HAHAHAHA! Kac bakalim.\"\n");
        setFeatureValueSkills(&KARIZMA , KARIZMA - 2);
        degerYazdir("KARIZMA",(-2),KARIZMA);
        sleep(1);
        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
        break;
        }
        else{
            printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.");
            getchar();
            sleep(1);
            system("cls");
        }
    }
    if(savasSecim == 2)
        break;
    }
  }
}
}

void haydutKacis(int *hardship){

    if(*hardship == 1)
    initialize_easy_haydut_features();
    else if(*hardship == 2)
    initialize_medium_haydut_features();
    else if(*hardship == 3)
    initialize_hard_haydut_features();

    float kacmaSans = 4 * (CEVIKLIK / 100);

    if(kacmaSans > rand()%100){
    system("cls");
    printf("Kacmayi basardin.\nKoy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();

    }else{
    printf("KACAMADIN! SAVAS KACINILMAZ.\n");
    sleep(1);
    haydutSavas(&choice);

    }
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "kamp.h"
#include "features.h"
#include "degerYazdir.h"
#include "menu.h"

int choice;

void kampciMenu(){
while(1){
    system("cls");

    printf("---- KAMP ALANI -----\n");
    printf("1 - Kamp atesinin basinda calgi cal/sarki soyle\n");
    printf("2 - Nehirde yikan\n");
    printf("3 - Cadirda uyu\n");
    printf("4 - Koy meydanina don.\n\n");

    printf("Seciminizi yapiniz:");
    scanf("%d",&choice);

    if(choice == 1){
    sarkiSoyle();
    break;

    }else if(choice == 2){
    nehirdeYikan();
    break;

    }else if(choice == 3){
    cadirdaUyu();
    break;

    }else if(choice == 4){
    system("cls");
    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
    break;

    }else{
    printf("HATALI GIRIS! Lutfen gecerli bir deger giriniz.\n");
    getchar();
    sleep(1);

    }
  }
}

void sarkiSoyle(){
    int song;
while(1)
{
    system("cls");

    printf("1 - Bu aksam\n2 - Aman aman\n3 - Senden daha guzel\n4 - Vazgec\n");
    printf("Ne soyleyelim : ");
    scanf("%d",&song);

    if(song == 1){
    system("cls");
    printf("Bu aksam...\n");
    sleep(1);
    printf("Harika secim.\n");
    sleep(1);
    system("cls");
    printf("Oynatiliyor...\n");
    setFeatureValueQuality(&KARIZMA,KARIZMA + 1);
    setFeatureValueQuality(&PUAN , PUAN + 20);
    degerYazdir("PUAN",20,PUAN);
    degerYazdir("KARIZMA",1,KARIZMA);
    sleep(1);
    kampciMenu();
    break;


    }else if(song == 2){
    system("cls");
    printf("Aman aman...\n");
    sleep(1);
    printf("Biraz uzgunuz galiba.\n");
    sleep(1);
    system("cls");
    printf("Oynatiliyor...\n");
    setFeatureValueQuality(&KARIZMA,KARIZMA + 1);
    setFeatureValueQuality(&PUAN , PUAN + 20);
    degerYazdir("PUAN",20,PUAN);
    degerYazdir("KARIZMA",1,KARIZMA);
    sleep(1);
    kampciMenu();
    break;

    }else if(song == 3){
    system("cls");
    printf("Senden daha guzel...\n");
    sleep(1);
    printf("Ayy, tesekkurlerr.\n");
    sleep(1);
    system("cls");
    printf("Oynatiliyor...\n");
    setFeatureValueQuality(&KARIZMA,KARIZMA + 1);
    setFeatureValueQuality(&PUAN , PUAN + 20);
    degerYazdir("PUAN",20,PUAN);
    degerYazdir("KARIZMA",1,KARIZMA);
    sleep(1);
    kampciMenu();
    break;

    }else if(song == 4){
        if(KARIZMA - 1 < 0){
        system("cls");
        printf("KARIZMA degeri yetersiz! Islem gerceklestirilemez.");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;
        }
    system("cls");
    printf("Senden beklemezdim (!)\n");
    setFeatureValueQuality(&KARIZMA, KARIZMA - 1);
    degerYazdir("KARIZMA",(-1),KARIZMA);
    sleep(1);
    kampciMenu();
    break;

    }else{
    printf("HATALI GIRIS! Lutfen gecerli bir deger giriniz.\n");
    getchar();
    sleep(1);
    }
  }
}

void nehirdeYikan(){
    system("cls");
    setFeatureValueQuality(&HIJYEN, HIJYEN + 10);
    setFeatureValueQuality(&MUTLULUK, MUTLULUK + 10);
    printf("Haydi temizlenelim!\n");

    degerYazdir("HIJYEN",10,HIJYEN);
    degerYazdir("MUTLULUK",10,MUTLULUK);
    sleep(1);
    showSkillsAndQualification();
}

void cadirdaUyu(){
    system("cls");
    setFeatureValueQuality(&UYKU, UYKU + 50);
    setFeatureValueSkills(&GUC , GUC + 2);
    printf("Uyku vakti!\n");

    degerYazdir("UYKU",50,UYKU);
    degerYazdir("GUC",2,GUC);
    sleep(1);
    showSkillsAndQualification();
}


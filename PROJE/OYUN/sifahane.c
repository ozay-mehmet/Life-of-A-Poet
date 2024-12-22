#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "sifahane.h"
#include "features.h"
#include "menu.h"
#include "degerYazdir.h"

char sifahane_yazi[10][100] = {
    "Her yara bir hikayedir ve her hikaye, seni daha guclu bir insan yapar.",
    "Gecmiste yasadiklarin seni durdurmak icin degil, seni daha dayanikli yapmak icin bir ogretmendir.",
    "Dusmek kotu degildir; onemli olan, dustugun yerden kalkip yurumeye devam etmektir.",
    "Kendi gucunu fark ettigin gun, hicbir sey seni yolundan alikoyamaz.",
    "Karanlik zamanlar gecici; icindeki isigi bul ve onunla yolunu aydinlat.",
    "Her yeni gun, yeniden baslamak icin bir firsattir. Unutma, bugunun senin icin bir armagan.",
    "Kalbindeki yara, hayatin sana ne kadar cesur oldugunu gostermek icin biraktigi bir izdir.",
    "Yasadiklarin seni tanimlamaz; onlara nasil cevap verdigin senin kim oldugunu belirler.",
    "Kendine inan ve ilerle; her adinin, seni hayal ettigin yere yaklastiracak.",
    "Zorluklar, senin kahraman olmani bekleyen gizli firsatlardir."
};

void sifaciMenu(){

    int choice;
    srand(time(NULL));
while(1){
    system("cls");

    printf("---- SIFAHANE -----\n");
    printf("1 - Sifacidan yaralarini sarmasini iste\n");
    printf("2 - Sifacidan merhem yapip surmesini iste\n");
    printf("3 - Koy meydanina don\n");

    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if (choice == 1){
    yara_sar();
    break;

    }else if (choice == 2){
    merhem_sur();
    break;

    }else if (choice == 3){
    system("cls");

    printf("Koy meydanina donuluyor...\n");
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

void yara_sar() {

    if(CAN > 80){
    system("cls");
    printf("CAN degeri %d`in uzerinde\n", 80);
    sleep(1);
    printf("Koy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();
    return;
    }

    int sayi = rand() % 10;
    setFeatureValueQuality(&CAN, CAN + 10);
    setFeatureValueQuality(&SAGLIK, SAGLIK + 10);
    setFeatureValueQuality(&MUTLULUK, MUTLULUK + 10);

    system("cls");

    printf("%s\n",sifahane_yazi[sayi]);

    degerYazdir("CAN",10,CAN);
    degerYazdir("SAGLIK",10,SAGLIK);
    degerYazdir("MUTLULUK",10,MUTLULUK);
    sleep(1);
    showSkillsAndQualification();
}

void merhem_sur(){

    if(CAN > 90){
    system("cls");
    printf("CAN degeri %d`in uzerinde\n", 90);
    sleep(1);
    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
    return;
    }

    int sayi = rand() % 10;

    setFeatureValueQuality(&CAN, CAN + 5);
    setFeatureValueQuality(&SAGLIK, SAGLIK + 5);
    setFeatureValueQuality(&MUTLULUK, MUTLULUK + 5);

     system("cls");

    printf("%s\n",sifahane_yazi[sayi]);

    degerYazdir("CAN",5,CAN);
    degerYazdir("SAGLIK",5,SAGLIK);
    degerYazdir("MUTLULUK",5,MUTLULUK);
    sleep(1);
    showSkillsAndQualification();
}


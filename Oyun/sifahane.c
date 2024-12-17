#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sifahane.h"
#include <math.h>
#include "features.h"

char sifahane_yazi[10][100] = {
    "Her yara bir hikayedir ve her hikaye, seni daha guclu bir insan yapar.",
    "Gecmiste yasadiklarin seni durdurmak icin degil, seni daha dayanikli yapmak icin bir ogretmendir.",
    "Dusmek kotu degildir; onemli olan, dustugun yerden kalkip yurumeye devam etmektir.",
    "Kendi gucunu fark ettigin gun, hicbir sey seni yolundan alikoyamaz.",
    "Karanlik zamanlar gecici; icindeki isigi bul ve onunla yolunu aydinlat.",
    "Her yeni gun, yeniden baslamak icin bir firsattir. Unutma, bugunun senin icin bir armagan.",
    "Kalbindeki yara, hayatin sana ne kadar cesur oldugunu gostermek için biraktigi bir izdir.",
    "Yasadiklarin seni tanimlamaz; onlara nasil cevap verdigin senin kim oldugunu belirler.",
    "Kendine inan ve ilerle; her adinin, seni hayal ettigin yere yaklastiracak.",
    "Zorluklar, senin kahraman olmani bekleyen gizli firsatlardir."
};

void sifaciMenu(){
    printf("1 - Sifacidan yaralarini sarmasini iste\n");
    printf("2 - Sifacidan merhem yapip surmesini iste\n");
    printf("3 - Koy meydanina don\n");

    int choice;
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if (choice == 1){
        yara_sar();
    }
    else if (choice == 2){
        merhem_sur();
    }
    else if (choice == 3){
        printf("Koye donuluyor...\n");
    }
    else
    {
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
    }
}

void yara_sar() {
    srand(time(NULL));
    setFeatureValue(&CAN, CAN + 10);
    setFeatureValue(&SAGLIK, SAGLIK + 10);
    setFeatureValue(&MUTLULUK, MUTLULUK + 10);

    int sayi = rand() % 10;

    printf("%s\n",sifahane_yazi[sayi]);
}

void merhem_sur(){
    setFeatureValue(&CAN, CAN + 5);
    setFeatureValue(&SAGLIK, SAGLIK + 5);
    setFeatureValue(&MUTLULUK, MUTLULUK + 5);

    int sayi = rand() % 10;

    printf("%s\n",sifahane_yazi[sayi]);
}


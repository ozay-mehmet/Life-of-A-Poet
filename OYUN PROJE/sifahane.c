#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sifahane.h"
#include <math.h>
#include "features.h"

const char sifahane_yazi[10][100] = {
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


#include <stdio.h>
#include <stdlib.h>
#include "kamp.h"
#include "features.h"

int choice;

void kampciMenu(){
for(int i = 0; i == 0 ;){
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

    }
    else if(choice == 2){
        nehirdeYikan();
    }
    else if(choice == 3){
        cadirdaUyu();

    }
    else if(choice == 4){
        system("cls");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        i++;
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
        system("cls");
    }
  }
}

void sarkiSoyle(){
    system("cls");
    int song;
 for (int i = 0 ; i == 0 ;){
    printf("1 - Bu aksam\n2 - Aman aman\n3 - Senden daha guzel\n4 - Vazgec\n");
    printf("Ne soyleyelim : ");
    scanf("%d",&song);

    if(song == 1){
       printf("Bu aksam... harika secim.\nOynatiliyor...\n");
       sleep(1);
       i++;
    }
    else if(song == 2){
        printf("Aman aman... biraz uzgunuz galiba.\nOynatiliyor...\n");
        sleep(1);
        i++;
    }
    else if(song == 3){
        printf("Senden daha guzel... Ayy, tesekkurlerr.\nOynatiliyor...\n");
        sleep(1);
        i++;
    }
    else if(song == 4){
        printf("Senden beklemezdim (!)\nKamp alanina donuluyor...");
        sleep(1);
        i++;
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        sleep(0.8);
        getchar();
        system("cls");
    }
 }

  if(song == 1 || song == 2 || song == 3){
    setFeatureValueQuality(&MUTLULUK, &MUTLULUK + 20);
    KARIZMA += 5;
    setFeatureValueQuality(&PUAN , &PUAN + 20);
  }

}

void nehirdeYikan(){
    system("cls");
    setFeatureValueQuality(&HIJYEN, HIJYEN + 10);
    setFeatureValueQuality(&MUTLULUK, MUTLULUK + 10);
    printf("Haydi temizlenelim!\n...\n");
    sleep(1);
}

void cadirdaUyu(){
    system("cls");
    setFeatureValueQuality(&UYKU, UYKU + 50);
    GUC += 2;
    printf("Uyku vakti!\n...\n");
    sleep(1);
}

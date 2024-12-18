#include <stdio.h>
#include <stdlib.h>
#include "kamp.h"
#include "features.h"

int choice;

void kampciMenu(){

    printf("1 - Kamp atesinin basinda calgi cal/sarki soyle\n");
    printf("2 - Nehirde yikan\n");
    printf("3 - Cadirda uyu\n");
    printf("4 - Koy meydanina don.\n");

    printf("Seciminizi yapiniz : ");
    scanf("%d",&choice);

    if(choice == 1){
        system("cls");
        sarkiSoyle();
    }
    else if(choice == 2){
        system("cls");
        nehirdeYikan();
    }
    else if(choice == 3){
        system("cls");
        cadirdaUyu();
    }
    else if(choice == 4){
        printf("Koy meydanina donuluyor...");
        system("cls");
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
        system("cls");
    }
}

void sarkiSoyle(){
    int song;
    printf("1 - Bu aksam (+5)\n2 - Aman aman (+10)\n3 - Senden daha guzel(+15)\n4 - Vazgec\n");
    printf("Ne soyleyelim : ");
    scanf("%d",&song);

    for(int i=0 ; i <= 4;i++){
        if(song == 1){
           printf("Bu aksam... harika secim.\n Oynatiliyor...\n");
        }
        else if(song == 2){
            printf("Aman aman... biraz uzgunuz galiba.\n Oynatiliyor...\n");
        }
        else if(song == 3){
            printf("Senden daha guzel... Ayy, tesekkurlerr.\n Oynatiliyor...\n");
        }
        else if(song == 4){
            printf("Senden beklemezdim (!)\n");
        }
        else{
            printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
            getchar();
        }
    }

    if(song == 1 || song == 2 || song == 3){
        setFeatureValueQuality(&PUAN, PUAN + 9);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 8);
        setFeatureValueSkills(&KARIZMA, KARIZMA + 3);
        setFeatureValueQuality(&PUAN,PUAN + 8);
    }

}

void nehirdeYikan(){
    setFeatureValueQuality(&HIJYEN, HIJYEN + 4);
    setFeatureValueQuality(&MUTLULUK, MUTLULUK + 5);
    printf("Haydi temizlenelim!\n...\n");
}

void cadirdaUyu(){
    setFeatureValueQuality(&UYKU, UYKU + 15);
    setFeatureValueSkills(&GUC, GUC + 3);
    printf("Uyku vakti!\n...\n");
}
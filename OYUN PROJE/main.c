#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "menu.h"
#include "kamp.h"
#include "han.h"
#include "sifahane.h"
#include "macera.h"
#include "features.h"
#include "sleep.h"
#include "puan_seviye.h"

#define MAX 100

int main()
{
    setlocale(LC_ALL, "Turkish");

    const char *hikaye =
        /*"Bir Zamanlar Sözlerin Gücü Vardı...\n"
        "Karanlık bir dönemin ortasında, kalemin kılıçtan keskin olduğu zamanlar... "
        "İnsanların yüreklerine dokunan bir ozan vardı. Adı şimdilerde unutulmuş olsa da, dizeleri asla silinmedi.\n\n"
        "Onun kelimeleri, haksızlıkla savaşan birer kılıç, umutsuzluğa meydan okuyan birer ışık huzmesiydi. "
        "Ancak bu ozan yalnızca bir şair değil, aynı zamanda bir yolcuydu. Adaletin peşinde diyarlardan diyarlara koşan, "
        "halkın sesini duyuran bir kahraman...\n\n"
        "Bugün, onun hikâyesine adım atıyorsunuz. Kaleminiz onun sözlerini yazacak, yolculuğunuz onun adımlarını takip edecek. "
        "Hangi kararları alacak, hangi yollardan geçeceksiniz?\n\n"
        "Bir ozanın mirasını koruyabilir misiniz? Ya da onun yolunu kendi destanınızla mı yeniden şekillendireceksiniz?\n\n"
        "Hazırsanız, geçmişin tozlu sayfalarını çevirmeye başlayalım.\n"
        */"Bu, bir ozanın destanı. Bu, sizin hikâyeniz.\n";

    yazdir_hikaye(hikaye);

    int choice;
    char name[MAX];
    char instrument[MAX];
    srand(time(NULL));

    setlocale(LC_ALL, "Turkish");

    printf("\nKarakterinizin adini giriniz : ");
    gets(name);
    printf("Karakterinizin calgisini giriniz : ");
    gets(instrument);

    system("cls");

    printf("Merhabalar %s uzmani %s. Tesrifleriz icin tesekkurler :))\n",instrument,name);


    int score = 0;
    int level = 1;

    while(1){
        printf("\n--------------------\n");
        showQualification();
        printf("\n--------------------\n");
        menu();
        printf("Seciminizi yapiniz : ");
        scanf("%d",&choice);
        if(choice == 1){
            kampMenu();
        }
        else if(choice == 2){
            sifaciMenu();
        }
        else if(choice == 3){
            hanciMenu();
        }
        else if(choice == 4){
            maceraciMenu();
        }
        else if(choice == 5){
          yoldasMenu(level);
        }
        else if(choice == 6){
            showQualification();
            showSkills();
        }
        else if (choice == 7)
        {
            display_status(score , level);
        }
        else if (choice == 8)
        {
            printf("Cikis yapiliyor...\n");
            exit(0);
        }
        else
        {
            printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        }

    }

    return 0;
}

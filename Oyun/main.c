#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "features.h"
#include "menu.h"
#include "kamp.c"
#include "han.h"
#include "sifahane.h"
#include "macera.h"
#include "haydut.h"

#define MAX 100

int main()
{
    int choice;
    char name[MAX];
    char instrument[MAX];

    setlocale(LC_ALL, "Turkish");

    printf("Karakterinizin adini giriniz : ");
    gets(name);
    printf("Karakterinizin calgisini giriniz : ");
    gets(instrument);

    // Hikaye gelecek
    printf("Merhabalar %s uzmani %s. Tesrifleriz icin tesekkurler :))\n",instrument,name);

    while(1){
        printf("\n--------------------\n");
        showSkills();
        showQualification();
        printf("\n--------------------\n");
        menu();
        printf("Seciminizi yapiniz : ");
        scanf(" %d",&choice);
        if(choice == 1){
            printf("Kamp alanina gitmek icin hazirlaniyorsunuz...\n");
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
            printf("Seviye atliyorsunuz...\n");
        }
        else if(choice == 6){
            showQualification();
            showSkills();
        }
        else if (choice == 7){
            printf("Cikis yapiliyor...\n");
            break;
        }
        else{
            printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
            getchar();
        }

    }

    return 0;
}

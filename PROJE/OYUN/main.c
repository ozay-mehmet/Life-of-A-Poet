#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "level.h"
#include "yoldas.h"
#include "puan.h"
#include "features.h"
#include "ayi.h"
#include "kamp.h"
#include "han.h"
#include "sifahane.h"
#include "macera.h"
#include "haydut.h"
#include "menu.h"
#include "yoldasMenu.h"

#define MAX 100

void yazdir_hikaye(char *hikaye);

int main()
{
    int choice;
    char name[MAX];
    char instrument[MAX];

    printf("\n");
    printf(" ##      ######  ######  ######           ####   ######           ####           #####    ####   ######  ######         \n");
    printf(" ##        ##    ##      ##              ##  ##  ##              ##  ##          ## ##   ##  ##  ##        ##           \n");
    printf(" ##        ##    ####    ####            ##  ##  ####            ######          #####   ##  ##  ####      ##           \n");
    printf(" ##        ##    ##      ##              ##  ##  ##              ##  ##          ##      ##  ##  ##        ##           \n");
    printf(" ######  ######  ##      ######           ####   ##              ##  ##          ##       ####   ######    ##           \n");
    printf("\n");
    printf("\t\t\t\t*********************************************\n");
    printf("\t\t\t\t*          Bir Ozan'in Hikayesi             *\n");
    printf("\t\t\t\t*          Maceraya Hosgeldiniz!            *\n");
    printf("\t\t\t\t*********************************************\n");
    printf("\n");

    char *hikaye = {
        "Bir Zamanlar Sozlerin Gucu Vardi...\n"
        "Karanlik bir donemin ortasinda, kalemin kilictan keskin oldugu zamanlar...\n"
        "Insanlarin yureklerine dokunan bir ozan vardi. Adi simdilerde unutulmus olsa da, dizeleri asla silinmedi. "
        "Onun kelimeleri, haksizlikla savasan birer kilic, umutsuzluga meydan okuyan birer isik huzmesiydi. "
        "Ancak bu ozan yalnizca bir sair degil, ayni zamanda bir yolcuydu. "
        "Adaletin pesinde diyarlardan diyarlara kosan, halkin sesini duyuran bir kahraman.. "
        "Bugun onun hikâyesine adim atiyorsunuz. Kaleminiz onun sozlerini yazacak, yolculugunuz onun adimlarini takip edecek. "
        "Hangi kararlari alacak, hangi yollardan gececeksiniz? "
        "Bir ozanin mirasini koruyabilir misiniz? Ya da onun yolunu kendi destaninizla mi yeniden sekillendireceksiniz? "
        "Hazirsaniz, gecmisin tozlu sayfalaririni cevirmeye baslayalim.\n"
        "Bu, bir ozanin destani. Bu, sizin hikayeniz...\n\n"
    };

    yazdir_hikaye(hikaye);

    printf("Karakterinizin adini giriniz : ");
    gets(name);
    printf("Karakterinizin calgisini giriniz : ");
    gets(instrument);

    printf("\nMerhabalar %s uzmani %s. Tesrifleriz icin tesekkurler :))\n\n",instrument,name);
    printf("Oyuna baslamak icin herhangi bir tusa basiniz: ");
    getch();
    system("cls");

    while(1){
    system("cls");
    showSkillsAndQualification();
    printf("Seciminizi yapiniz : ");
    scanf(" %d",&choice);

        if(choice == 1){
        system("cls");
        printf("Kamp alanina gidiliyor...\n");
        sleep(1);
        system("cls");
        kampciMenu();

        }else if(choice == 2){
        system("cls");
        printf("Sifahaneye gidiliyor...");
        sleep(1);
        sifaciMenu();

        }else if(choice == 3){
        system("cls");
        printf("Hana gidiliyor...\n");
        sleep(1);
        system("cls");
        hanciMenu();

        }else if(choice == 4){
        system("cls");
        printf("Macera vakti!");
        sleep(1);
        maceraciMenu();

        }else if(choice == 5){
        system("cls");
        display_status(PUAN , SEVIYE);
        sleep(1);
        printf("\nKontrol ediyorum...\n");
        sleep(1);
        update_score_and_level(&PUAN , &SEVIYE);

        }else if(choice == 6){
        system("cls");
        int choice2;
        for(int i = 0 ; i == 0 ;){
        display_status(PUAN , SEVIYE);
        showQualification();
        showSkills();

        printf("\n1 - Koy meydani\n");
        printf("secim: ");
        scanf("%d",&choice2);
            if(choice2 == 1){
            system("cls");
            printf("Koy meydanina donuluyor...");
            sleep(1);
            showSkillsAndQualification();
            break;

        }else{
            printf("Hatali giris! Lutfen gecerli bir deger giriniz.");
            getchar();
            sleep(1);
            system("cls");
            }
        }
        }else if (choice == 7){
        yoldasMenu(SEVIYE);

        }else if (choice == 8){
        system("cls");
        printf("  ####   ######  ##  ##  ######  ##      ######  ##  ##   ####   #####  \n");
        printf(" ##  ##    ##    ## ##     ##    ##        ##     ####   ##  ##  ##  ## \n");
        printf(" ##        ##    ####      ##    ##        ##      ##    ##  ##  #####  \n");
        printf(" ##  ##    ##    ## ##     ##    ##        ##      ##    ##  ##  ##  ## \n");
        printf("  ####   ######  ##  ##  ######  ######  ######    ##     ####   ##  ## \n");
        sleep(2);
        break;

        }else{
        printf("HATALI GIRIS! LUTFEN GECERLI BÝR DEGER GIRINIZ.\n");
        sleep(1);
        getchar();
        system("cls");
        }
    }
    return 0;
}

void yazdir_hikaye(char *metin) {
    for (int i = 0; metin[i] != '\0'; i++) {

    if (kbhit()) {
    (void)_getch();
    printf("%s", &metin[i]);
    break;
    }
    putchar(metin[i]);
    fflush(stdout);
    Sleep(30);
    }
}

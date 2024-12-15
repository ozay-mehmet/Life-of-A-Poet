#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "includes/menu.c"
#include "includes/kamp.c"
#include "includes/han.h"
#include "includes/sifahane.h"
#include "includes/macera.h"
#include "includes/features.h"

#define MAX 100

int main()
{
    int choise;
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
        printf("--------------------\n");
        showQualification();
        printf("--------------------\n");
        menu();
        printf("Seciminizi yapiniz : ");
        scanf("%d",&choise);
        if(choise == 1){
            
        }
        if(choise == 2){
            sifaciMenu();
        }
        if(choise == 3){
            hanciMenu();
        }
        if(choise == 4){
            maceraMenu();
        }
        if(choise == 5){

        } 
        if(choise == 6){
            showQualification();
            showSkills();
        }
        if (choise == 7)
        {
            printf("Cikis yapiliyor...\n");
            break;
        }
        else
        {
            printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        }
        
    }

    return 0;
}
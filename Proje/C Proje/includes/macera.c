#include "macera.h"
#include <stdio.h>
#include "features.h"

int choise;

void maceraMenu(){
    printf("1 - Ormanda Gez\n");
    printf("2 - Magaraya Git\n");
    printf("3 - Avlan\n");
    printf("4 - Vadiye Git\n");
    printf("5 - Sifali Bitki Topla\n");
    printf("6 - Koy Meydanina Gor\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choise);

    if(choise == 1){
        ormandaGez();
    }
    else if(choise == 2){
        magarayaGit();
    }
    else if(choise == 3){
        avlan();
    }
    else if(choise == 4){
        vadiyeGit();
    }
    else if(choise == 5){
        sifaliBitkiTopla();
    }
    else if(choise == 6){
        printf("Koy meydanina donuluyor...\n");
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }

}

void ormandaGez(){
    
}

void magarayaGit(){
    printf("Magaraya gidiliyor...\n");
}

void avlan(){
    printf("Avlaniliyor...\n");
}

void vadiyeGit(){
    printf("Vadiye gidiliyor...\n");
}

void sifaliBitkiTopla(){
    printf("Sifali bitki toplaniyor...\n");
}

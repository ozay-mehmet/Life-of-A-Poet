#include <stdio.h>
#include "macera.h"
#include "features.h"
#include "haydut.h"
#include "ayi.h"

int choice;

void ormandaGez(){
    printf("Ormanda gezmek saglik icin ve sifali bitkiler bulmak icin iyi bir tercihdir...\n");
    ayiylaKarsilasma();
}

void magarayaGit(){
    printf("Magaraya gidiliyor...\nMagaranin ici tehlikeli olabilir, becerilerine ihtiyacimiz var. Hala gitmek istediðinden emin misin ? \n");
    printf("1 - Evet\n2 - Hayir\n");
    printf("Secimini Yap : ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Guclu ve zor kararlari ancak senin gibi kahramanlar alabilir, gucune ve zekana guveniyorum...\n");
        setFeatureValueQuality(&TOK, TOK - 15);
        printf("Magaraya girmek isine yaradi, Mucevherler gozunun onundeee :))\n");
        setFeatureValueQuality(&ALTIN, ALTIN + 15);
        setFeatureValueQuality(&PUAN, PUAN + 20);
        setFeatureValueQuality(&TOK, TOK - 20);
        setFeatureValueQuality(&SANS, SANS + 10);
        setFeatureValueSkills(&TOPLAYICILIK, TOPLAYICILIK + 5);
        setFeatureValueSkills(&KARIZMA, KARIZMA + 8);
    }
    else if(choice == 2){
        printf("Magaranin agzina gelmisken geri donmek yakismadi :((\n");
        KARIZMA -= 2;
        setFeatureValueQuality(&TOK, TOK - 15);
        setFeatureValueQuality(&PUAN, PUAN + 10);
    }
    else{
        printf("Yanlis deger girdiniz, tekrar deneyiniz...\n");
        getchar();
        system("cls");
    }

}

void avlan(){
    int aticilik = SANS / 2;;
    if(aticilik >= 25){
        printf("\nAva giderken avlananlardan misin yoksa avlayanlardan mi ??\n");
        printf("1 - Tavsan\n2 - Ceylan\n3 - Domuz\n");
        printf("3 secenek var hangisi sana daha cazip geliyor : ");
        scanf("%d",&choice);

        if(choice == 1){
            AVCILIK += 5;
            TOPLAYICILIK += 5;
            KARIZMA += 3;
            setFeatureValueQuality(&TOK,TOK + 30);
            setFeatureValueQuality(&PUAN, PUAN + 20);
            printf("Aksama ortaya guzel bir tavsan iyi gidecek :))\n");
        }
        else if(choice == 2){
            AVCILIK += 8;
            TOPLAYICILIK += 8;
            KARIZMA += 5;
            setFeatureValueQuality(&TOK,TOK + 50);
            setFeatureValueQuality(&PUAN, PUAN + 40);
            printf("Agzinin tadini biliyorsun :)\n");
        }
        else if(choice == 3){
            AVCILIK += 6;
            TOPLAYICILIK += 6;
            setFeatureValueQuality(&TOK,TOK + 40);
            setFeatureValueQuality(&PUAN, PUAN + 15);
            KARIZMA += 4;
            printf("Temiz bir domuz iyi gider...\n");
        }
        else{
            printf("Digerleri sagliksiz bence bu hayvanlari avlayin...\n");
            getchar();
        }
    }
    else{
        printf("\nBu durumda avlanman cok riskli. Daha dogru durust silah bile kullanamiyorsun. Oncelikle avciligini gelistir...\n");
        printf("1 - Koy meydanina don ve antrenman yap\n");
        printf("2 - Silahini, zirhini yukseltmek icin demirciye git\n");
    }

}

void vadiyeGit(){
    printf("Kayaliklar dolu bir vadide her sey olabilir kasif, tedbirini al !!!\n");
    SANS = TOPLAYICILIK * 5 / 100;

    if(SANS >= 5 / 10){
        printf("Magarayi sen de gordun mu, gitmek ister misin (1 => Evet, 2 => Hayir)\n");
        printf("Secimini Yap : ");
        scanf("%d",&choice);

        if(choice == 1){
            magarayaGit();
        }
        else if(choice == 2){
            printf("Biraz daha kayaliklarda gezinmek bir seyler bulmani saglayabilir..\nO da neee !!!\n");
            printf("Kayaliklarin arasinda degerli tas bulduunn !!!\n");
            setFeatureValueQuality(&ALTIN, ALTIN + 10);
            setFeatureValueQuality(&PUAN, PUAN + 15);
            setFeatureValueQuality(&TOK, TOK - 20);
            TOPLAYICILIK += 5;
            KARIZMA += 3;
        }
        else{
            printf("Boyle bir secenegimiz bulunmamaktadir, tekrar deneyiniz...\n");
            getchar();
            system("cls");
        }

    }
    else{
        printf("Kayaliklarda yurumek tehlikeli olabilir, lutfen daha dikkatli oll !!!\n");
        setFeatureValueQuality(&TOK, TOK - 10);
        KARIZMA += 1;
    }

}

void sifaliBitkiTopla(){
    SANS = (TOPLAYICILIK * 4) / 100;
    if(SANS >= 5/10){
        setFeatureValueQuality(&PUAN, PUAN + 10);
        setFeatureValueQuality(&CAN,CAN + 10);
        setFeatureValueQuality(&TOK,TOK + 10);
        printf("Bugun iyi gunundesin galiba. Sifali bitkiyi bulmak herkese nasip olmaz.\n");
    }
    else{
        printf("Bi baska zamana sana da nasip olur sifali bitki uzme kendini :((\n");
        setFeatureValueQuality(&TOK,TOK - 10);
    }
}

void turSonucu(int *oyuncu_kazandi, int *haydut_kazandi) {
    int kazanan = rand() % 2;
    if (kazanan == 1) {
        printf("Kazandin. Tebrikler !!! Tum ganimet senin.\n\n");
        printf(" ##  ##   ####   ######   ####   ##  ##  #####   ######  ##  ## \n");
        printf(" ## ##   ##  ##     ##   ##  ##  ### ##  ##  ##    ##    ### ## \n");
        printf(" ####    ######    ##    ######  ## ###  ##  ##    ##    ## ### \n");
        printf(" ## ##   ##  ##   ##     ##  ##  ##  ##  ##  ##    ##    ##  ## \n");
        printf(" ##  ##  ##  ##  ######  ##  ##  ##  ##  #####   ######  ##  ## \n");
        setFeatureValueQuality(&ALTIN, ALTIN + 10);
        setFeatureValueQuality(&PUAN, PUAN + 20);
        GUC += 5;
        CEVIKLIK += 10;
        DAYANIKLILIK += 10;
        HAYDUT_CAN -= 20;
        KARIZMA += 3;
        setFeatureValueQuality(&TOK,TOK - 10);
        TOPLAYICILIK += 5;
        HAYDUT_CEVIKLIK -= 10;
        HAYDUT_DAYANIKLILIK -= 10;
        (*oyuncu_kazandi)++;
    } else {
        printf("Hahahaha. Sadece bu kadar misin zavalli !!!\n\n");
        printf("  ####   ##      #####   ##  ##  ##  ## \n");
        printf(" ##  ##  ##      ##  ##  ##  ##  ### ## \n");
        printf(" ##  ##  ##      ##  ##  ##  ##  ## ### \n");
        printf(" ##  ##  ##      ##  ##  ##  ##  ##  ## \n");
        printf("  ####   ######  #####   ######  ##  ## \n");
        setFeatureValueQuality(&PUAN, PUAN - PUAN);
        ALTIN = 0;
        GUC = 0;
        CEVIKLIK = 0;
        DAYANIKLILIK = 0;
        HAYDUT_CAN += 10;
        HAYDUT_CEVIKLIK += 10;
        HAYDUT_DAYANIKLILIK += 10;
        (*haydut_kazandi)++;
    }
}

void kesfeCik(){
    int damage_done = 0;
    int damage_taken = 0;
    srand(time(NULL));
    printf("1 - Kolay Kesif\n");
    printf("2 - Orta Kesif\n");
    printf("3 - Zor Kesif\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if (choice == 1){
        int sayi = rand() % 9;
        printf("%s\n",haydut_bilgi_yazi[sayi]);

        showEasyHaydutFeature();

        savas();

    }

    else if (choice == 2){
        int sayi = rand() % 9;
        printf("%s\n",haydut_bilgi_yazi[sayi]);

        showMediumHaydutFeature();

        savas();
    }
    else if (choice == 3){

        int sayi = rand() % 9;
        printf("%s\n",haydut_bilgi_yazi[sayi]);

        showHardHaydutFeature();
        if (choice == 2) {
            printf("Savas alanindan kactin! Hayatta kalmayi basardin, ama ganimeti kaybettin.\n");
            KARIZMA -= 1;
        }
        else if (choice == 1) {
            printf("%s\n", haydut_tehdit_yazi[rand() % 8]);
            savas();
        }
        else{
            printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
            getchar();
            system("cls");
        }

    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
        system("cls");
    }

}

void savas(){
    while (CAN > 0 || HAYDUT_CAN > 0) {
        int oyuncu_kazandi = 0, haydut_kazandi = 0;

        for (int tur = 1; tur <= 3; tur++) {
            if (CAN <= 0 || HAYDUT_CAN <= 0)
                break;
            else{
                printf("\n***** %d. Tur *****\n", tur);
                fflush(stdout);
                turSonucu(&oyuncu_kazandi, &haydut_kazandi);

                if (oyuncu_kazandi > 1 || haydut_kazandi > 1){
                    break;
                }
            }

        }
        if (oyuncu_kazandi > haydut_kazandi) {
            printf("\nTebrikler! Savasi kazandin.\n");
            HAYDUT_CAN = 0;
            HAYDUT_CEVIKLIK = 0;
            HAYDUT_DAYANIKLILIK = 0;
        }
        else if (haydut_kazandi > oyuncu_kazandi) {
            printf("\nHaydut savasi kazandi!\n");
            CAN = 0;
            DAYANIKLILIK = 0;
            CEVIKLIK = 0;
            ALTIN = 0;
            GUC = 0;
            PUAN = 0;
            TOK = 0;
            AVCILIK = 0;
            TOPLAYICILIK = 0;
        }

        printf("Oyuncu Can: %d, Haydut Can: %d\n", CAN, HAYDUT_CAN);

        if (CAN <= 0){
            printf("\nOyuncunun cani bitti. OLDUN!\n");
        }
        else if (HAYDUT_CAN <= 0){
            printf("\nHaydutun cani bitti. KAZANDIN!\n");
        }

    }
}

void maceraciMenu(){
    printf("1 - Ormanda Gez (Kolay Gorev)\n");
    printf("2 - Magaraya Git (Orta Gorev)\n");
    printf("3 - Avlan\n");
    printf("4 - Vadiye Git (Zor Gorev)\n");
    printf("5 - Sifali Bitki Topla\n");
    printf("6 - Kesfe Cik\n");
    printf("7 - Koy Meydanina Don\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if(choice == 1){
        ormandaGez();
    }
    else if(choice == 2){
        magarayaGit();
    }
    else if(choice == 3){
        avlan();
    }
    else if(choice == 4){
        vadiyeGit();
    }
    else if(choice == 5){
        sifaliBitkiTopla();
    }
    else if(choice == 6){
        kesfeCik();
    }
    else if(choice == 7){
        printf("Koy meydanina donuluyor...\n");
        system("cls");
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
        system("cls");
    }
}

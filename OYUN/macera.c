#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "macera.h"
#include "features.h"
#include "haydut.h"
#include "ayi.h"
#include "menu.h"
#include "degerYazdir.h"



void ormandaGez(){
    system("cls");
    printf("Ormanda gezmek saglik icin ve sifali bitkiler bulmak icin iyi bir tercihdir...\n");
    sleep(1);
    ayiylaKarsilasma();
}

void magarayaGit(){
    int choice;
    system("cls");

    printf("Magaraya gidiliyor...\n");
    sleep(1);
    system("cls");
    while(1){
    printf("Magaranin ici tehlikeli olabilir, becerilerine ihtiyacimiz var. Hala gitmek istediginden emin misin ? \n");
    sleep(1);
    printf("1 - Evet\n2 - Hayir\n");
    printf("Secimini Yap : ");
    scanf("%d",&choice);

    if(choice == 1){
    system("cls");

    if(TOK - 35 < 0){
    printf("TOKLUK degeri yetersiz! Islem gerceklestirilemez.");
    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
    break;
    }

    printf("Guclu ve zor kararlari ancak senin gibi kahramanlar alabilir, gucune ve zekana guveniyorum...\n");
    setFeatureValueQuality(&TOK, TOK - 15);
    degerYazdir("TOK",(-15),TOK);
    sleep(1);
    printf("Magaraya girmek isine yaradi, Mucevherler gozunun onundeee :))\n");
    sleep(1);
    printf("Harikasin!!\n");

    setFeatureValueQuality(&ALTIN, ALTIN + 15);
    setFeatureValueQuality(&PUAN, PUAN + 20);
    setFeatureValueQuality(&TOK, TOK - 20);
    SANS += 10;
    setFeatureValueSkills(&TOPLAYICILIK, TOPLAYICILIK + 5);
    setFeatureValueSkills(&KARIZMA, KARIZMA + 8);

    degerYazdir("ALTIN",15,ALTIN);
    degerYazdir("PUAN",20,PUAN);
    degerYazdir("TOK",(-20),TOK);
    degerYazdir("SANS",10,SANS);
    degerYazdir("TOPLAYICILIK",5,TOPLAYICILIK);
    degerYazdir("KARIZMA",8,KARIZMA);

    sleep(1);
    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
    break;

    }else if(choice == 2){
    system("cls");

    if(TOK - 15 < 0){
    printf("TOKLUK degeri yetersiz! Islem gerceklestirilemez.");
    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
    break;

    }else if(KARIZMA - 2 < 0){
    printf("KARIZMA degeri yetersiz! Islem gerceklestirilemez.");
    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
    break;
    }

    printf("Magaranin agzina gelmisken geri donmek yakismadi :((\n");
    setFeatureValueSkills(&KARIZMA , KARIZMA - 2);
    setFeatureValueQuality(&TOK, TOK - 15);
    setFeatureValueQuality(&PUAN , PUAN + 10);
    degerYazdir("KARIZMA",(-2),KARIZMA);
    degerYazdir("TOK",(-15),TOK);
    degerYazdir("PUAN",10,PUAN);
    sleep(1);

    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
    break;

    }else{
    printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRINIZ.\n");
    getchar();
    sleep(1);
    system("cls");
    }
    }
}

void avlan(){
    int choice;
    int aticilik = SANS / 2;
    system("cls");
    if(aticilik >= 25){
    printf("Ava giderken avlananlardan misin yoksa avlayanlardan mi ??\n");
    sleep(1);

    while(1){
    printf("1 - Tavsan\n2 - Ceylan\n3 - Domuz\n4 - Vazgec\n");
    printf("Secim senin: ");
    scanf("%d",&choice);

        if(choice == 1){
        system("cls");

        printf("Aksama ortaya guzel bir tavsan iyi gidecek :))\n");
        sleep(1);

        setFeatureValueSkills(&AVCILIK , AVCILIK + 5);
        setFeatureValueSkills(&TOPLAYICILIK , TOPLAYICILIK + 5);
        setFeatureValueSkills(&KARIZMA , KARIZMA + 3);
        setFeatureValueQuality(&TOK,TOK + 30);
        setFeatureValueQuality(&PUAN, PUAN + 20);

        degerYazdir("PUAN",20,PUAN);
        degerYazdir("TOK",30,TOK);
        degerYazdir("AVCILIK",5,AVCILIK);
        degerYazdir("TOPLAYICILIK",5,TOPLAYICILIK);
        degerYazdir("KARIZMA",3,KARIZMA);
        sleep(1);

        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;

        }else if(choice == 2){
        system("cls");
        printf("Agzinin tadini biliyorsun :)\n");
        sleep(1);

        setFeatureValueSkills(&AVCILIK , AVCILIK + 8);
        setFeatureValueSkills(&TOPLAYICILIK , TOPLAYICILIK + 8);
        setFeatureValueSkills(&KARIZMA , KARIZMA + 5);
        setFeatureValueQuality(&TOK,TOK + 50);
        setFeatureValueQuality(&PUAN, PUAN + 40);

        degerYazdir("PUAN",40,PUAN);
        degerYazdir("TOK",50,TOK);
        degerYazdir("KARIZMA",5,KARIZMA);
        degerYazdir("AVCILIK",8,AVCILIK);
        degerYazdir("TOPLAYICILIK",8,TOPLAYICILIK);
        sleep(1);

        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        break;

        }else if(choice == 3){
        system("cls");

        printf("Temiz bir domuz iyi gider...\n");
        sleep(1);

        setFeatureValueSkills(&AVCILIK , AVCILIK + 6);
        setFeatureValueSkills(&TOPLAYICILIK , TOPLAYICILIK + 6);
        setFeatureValueQuality(&TOK,TOK + 40);
        setFeatureValueQuality(&PUAN, PUAN + 15);
        setFeatureValueSkills(&KARIZMA, KARIZMA + 4);

        degerYazdir("PUAN",15,PUAN);
        degerYazdir("KARIZMA",4,KARIZMA);
        degerYazdir("TOK",40,TOK);
        degerYazdir("AVCILIK",6,AVCILIK);
        degerYazdir("TOPLAYICILIK",6,TOPLAYICILIK);
        sleep(1);

        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
        break;

        }else if (choice == 4){
        system("cls");
        printf("Haydi koye donelim.\n");
        sleep(1);
        showSkillsAndQualification();
        break;
        }
        else{
            system("cls");
            printf("HATALI GIRIS! Lutfen gecerli bir deger giriniz.\n");
            getchar();
            sleep(1);
        }
      }
    }else{
    printf("\nBu durumda avlanman cok riskli. Daha dogru durust silah bile kullanamiyorsun. Oncelikle avciligini gelistir...\n");
    sleep(1);
    printf("Koy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();
    }

}

void vadiyeGit(){
    int choice;
    system("cls");

    printf("Kayaliklar dolu bir vadide her sey olabilir kasif, tedbirini al !!!\n");
    SANS = TOPLAYICILIK * 5 / 100;
    sleep(1);

    if(SANS >= 5 / 10){
    printf("Magarayi sen de gordun mu?\n");
    sleep(1);
    system("cls");
while(1){
    printf("Gitmek ister misin?\n");
    sleep(1);
    printf("1 - Evet\n2 - Hayir\n");
    printf("Secimini Yap : ");
    scanf("%d",&choice);

    if(choice == 1){
    magarayaGit();
    break;

    }else if(choice == 2){
    system("cls");

        if(TOK - 20 < 0){
        printf("TOKLUK degeri yetersiz! Islem gerceklestirilemez.\n");
        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
        }
        printf("Biraz daha kayaliklarda gezinmek bir seyler bulmani saglayabilir..\nO da neee !!!\n");
        sleep(1);
        printf("Kayaliklarin arasinda degerli tas bulduunn !!!\n");
        setFeatureValueQuality(&ALTIN, ALTIN + 10);
        setFeatureValueQuality(&PUAN, PUAN + 15);
        setFeatureValueQuality(&TOK, TOK - 20);
        setFeatureValueSkills(&TOPLAYICILIK , TOPLAYICILIK + 5);
        setFeatureValueSkills(&KARIZMA , KARIZMA + 3);

        degerYazdir("ALTIN",10,ALTIN);
        degerYazdir("PUAN",15,PUAN);
        degerYazdir("TOK",(-20),TOK);
        degerYazdir("TOPLAYICILIK",5,TOPLAYICILIK);
        degerYazdir("KARIZMA",3,KARIZMA);
        sleep(1);

        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
        break;

        }else{
        printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.\n");
        getchar();
        sleep(1);
        system("cls");
    }
}
    }else{
    system("cls");

        if(TOK - 10 < 0){
        printf("TOKLUK degeri yetersiz! Islem gerceklestirilemez.\n");
        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
        }

    printf("Kayaliklarda yurumek tehlikeli olabilir, lutfen daha dikkatli oll !!!\n");
    setFeatureValueQuality(&TOK, TOK - 10);
    KARIZMA += 1;

    degerYazdir("TOK",(-10),TOK);
    degerYazdir("KARIZMA",1,KARIZMA);

    sleep(1);
    printf("Koy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();
    }

}

void sifaliBitkiTopla(){
    system("cls");

    SANS = (TOPLAYICILIK * 4) / 100;
    if(SANS >= 5/10){
    system("cls");

    printf("Sifali bitki araniyor...\n");
    sleep(1);

    system("cls");
    printf("Bugun iyi gunundesin galiba. Sifali bitkiyi bulmak herkese nasip olmaz.\n");
    sleep(1);
    printf("Toplaniyor...\n");

    setFeatureValueQuality(&PUAN, PUAN + 10);
    setFeatureValueQuality(&CAN,CAN + 10);
    setFeatureValueQuality(&TOK,TOK + 10);
    SANS = SANS + 5.0;

    degerYazdir("CAN",10,CAN);
    degerYazdir("PUAN",10,PUAN);
    degerYazdir("TOK",10,TOK);
    degerYazdir("SANS",5,SANS);
    sleep(1);

    system("cls");
    printf("Koy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();

    }else{
        if(TOK - 10 < 0){
        printf("TOKLUK degeri yetersiz! Islem gerceklestirilemez.\n");
        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
        }
    system("cls");

    printf("Bi baska zamana sana da nasip olur sifali bitki uzme kendini :((\n");
    setFeatureValueQuality(&TOK,TOK - 10);
    degerYazdir("TOK",(-10),TOK);
    sleep(1);
    system("cls");
    printf("Koy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();
    }
}


void kesfeCik(){
    int choice;
    system("cls");

    srand(time(NULL));

    printf("1 - Kolay Kesif\n");
    printf("2 - Orta Kesif\n");
    printf("3 - Zor Kesif\n");
    printf("4 - Vazgec\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if (choice == 1){
    system("cls");
    int temp;
    printf("Olamaz,Haydut!\n");
    sleep(1);
    system("cls");
    printf("OYUNCU CAN: %d\nOYUNCU GUC: %d\nOYUNCU CEVIKLIK: %d\nOYUNCU DAYANIKLILIK: %d\n",CAN,GUC,CEVIKLIK,DAYANIKLILIK);
    showEasyHaydutFeature();

    for(int i = 0; i == 0 ;){

    printf("\n1 - Savas\n2 - Kac\nSecimini yap:");
    scanf("%d",&temp);
    if(temp == 1){
    haydutSavas(&choice);
    i++;

    }else if(temp == 2){
    haydutKacis(&choice);
    if(CAN == 0 || HAYDUT_CAN == 0)
    haydutKacis(&choice);
    else
    showSkillsAndQualification();
    i++;

    }else{
    printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.");
    getchar();
    sleep(1);
    system("cls");
    printf("OYUNCU CAN: %d\nOYUNCU GUC: %d\nOYUNCU CEVIKLIK: %d\nOYUNCU DAYANIKLILIK: %d\n\n",CAN,GUC,CEVIKLIK,DAYANIKLILIK);
    showHardHaydutFeature();
    }
   }
    savasSonuc();

    }else if (choice == 2){

    int temp;

    printf("Olamaz,Haydut!\n");
    sleep(1);
    system("cls");
    printf("OYUNCU CAN: %d\nOYUNCU GUC: %d\nOYUNCU CEVIKLIK: %d\nOYUNCU DAYANIKLILIK: %d\n\n",CAN,GUC,CEVIKLIK,DAYANIKLILIK);
    showMediumHaydutFeature();

    for(int i = 0; i == 0 ;){

    printf("1 - Savas\n2 - Kac\nSecimini yap:");
    scanf("%d",&temp);
        if(temp == 1){
        haydutSavas(&choice);
        i++;

    }else if(temp == 2){
        haydutKacis(&choice);
    if(CAN == 0 || HAYDUT_CAN == 0)
    haydutKacis(&choice);
    else
    showSkillsAndQualification();
    i++;

    }else{
        printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.");
        getchar();
        sleep(1);
        system("cls");
        printf("OYUNCU CAN: %d\nOYUNCU GUC: %d\nOYUNCU CEVIKLIK: %d\nOYUNCU DAYANIKLILIK: %d\n\n",CAN,GUC,CEVIKLIK,DAYANIKLILIK);
        showHardHaydutFeature();
    }
   }
    savasSonuc();

    }else if (choice == 3){

    int temp;

    printf("Olamaz,Haydut!\n");
    sleep(1);
    for(int i = 0; i == 0 ;){
    system("cls");
    printf("OYUNCU CAN: %d\nOYUNCU GUC: %d\nOYUNCU CEVIKLIK: %d\nOYUNCU DAYANIKLILIK: %d\n\n",CAN,GUC,CEVIKLIK,DAYANIKLILIK);
    showHardHaydutFeature();

    printf("1 - Savas\n2 - Kac\nSecimini yap:");
    scanf("%d",&temp);

    if(temp == 1){
    haydutSavas(&choice);
    i++;

    }else if(temp == 2){
        haydutKacis(&choice);
    if(CAN == 0 || HAYDUT_CAN == 0)
    haydutKacis(&choice);
    else
    showSkillsAndQualification();
    i++;

    }else{
    printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.");
    getchar();
    sleep(1);
    system ("cls");
    }
   }
    savasSonuc();

    }
    else if(choice == 4){
        system("cls");
        printf("Koy meydanina donuluyor..\n");
        sleep(1);
        system("cls");
        showSkillsAndQualification();
    }

    else{
    printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRIN.\n");
    getchar();
    sleep(1);
    system("cls");
    kesfeCik();
    }
}

void savasSonuc(){

    if (HAYDUT_CAN == 0) {
    printf("\n");
    printf(" ##  ##   ####   ######   ####   ##  ##  #####   ######  ##  ## \n");
    printf(" ## ##   ##  ##     ##   ##  ##  ### ##  ##  ##    ##    ### ## \n");
    printf(" ####    ######    ##    ######  ## ###  ##  ##    ##    ## ### \n");
    printf(" ## ##   ##  ##   ##     ##  ##  ##  ##  ##  ##    ##    ##  ## \n");
    printf(" ##  ##  ##  ##  ######  ##  ##  ##  ##  #####   ######  ##  ## \n");
    sleep(1);
    printf("Koy meydanina donuluyor...");
    showSkillsAndQualification();

    }else if (CAN == 0) {
    printf("\nHaydut savasi kazandi!\n");
    printf("  ####   ##      #####   ##  ##  ##  ## \n");
    printf(" ##  ##  ##      ##  ##  ##  ##  ### ## \n");
    printf(" ##  ##  ##      ##  ##  ##  ##  ## ### \n");
    printf(" ##  ##  ##      ##  ##  ##  ##  ##  ## \n");
    printf("  ####   ######  #####   ######  ##  ## \n");
    sleep(1);
    exit(0);
    }
}

void maceraciMenu(){
    int choice;

    system("cls");

    printf("---- MACERA -----\n");
    printf("1 - Ormanda Gez (Kolay Gorev)\n");
    printf("2 - Magaraya Git (Orta Gorev)\n");
    printf("3 - Vadiye Git (Zor Gorev)\n");
    printf("4 - Avlan\n");
    printf("5 - Sifali Bitki Topla\n");
    printf("6 - Kesfe Cik\n");
    printf("7 - Koy Meydanina Don\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if(choice == 1){
    ormandaGez();

    }else if(choice == 2){
    magarayaGit();

    }else if(choice == 3){
    vadiyeGit();

    }else if(choice == 4){
    avlan();

    }else if(choice == 5){
    sifaliBitkiTopla();

    }else if(choice == 6){
    kesfeCik();

    }else if(choice == 7){
    system("cls");
    printf("Koy meydanina donuluyor...\n");
    sleep(1);
    showSkillsAndQualification();

    }else{
    printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    getchar();
    sleep(1);
    system("cls");
    maceraciMenu();
    }
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "menu.h"
#include "features.h"
#include "han.h"
#include "puan.h"
#include "degerYazdir.h"


char han_yemek_yazi[8][100] = {
    "Yemek cok lezzetliydi. Kendimi daha iyi hissediyorum.",
    "Midem doydu ve simdi daha enerjik hissediyorum.",
    "Karnim doydu, biraz dinlenmek iyi geldi.",
    "Zorlu yolculugumda bu yemek gercekten cok iyi geldi.",
    "Bu yemek hem lezzetli hem de doyurucuydu. Simdi rahatca dinlenebilirim.",
    "Han sahibi cok misafirperverdi. Yemek gercekten mukemmeldi!",
    "Bu yemek tum yorgunlugumu aldi. Hazirim, yoluma devam edebilirim!",
    "Yemek sonrasi rahatladim, biraz daha dinlenip yoluma cikacagim."
};

char han_icecek_yazi[8][100] = {
    "Icecegimi ictim ve rahatladim. Havadar bir nefes alip yola devam edebilirim.",
    "Bir kadeh icki beni tamamen gevsetti. Simdi daha huzurluyum.",
    "İcki çok lezzetliydi, tum yorgunlugum gitti.",
    "Biraz icki, biraz dinlenme... Kendimi yenilenmis hissediyorum.",
    "Kadehimi kaldirdim, ictim ve derin bir nefes aldim. Simdi her sey daha parlak gorunuyor.",
    "Guzel bir icki, yolculugun yorgunlugunu aldi.",
    "Ruhum canlandi, sanki daha enerjik hissediyorum.",
    "Kadehimi bitirdim, simdi biraz daha rahatladim ve yeni bir enerjiyle yoluma devam edebilirim."
};

char sarki_sozu[8][100] = {
    "Vay canina, bu sarki gercekten harikaydi! Sesin o kadar guzel ki, bir daha soyle!",
    "Guzel sarkiydi, cok begendim! Seninle birlikte icim acildi.",
    "Sesin, bu hanin havasina gercekten cok uydu. Sarkini duymak buyuk bir keyif!",
    "Sesin adeta bir melodiydi, dinlerken zamanin nasil gectigini anlamadim.",
    "Hanimizin en güzel sarkisini soyledin. Herkese moral verdin!",
    "Sarkin, bu soguk aksami sicak ve keyifli hale getirdi. Tesekkür ederim.",
    "Bir daha söylesen hic itiraz etmem. Sarkin ruhumu dinlendirdi!",
    "Su anda hala o sarkinin etkisindeyim. Gercekten dinlenmis hissettim."
};


void yemekYe(){
    int choice;
    srand(time(NULL));
    system("cls");

   for(int i=0 ; i == 0 ;){
    printf("---YEMEKLER---\n");
    printf("1 - Yahni => 20 ALTIN\n");
    printf("2 - Balik => 15 ALTIN\n");
    printf("3 - Pirinc => 10 ALTIN\n");
    printf("4 - Vazgec\n");

    printf("Ne yemek istersiniz : ");
    scanf("%d", &choice);

    if (choice == 1){
            system("cls");

        if(ALTIN - 20 < 0){
            printf("ALTIN degeri yetersiz! Islem gerceklestirilemez.\n");
            sleep(1);
            printf("Koy meydanina donuluyor...");
            sleep(1);
            showSkillsAndQualification();
            break;
        }

        setFeatureValueQuality(&TOK, TOK + 30);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 20);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 20);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 10);
        setFeatureValueQuality(&ALTIN, ALTIN - 20);
        int sayi = rand() % 9;
        printf("%s\n\n",han_yemek_yazi[sayi]);

        degerYazdir("ALTIN",-20,ALTIN);
        degerYazdir("SAGLIK",20,SAGLIK);
        degerYazdir("HIJYEN",10,HIJYEN);
        degerYazdir("MUTLULUK",20,MUTLULUK);
        degerYazdir("TOK",30,TOK);

        sleep(2);
        showSkillsAndQualification();
        break;

    }else if (choice == 2){
        system("cls");
            if(ALTIN - 15 < 0){
            printf("ALTIN degeri yetersiz! Islem gerceklestirilemez.\n");
            sleep(1);
            printf("Koy meydanina donuluyor...");
            sleep(1);
            showSkillsAndQualification();
            break;
        }

        setFeatureValueQuality(&TOK,TOK + 25);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 20);
        setFeatureValueQuality(&SAGLIK,SAGLIK + 15);
        setFeatureValueQuality(&HIJYEN,HIJYEN + 10);
        setFeatureValueQuality(&ALTIN,ALTIN - 15);
        int sayi = rand() % 9;
        printf("%s\n",han_yemek_yazi[sayi]);
        degerYazdir("ALTIN",(-15), ALTIN);
        degerYazdir("HIJYEN",10, HIJYEN);
        degerYazdir("SAGLIK",15, SAGLIK);
        degerYazdir("MUTLULUK",20, MUTLULUK);
        degerYazdir("TOK",25, TOK);
        sleep(1);
        showSkillsAndQualification();
        break;

    }else if (choice == 3){
        system("cls");
        if(ALTIN - 10 < 0){
            printf("ALTIN degeri yetersiz! Islem gerceklestirilemez.\n");
            sleep(1);
            printf("Koy meydanina donuluyor...");
            sleep(1);
            showSkillsAndQualification();
            break;
            }
        setFeatureValueQuality(&TOK, TOK + 25);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 20);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 15);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 10);
        setFeatureValueQuality(&ALTIN, ALTIN - 10);
        int sayi = rand() % 9;
        printf("%s\n",han_yemek_yazi[sayi]);
        degerYazdir("ALTIN",(-10), ALTIN);
        degerYazdir("HIJYEN",10, HIJYEN);
        degerYazdir("SAGLIK",15,SAGLIK);
        degerYazdir("MUTLULUK",20, MUTLULUK);
        degerYazdir("TOK",25, TOK);
        sleep(1);
        showSkillsAndQualification();
        break;

    }else if(choice == 4){
        system("cls");
        printf("Sonra gorusuruz.");
        sleep(1);
        hanciMenu();
        break;

    }else{
        printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRINIZ.\n");
        getchar();
        sleep(1);
        system("cls");
    }
  }
}

void icecekIc(){
    system("cls");
    int choice;

    for(int i = 0 ; i == 0;){

    printf("---ICECEKLER---\n");
    printf("1 - Sarap => 20 ALTIN\n");
    printf("2 - Ayran => 10 ALTIN\n");
    printf("3 - Su => 5 ALTIN\n");
    printf("4 - Vazgec\n");

    printf("Ne icmek istersiniz : ");
    scanf("%d", &choice);

    if (choice == 1){
        system("cls");

        if(ALTIN - 20 < 0){
            printf("ALTIN degeri yetersiz! Islem gerceklestirilemez.\n");
            sleep(1);
            printf("Koy meydanina donuluyor...");
            sleep(1);
            showSkillsAndQualification();
            break;
        }

        setFeatureValueQuality(&TOK, TOK + 20);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 20);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 10);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 10);
        setFeatureValueQuality(&ALTIN, ALTIN - 20);

        int sayi = rand() % 8 + 1;
        system("cls");

        printf("%s\n",han_icecek_yazi[sayi]);
        degerYazdir("ALTIN",(-20), ALTIN);
        degerYazdir("HIJYEN",10, HIJYEN);
        degerYazdir("SAGLIK",10,SAGLIK);
        degerYazdir("MUTLULUK",20, MUTLULUK);
        degerYazdir("TOK",20, TOK);
        sleep(1);
        showSkillsAndQualification();
        break;

    }else if (choice == 2){
        system("cls");
        if(ALTIN - 10 < 0){
            printf("ALTIN degeri yetersiz! Islem gerceklestirilemez.\n");
            sleep(1);
            printf("Koy meydanina donuluyor...");
            sleep(1);
            showSkillsAndQualification();
            break;
        }

        setFeatureValueQuality(&TOK, TOK + 15);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 20);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 10);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 10);
        setFeatureValueQuality(&ALTIN, ALTIN - 10);

        int sayi = rand() % 8 + 1;
        system("cls");

        printf("%s\n",han_icecek_yazi[sayi]);
        degerYazdir("ALTIN",-10, ALTIN);
        degerYazdir("HIJYEN",10, HIJYEN);
        degerYazdir("SAGLIK",10, SAGLIK);
        degerYazdir("MUTLULUK",20, MUTLULUK);
        degerYazdir("TOK",15,TOK);
        sleep(1);
        showSkillsAndQualification();
        break;

    }else if (choice == 3){
        system("cls");

        if(ALTIN - 5 < 0){
            printf("ALTIN degeri yetersiz! Islem gerceklestirilemez.\n");
            sleep(1);
            printf("Koy meydanina donuluyor...");
            sleep(1);
            showSkillsAndQualification();
            break;
        }

        setFeatureValueQuality(&TOK, TOK + 10);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 20);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 10);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 10);
        setFeatureValueQuality(&ALTIN, ALTIN - 5);

        system("cls");

        printf("Ohh. Su gibisi yok!");
        degerYazdir("ALTIN",(-5), ALTIN);
        degerYazdir("HIJYEN",10, HIJYEN);
        degerYazdir("SAGLIK",10, SAGLIK);
        degerYazdir("MUTLULUK",20, MUTLULUK);
        degerYazdir("TOK",10, TOK);
        sleep(1);
        showSkillsAndQualification();
        break;

    }else if(choice == 4){
        system("cls");
        printf("Sonra gorusuruz.");
        sleep(1);
        hanciMenu();
        break;

    }else{
        printf("HATALI GIRIS! LUTFEN GECERLI BIR DEGER GIRINIZ.\n");
        getchar();
        sleep(1);
        system("cls");
    }
  }
}

void enstrumanCal(){
    system("cls");

        if(TOK - 10 < 0){
        printf("TOK degeri yetersiz! Islem gerceklestirilemez.\n");
        sleep(1);
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();

        }else if(HIJYEN - 10 < 0){
        printf("HIJYEN degeri yetersiz! Islem gerceklestirilemez.\n");
        printf("Koy meydanina donuluyor...");
        sleep(1);
        showSkillsAndQualification();
        }

    setFeatureValueQuality(&PUAN, PUAN + 20);
    setFeatureValueQuality(&MUTLULUK, MUTLULUK + 20);
    setFeatureValueQuality(&ALTIN, ALTIN + 10 + (KARIZMA * (HIJYEN/100)));
    setFeatureValueQuality(&HIJYEN, HIJYEN - 10);
    setFeatureValueQuality(&TOK, TOK - 10);

    int sayi = rand() % 8 + 1;
    printf("%s\n",sarki_sozu[sayi]);

    degerYazdir("PUAN",20, PUAN);
    degerYazdir("MUTLULUK",20, MUTLULUK);
    degerYazdir("HIJYEN",(-10), HIJYEN);
    degerYazdir("TOK",(-10), TOK);

    printf("Koy meydanina donuluyor...");
    sleep(1);
    showSkillsAndQualification();
}

void hanciMenu(){
    system("cls");
    int choice;

    printf("---- HAN -----\n");
    printf("1 - Yiyecek satin al ve ye\n");
    printf("2 - Icecek satin al, ic ve eglen\n");
    printf("3 - Enstruman cal ve sarki soyle\n");
    printf("4 - Koy meydanina don\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if (choice == 1){
        system("cls");
        yemekYe();

    }else if (choice == 2){
        system("cls");
        icecekIc();

    }else if (choice == 3){
        system("cls");
        enstrumanCal();

    }else if (choice == 4){
        system("cls");
        printf("Koy meydanina donuluyor...\n");
        sleep(1);
        showSkillsAndQualification();
    }else{
        printf("HATALI GIRIS! GECERLI BIR DEGER GIRINIZ\n");
        getchar();
        sleep(1);
        hanciMenu();
    }
}


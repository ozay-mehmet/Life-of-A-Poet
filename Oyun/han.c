#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "features.h"
#include "han.h"
#include <time.h>

int choice;
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
    srand(time(NULL));
    printf("1 - Yahni\n");
    printf("2 - Balik\n");
    printf("3 - Pirinc\n");
    printf("Ne yemek istersiniz : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        setFeatureValueQuality(&TOK, TOK + 10);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 10);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 10);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 5);
        setFeatureValueQuality(&ALTIN, ALTIN - 5);
        int sayi = rand() % 9;
        printf("%s\n",han_yemek_yazi[sayi]);
    }
    else if (choice == 2){
        setFeatureValueQuality(&TOK, TOK + 15);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 10);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 13);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 8);
        setFeatureValueQuality(&ALTIN, ALTIN - 10);
        int sayi = rand() % 9;
        printf("%s\n",han_yemek_yazi[sayi]);
    }
    else if (choice == 3){
        setFeatureValueQuality(&TOK, TOK + 14);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 12);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 8);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 5);
        setFeatureValueQuality(&ALTIN, ALTIN - 5);
        int sayi = rand() % 9;
        printf("%s\n",han_yemek_yazi[sayi]);
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
        system("cls");
    }
}

void icecekIc(){
    printf("1 - Sarap\n");
    printf("2 - Ayran\n");
    printf("3 - Su\n");
    printf("Ne icecek istersiniz : ");
    scanf("%d", &choice);
    if (choice == 1){
        setFeatureValueQuality(&TOK, TOK + 10);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 10);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 5);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 5);
        setFeatureValueQuality(&ALTIN, ALTIN - 10);
        int sayi = rand() % 8 + 1;
        printf("%s\n",han_icecek_yazi[sayi]);
    }
    else if (choice == 2){
        setFeatureValueQuality(&TOK, TOK + 7);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 11);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 5);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 5);
        setFeatureValueQuality(&ALTIN, ALTIN - 3);
        int sayi = rand() % 8 + 1;
        printf("%s\n",han_icecek_yazi[sayi]);
    }
    else if (choice == 3){
        setFeatureValueQuality(&TOK, TOK + 4);
        setFeatureValueQuality(&MUTLULUK, MUTLULUK + 12);
        setFeatureValueQuality(&SAGLIK, SAGLIK + 5);
        setFeatureValueQuality(&HIJYEN, HIJYEN + 6);
        setFeatureValueQuality(&ALTIN, ALTIN - 3);
        int sayi = rand() % 8 + 1;
        printf("%s\n",han_icecek_yazi[sayi]);
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
        system("cls");
    }

}

void enstrumanCal(){
    setFeatureValueQuality(&PUAN, PUAN + 12);
    setFeatureValueQuality(&MUTLULUK, MUTLULUK + 10);
    setFeatureValueQuality(&ALTIN, ALTIN + 10 + (KARIZMA * (HIJYEN/100)));
    setFeatureValueQuality(&HIJYEN, HIJYEN - 5);
    setFeatureValueQuality(&TOK, TOK - 5);
    PUAN += 20;
    int sayi = rand() % 8 + 1;
    printf("%s\n",sarki_sozu[sayi]);
}

void hanciMenu(){
    printf("1 - Yiyecek satin al ve ye\n");
    printf("2 - Icecek satin al, ic ve eglen\n");
    printf("3 - Enstruman cal ve sarki soyle\n");
    printf("4 - Koy meydanina don\n");
    printf("Seciminizi yapiniz : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("cls");
        yemekYe();
    }
    else if (choice == 2){
        system("cls");
        icecekIc();
    }
    else if (choice == 3){
        system("cls");
        enstrumanCal();
    }
    else if (choice == 4){
        printf("Koy meydanina donuluyor...\n");
        system("cls");
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
        getchar();
        system("cls");
    }
}

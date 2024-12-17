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
    "Han sahibi cok misafirperverdi. Yemek gercekten mükemmeldi!",
    "Bu yemek tüm yorgunlugumu aldi. Hazirim, yoluma devam edebilirim!",
    "Yemek sonrasi rahatladim, biraz daha dinlenip yoluma cikacagim."
};

char han_icecek_yazi[8][100] = {
    "Icecegimi ictim ve rahatladim. Havadar bir nefes alip yola devam edebilirim.",
    "Bir kadeh icki beni tamamen gevşetti. Şimdi daha huzurluyum.",
    "İçki çok lezzetliydi, tüm yorgunlugum gitti.",
    "Biraz icki, biraz dinlenme... Kendimi yenilenmis hissediyorum.",
    "Kadehimi kaldirdim, ictim ve derin bir nefes aldim. Simdi her sey daha parlak gorunuyor.",
    "Güzel bir icki, yolculugun yorgunlugunu aldi.",
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
        setFeatureValue(&TOK, TOK + 30);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 20);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&ALTIN, ALTIN - 20);
        int sayi = rand() % 9;
        for (int i = 0; i < strlen(han_yemek_yazi[sayi]); i++){
            printf("%c", han_yemek_yazi[sayi][i]);
        }
    }
    else if (choice == 2){
        setFeatureValue(&TOK, TOK + 25);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 15);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&ALTIN, ALTIN - 15);
        int sayi = rand() % 9;
        for (int i = 0; i < strlen(han_yemek_yazi[sayi]); i++){
            printf("%c", han_yemek_yazi[sayi][i]);
        }
    }
    else if (choice == 3){
        setFeatureValue(&TOK, TOK + 25);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 15);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&ALTIN, ALTIN - 10);
        int sayi = rand() % 9;
        for (int i = 0; i < strlen(han_yemek_yazi[sayi]); i++){
            printf("%c", han_yemek_yazi[sayi][i]);
        }
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
}

void icecekIc(){
    printf("1 - Sarap\n");
    printf("2 - Ayran\n");
    printf("3 - Su\n");
    printf("Ne icecek istersiniz : ");
    scanf("%d", &choice);
    if (choice == 1){
        setFeatureValue(&TOK, TOK + 20);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 10);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&ALTIN, ALTIN - 20);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_icecek_yazi[sayi]); i++){
            printf("%c", han_icecek_yazi[sayi][i]);
        }
    }
    else if (choice == 2){
        setFeatureValue(&TOK, TOK + 15);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 10);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&ALTIN, ALTIN - 10);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_icecek_yazi[sayi]); i++){
            printf("%c", han_icecek_yazi[sayi][i]);
        }
    }
    else if (choice == 3){
        setFeatureValue(&TOK, TOK + 10);
        setFeatureValue(&MUTLULUK, MUTLULUK + 20);
        setFeatureValue(&SAGLIK, SAGLIK + 10);
        setFeatureValue(&HIJYEN, HIJYEN + 10);
        setFeatureValue(&ALTIN, ALTIN - 5);
        int sayi = rand() % 8 + 1;
        for (int i = 0; i < strlen(han_icecek_yazi[sayi]); i++){
            printf("%c", han_icecek_yazi[sayi][i]);
        }
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }

}

void enstrumanCal(){
    setFeatureValue(&MUTLULUK, MUTLULUK + 20);
    setFeatureValue(&ALTIN, ALTIN + 10 + (KARIZMA * (HIJYEN/100)));
    setFeatureValue(&HIJYEN, HIJYEN - 10);
    setFeatureValue(&TOK, TOK - 10);
    PUAN += 20;
    int sayi = rand() % 8 + 1;
    for (int i = 0; i < strlen(sarki_sozu[sayi]); i++){
        printf("%c", sarki_sozu[sayi][i]);
    }
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
        yemekYe();
    }
    else if (choice == 2){
        icecekIc();
    }
    else if (choice == 3){
        enstrumanCal();
    }
    else if (choice == 4){
        printf("Koy meydanina donuluyor...\n");
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
}

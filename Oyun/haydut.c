#include "haydut.h"
#include <stdlib.h>
#include <math.h>

int HAYDUT_CAN;
int HAYDUT_GUC;
int HAYDUT_CEVIKLIK;
int HAYDUT_DAYANIKLILIK;

void initialize_easy_haydut_features() {
    HAYDUT_GUC = rand() % 3 + 1;
    HAYDUT_CEVIKLIK = rand() % 3 + 1;
    HAYDUT_DAYANIKLILIK = rand() % 3 + 1;
}
void initialize_medium_haydut_features() {
    HAYDUT_GUC = rand() % 3 + 4;
    HAYDUT_CEVIKLIK = rand() % 3 + 4;
    HAYDUT_DAYANIKLILIK = rand() % 3 + 4;
}
void initialize_hard_haydut_features() {
    HAYDUT_GUC = rand() % 3 + 7;
    HAYDUT_CEVIKLIK = rand() % 3 + 7;
    HAYDUT_DAYANIKLILIK = rand() % 3 + 7;
}

char haydut_bilgi_yazi[9][200] = {
    "Haydutlar seni fark etti, hizli karar vermelisin!",
    "Etrafini kusattilar cikis yolu bul!",
    "Haydut lideri seni meydan okumaya cagiriyor!",
    "Bazi haydutlar seni izliyor tuzaklardan kacin!",
    "Carpismaya hazir ol, hicbir yere saklanamazsin!",
    "Haydutlar bagirislarla uzerinize geliyor. Kacis yok!",
    "Kacacak misin, dövüşecek misin yoksa biz karar mi verelim?",
    "Haydutlar cok kalabalik gorunuyor Dikkatli ol!",
    "Zaman daraliyor, kararini ver: Dovus ya da ol!"
};

char haydut_tehdit_yazi[8][200] = {
    "Bu zirh sana pek yakismis ama bizim ganimet sandigimizda daha guzel durur!",
    "Benim adamlarimi yenebilecegini mi sandin? Gercek kabus simdi basliyor!",
    "Bu bolge benim kontrolumde. Ne yapacagin tamamen bana bagli!",
    "Adamlarim seni parca parca ederken, ben altinlarini sayacagim!",
    "Senin gibi cesurlar genelde uzun yasamaz. Son bir sozun var mi?",
    "Bu topraklara adim atan herkes bizim kurallarimiza uyar. Ve sen gec kaldin!",
    "Simdi geri donme sansin yok. Kaderin benim ellerimde!",
    "Yoluna devam etmek istiyorsan, en iyisi hemen teslim ol!"
};

void showEasyHaydutFeature(){
    initialize_easy_haydut_features();
    printf("\nHaydut Guc : %d\n", HAYDUT_GUC);
    printf("Haydut Ceviklik : %d\n", HAYDUT_CEVIKLIK);
    printf("Haydut Dayaniklilik : %d\n", HAYDUT_DAYANIKLILIK);
}

void showMediumHaydutFeature(){
    initialize_medium_haydut_features();
    printf("\nHaydut Guc : %d\n", HAYDUT_GUC);
    printf("Haydut Ceviklik : %d\n", HAYDUT_CEVIKLIK);
    printf("Haydut Dayaniklilik : %d\n", HAYDUT_DAYANIKLILIK);
}

void showHardHaydutFeature(){
    initialize_hard_haydut_features();
    printf("\nHaydut Guc : %d\n", HAYDUT_GUC);
    printf("Haydut Ceviklik : %d\n", HAYDUT_CEVIKLIK);
    printf("Haydut Dayaniklilik : %d\n", HAYDUT_DAYANIKLILIK);
}

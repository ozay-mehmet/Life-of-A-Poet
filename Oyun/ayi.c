#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "features.h"

void ayiylaKarsilasma() {
    int secim;

    printf("Bir ayi karsina cikti! Ne yapmak istersiniz?\n");
    printf("1. Kacmaya calis\n");
    printf("2. Ayiya bagirarak korkutmaya calis\n");
    printf("3. Savas\n");
    printf("Seciminizi yapin (1-3): ");
    scanf("%d", &secim);

    switch (secim) {
        case 1: {
            int kacmaSans = rand() % 100;
            if (kacmaSans > 70){
                printf("Sansli gunundesin kasif, az daha olecektin !!!\n");
                setFeatureValueQuality(&SANS, SANS + 5);
                setFeatureValueQuality(&TOK, TOK - 5);
                setFeatureValueQuality(&UYKU, UYKU - 5);
                setFeatureValueSkills(&KARIZMA, KARIZMA - 2);
            }
            else{
                printf("Kacmaya calisirken ayi sizi yakaliyor ve yaralandin !!!\n");
                setFeatureValueQuality(&CAN, CAN - 5);
                setFeatureValueQuality(&TOK, TOK - 5);
                setFeatureValueQuality(&UYKU, UYKU - 5);
            }
            break;
        }
        case 2: {
            int korkutmaSans = rand() % 100;
            if (korkutmaSans > 50){
                printf("Bagirislariniz ayiyi korkutuyor ve kaciyor!\n");
            }
            else{
                printf("Ayi bagirislariniza aldiris etmiyor ve size saldiriyor!\n");
                printf("Yaralandiniz ama hayatta kaliyorsunuz.\n");
            }
            break;
        }
        case 3: {
            int savasSans = rand() % 100;
            if (savasSans < 30) {
                printf("Ayiyi yeniyorsunuz! Ancak biraz yaralandiniz.\n");
            } else {
                printf("Ayi cok guclu! Size saldiriyor ve agir yaralaniyorsunuz.\n");
            }
            break;
        }
        default:
            printf("Gecersiz bir secim yaptiniz. Tekrar deneyiniz\n");
            getchar();
            system("cls");

            break;
    }
}

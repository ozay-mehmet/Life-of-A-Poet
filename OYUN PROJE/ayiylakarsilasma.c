#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ayiylaKarsilasma() {
    int secim;

    printf("Bir ay� kar��na ��kt�! Ne yapmak istersiniz?\n");
    printf("1. Ka�maya �al��\n");
    printf("2. Ay�ya ba��rarak korkutmaya �al��\n");
    printf("3. Sava�\n");
    printf("Se�iminizi yap�n (1-3): ");
    scanf("%d", &secim);

    switch (secim) {
        case 1: {
            int kacmaSans = rand() % 100;
            if (kacmaSans < 70) { // %70 ka�ma �ans�
                printf("Ko�arak ay�dan uzakla��yorsunuz ve kurtuluyorsunuz!\n");
            } else {
                printf("Ka�maya �al���rken ay� sizi yakal�yor ve sald�r�yor!\n");
                printf("Yaraland�n�z ama hayatta kal�yorsunuz.\n");
            }
            break;
        }
        case 2: {
            int korkutmaSans = rand() % 100;
            if (korkutmaSans < 50) { // %50 korkutma �ans�
                printf("Ba��r��lar�n�z ay�y� korkutuyor ve ka��yor!\n");
            } else {
                printf("Ay� ba��r��lar�n�za ald�r�� etmiyor ve size sald�r�yor!\n");
                printf("Yaraland�n�z ama hayatta kal�yorsunuz.\n");
            }
            break;
        }
        case 3: {
            int savasSans = rand() % 100;
            if (savasSans < 30) { // %30 kazanma �ans�
                printf("Ay�y� yeniyorsunuz! Ancak biraz yaraland�n�z.\n");
            } else {
                printf("Ay� �ok g��l�! Size sald�r�yor ve a��r yaralan�yorsunuz.\n");
            }
            break;
        }
        default:
            printf("Ge�ersiz bir se�im yapt�n�z. Ay� sizi fark ediyor ve sald�r�yor!\n");
            printf("Yaraland�n�z ama hayatta kal�yorsunuz.\n");
            getchar();

            break;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ayiylaKarsilasma() {
    int secim;

    printf("Bir ayý karþýna çýktý! Ne yapmak istersiniz?\n");
    printf("1. Kaçmaya çalýþ\n");
    printf("2. Ayýya baðýrarak korkutmaya çalýþ\n");
    printf("3. Savaþ\n");
    printf("Seçiminizi yapýn (1-3): ");
    scanf("%d", &secim);

    switch (secim) {
        case 1: {
            int kacmaSans = rand() % 100;
            if (kacmaSans < 70) { // %70 kaçma þansý
                printf("Koþarak ayýdan uzaklaþýyorsunuz ve kurtuluyorsunuz!\n");
            } else {
                printf("Kaçmaya çalýþýrken ayý sizi yakalýyor ve saldýrýyor!\n");
                printf("Yaralandýnýz ama hayatta kalýyorsunuz.\n");
            }
            break;
        }
        case 2: {
            int korkutmaSans = rand() % 100;
            if (korkutmaSans < 50) { // %50 korkutma þansý
                printf("Baðýrýþlarýnýz ayýyý korkutuyor ve kaçýyor!\n");
            } else {
                printf("Ayý baðýrýþlarýnýza aldýrýþ etmiyor ve size saldýrýyor!\n");
                printf("Yaralandýnýz ama hayatta kalýyorsunuz.\n");
            }
            break;
        }
        case 3: {
            int savasSans = rand() % 100;
            if (savasSans < 30) { // %30 kazanma þansý
                printf("Ayýyý yeniyorsunuz! Ancak biraz yaralandýnýz.\n");
            } else {
                printf("Ayý çok güçlü! Size saldýrýyor ve aðýr yaralanýyorsunuz.\n");
            }
            break;
        }
        default:
            printf("Geçersiz bir seçim yaptýnýz. Ayý sizi fark ediyor ve saldýrýyor!\n");
            printf("Yaralandýnýz ama hayatta kalýyorsunuz.\n");
            getchar();

            break;
    }
}

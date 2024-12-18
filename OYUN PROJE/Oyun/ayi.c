#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void ayiylaKarsilasma() {
    int secim;
    srand(time(NULL));

    printf("Bir ayı karşına çıktı! Ne yapmak istersiniz?\n");
    printf("1. Kaçmaya çalış\n");
    printf("2. Ayıya bağırarak korkutmaya çalış\n");
    printf("3. Savaş\n");
    printf("Seçiminizi yapın: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1: {
            int kacmaSans = rand() % 100;
            if (kacmaSans < 70) {
                printf("Koşarak ayıdan uzaklaşıyorsunuz ve kurtuluyorsunuz!\n");
            } else {
                printf("Kaçmaya çalışırken ayı sizi yakalıyor ve saldırıyor!\n");
                printf("Yaralandınız ama hayatta kalıyorsunuz.\n");
            }
            break;
        }
        case 2: {
            int korkutmaSans = rand() % 100;
            if (korkutmaSans < 50) {
                printf("Bağırışlarınız ayıyı korkutuyor ve kaçıyor!\n");
            } else {
                printf("Ayı bağırışlarınıza aldırış etmiyor ve size saldırıyor!\n");
                printf("Yaralandınız ama hayatta kalıyorsunuz.\n");
            }
            break;
        }
        case 3: {
            int savasSans = rand() % 100;
            if (savasSans < 30) {
                printf("Ayıyı yeniyorsunuz! Ancak biraz yaralandınız.\n");
            } else {
                printf("Ayı çok güçlü! Size saldırıyor ve ağır yaralanıyorsunuz.\n");
            }
            break;
        }
        default:
            printf("Geçersiz bir seçim yaptınız. Ayı sizi fark ediyor ve saldırıyor!\n");
            printf("Yaralandınız ama hayatta kalıyorsunuz.\n");
            getchar();

            break;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "yoldas.h"

void yoldasMenu(int level)
{
    char temp;
    int choice;

        if(level == 1){
            printf("Yoldaslar:\n");
            printf("> %s\n", hayvan[level-1]);
            printf("1 - Yoldas edin\n2 - Ana menüye don.\n");

            printf("Seçiminizi yapýn:");
            while (1) {
            getchar();
            temp = getchar();

                if (temp == '1') {

                    while (1) {
                    printf("YOLDASLAR:\n1 - %s\n\n2 - Menu(Yoldaslar)", hayvan[level-1]);
                    getchar();
                    temp = getchar();

                        if (temp == '1') {
                            mevcutHayvan = (char *)hayvan[level - 1];
                            printf("Mevcut yoldaþýnýz: %s\n", mevcutHayvan);
                            break;
                        } else if (temp == '2') {
                          break;
                        } else {
                        printf("Hatalý giriþ. Lütfen gecerli bir deger giriniz.\n");
                        }
                    }
                        break;
                } else if (temp == '2') {
                    break;
                } else {
                printf("Hatalý giriþ. Lütfen 1 veya 2 giriniz.\n");
                }
                break;
            }
    }

}

#include <stdio.h>
#include <unistd.h>  // sleep() fonksiyonu için gerekli


void yazdir_hikaye(const char *metin) {
    int i = 0;
    while (metin[i] != '\0') {
        putchar(metin[i]);
        fflush(stdout);
        usleep(30500);
        i++;
    }
}

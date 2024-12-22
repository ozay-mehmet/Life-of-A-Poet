#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "han.h"

void degerYazdir(char *name , int op, int value){

    if(strcmp(name, "SANS") != 0){
    sleep(1);
    printf("%s + (%d) = %d\n",name,op,value);
}
    else{
    sleep(1);
    printf("%s + (%d) = %.2f\n",name,op,(float)value);
    }
}


#include <stdio.h>
#include <stdlib.h>

int choice;
void kampMenu(){

    printf("1 - Kamp atesinin basinda calgi cal/sarki söyle\n");
    printf("2 - Nehirde yikan\n");
    printf("3 - Cadirda uyu\n");
    printf("4 - Koy meydanina don.\n\n");

    printf("Seciminizi yapiniz:");
    scanf("%d",&choice);

    if(choice == 1){
        sarkiSoyle();
    }
    else if(choice == 2){
        nehirdeYikan();
    }
    else if(choice == 3){
        cadirdaUyu();
    }
    else if(choice == 4){
        printf("Koy meydanina donuluyor...");
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
}

void sarkiSoyle(){
    int song;
    printf("1 - Bu aksam (+5)\n2 - Aman aman (+10)\n3 - Senden daha guzel(+15)\n4 - Vazgec\n");
    printf("Ne söyleyelim!\n");
    scanf("%d",&song);

  for(int i=0 ; i==0 ;){
    if(choice == 1){
       printf("Bu aksam... harika secim.\n Oynatiliyor...\n");
       i = 1;
    }
    else if(song == 2){
        printf("Aman aman... biraz üzgünüz galiba.\n Oynatiliyor...\n");
        i = 1;
    }
    else if(song == 3){
        printf("Senden daha guzel... Ayy, teþekkürlerr.\n Oynatiliyor...\n");
        i = 1;
    }
    else if(song == 4){
        printf("Çok sikicisin(!)\n");
        i = 1;
    }
    else{
        printf("Yanlis secim yaptiniz. Lutfen tekrar deneyiniz.\n");
    }
  }
}

void nehirdeYikan(){
    printf("Haydi temizlenelim!\n...\n");
}

void cadirdaUyu(){
    printf("Uyku vakti!\n...\n");
}

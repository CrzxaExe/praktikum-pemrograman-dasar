#include <stdio.h>

void main () {
    int angka;

    printf("Masukan sebuah bilangan: ");
    scanf("%d", &angka);

   switch ((angka > 0) - (angka < 0)) {
    case 0:
        printf("Bilangan tersebut adalah nol\n");
        break;
    case -1:
        printf("Bilangan %d adalah bilangan negatif\n",angka);
        break;
    case 1:
        printf("Bilangan %d adalah bilangan positif\n",angka);
        break;
   }
}
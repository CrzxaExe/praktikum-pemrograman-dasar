#include <stdio.h>


float angka, hasil;
int pengali;

void main () {
    printf("MAsukan angka ");

    scanf("%f", &angka);
    printf("Masukan pengali ");

    scanf("%d", &pengali);

    hasil = pengali * angka;

    printf("%f",hasil);
}
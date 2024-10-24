#include <stdio.h>

void printFactorial(int base,  int result) {
    printf("Hasil faktorial dari %d adalah %d ", base, result);
}

int factorial(int num) {
    if(num < 1) return 1;
    return num * factorial(num - 1);
}

int main () {
    int angka, hasil;

    printf("Masukan angka: ");
    scanf("%d", &angka);

    hasil = factorial(angka);

    printFactorial(angka, hasil);

    return 0;
}
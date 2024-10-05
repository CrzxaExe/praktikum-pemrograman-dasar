#include <stdio.h>

void main () {
    int temp, sisa;

    printf("Masukan bilangan: ");
    scanf("%d", &temp);

    sisa = (temp%2);

    printf("%d dibagi 2 tersisa %d\n", temp, sisa);
}
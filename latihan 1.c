#include <stdio.h>

void main() {
    int nilai;
    char hasil;

    printf("Masukan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 85) {
        hasil = 'A';
    } else if (nilai < 85 && nilai >= 70) {
        hasil = 'B';
    } else if (nilai < 70 && nilai >= 50) {
        hasil = 'C';
    } else {
        hasil = 'D';
    }

    printf("Hasil: %c", hasil);
}
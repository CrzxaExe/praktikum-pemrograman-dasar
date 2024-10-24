#include <stdio.h>

void average(int arr[], int panjangArr) {
    float hasil;

    for(int i = 0; i < panjangArr; i++) hasil += arr[i];

    hasil /= panjangArr;

    printf("Rata-rata: %f", hasil);
}

int main() {
    int angka[10];

    for(int i = 0; i<10; i++) {
        printf("Masukan angka ke %d: ", i+1);
        scanf("%d", &angka[i]);
    }

    average(angka, sizeof(angka) / sizeof(angka[0]));

    return 0;
}

#include <stdio.h>

int findMin(int array[], int size) {
    int min = array[0];

    for(int i = 0; i<=size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

void main() {
    int arr[10];

    for (int i = 0; i<10; i++) {
        printf("Masukan angka ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Angka terkecil adalah %d", findMin(arr, size));
}
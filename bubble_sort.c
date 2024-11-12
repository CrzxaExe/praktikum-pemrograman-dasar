#include <stdio.h>

void printArray(int arr[], int size) {
    for(int i = 0; i<size-1; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void bubbleSort(int (*arr)[], int size) {
    int its = 1;

    printf("|-----------------------------------------------------------------------------------------------------------|\n");
    printf("| iterasi |  i  | switch | before              | hold | after             | hasil                           |\n");
    printf("|         |     |        |  j  | a[j] | a[j+1] |      |  a[j]  |  a[j+1]  |                                 |\n");

    for(int i = 0; i<=size; i++) {
        for(int j = 0; j<=size-i-1; j++) {
            printf("|      %2d | %3d |        |  j  | a[j] | a[j+1] |      |  a[j]  |  a[j+1]  |                                 |\n", its, i);
            its += 1;
            if((*arr)[j] < (*arr)[j+1]) continue;

            int t = (*arr)[j];
            (*arr)[j] = (*arr)[j+1];
            (*arr)[j+1] = t;
        }
    }
}

void main() {
    int arr[7] = {
        7,2,4,6,1,4,5
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);

    bubbleSort(&arr, size);

    printArray(arr, size);
}
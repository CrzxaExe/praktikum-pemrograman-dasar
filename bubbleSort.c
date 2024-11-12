#include <stdio.h> 

void bubble_sort(int a[], int size); // Prototype

int main(void) { 
    int arr[10] = {10, 2, 4, 1, 6, 5, 8, 7, 3, 9}; // Array acak
    int i = 0; 

    printf("before:\n"); 
    for(i = 0; i < 10; i++) printf("%d ", arr[i]); // Menampilkan array sebelum di urutkan
        printf("\n"); 

    bubble_sort(arr, 10); // Memanggil prosedur bubble_sort

    printf("\nafter:\n"); 
        for(i = 0; i < 10; i++) printf("%d ", arr[i]); // Menampilkan array sesudah di urutkan
    printf("\n"); 

    return 0; 
}

void printArr(int a[], int size) {
    for (int i = 0; i<=size; i++)
        printf("%2d ", a[i]);
}

void bubble_sort(int a[], int size) { 
    int switched = 1; 
    int hold = 0; // Variable penampung nilai sementara
    int i = 0; 
    int j = 0; 

    int its = 1;

    size -= 1; // Ukuran array dikurangi 1

    printf("|-----------------------------------------------------------------------------------------------------------|\n");
    printf("|         |     |        | before              |      | after             | hasil                           |\n");
    printf("| iterasi |  i  | switch |---------------------| hold |-------------------|---------------------------------|\n");
    printf("|         |     |        |  j  | a[j] | a[j+1] |      |  a[j]  |  a[j+1]  |  ");
    printArr(a, size);
    printf(" |\n");
    printf("|---------|-----|--------|-----|------|--------|------|--------|----------|---------------------------------|\n");

    for(i = 0; i < size && switched; i++) {
        /*
        *  Iterasi pertama
        *  iterasi akan berhenti jika nilai var i >= nilai var size dan var switched bernilai 1
        */
        switched = 0;
        for(j = 0; j < size - i; j++) {
            /*
            *  Iterasi kedua
            *  iterasi akan berhenti jika nilai var j >= nilai var size - 1
            */
            printf("|      %2d | %3d |    %3d | %3d | %4d |  %5d |  %3d | ", its, i, switched, j, a[j], a[j+1], hold);

            if(a[j] > a[j+1]) {
                // Jika a[j] > a[j + 1], maka:
                switched = 1; // Var switched akan bernilai 1
                hold = a[j]; // Var hold akan menampung array iterasi j (a[j])

                a[j] = a[j + 1]; // a[j] akan diisi dari nilai iterasi selanjutnya
                a[j + 1] = hold; // array iterasi selanjutnya atau a[j+1] akan diisi oleh nilai var hold
            }

            printf(" %4d  |  %6d  |  ", a[j], a[j+1]);
            printArr(a,size);
            printf(" |\n");
            its += 1;
        }
    } 
    printf("|-----------------------------------------------------------------------------------------------------------|\n");
}
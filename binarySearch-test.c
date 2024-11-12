#include <stdio.h> 

#define TRUE  0 
#define FALSE 1 

int main(void) { 
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // array yang sudah terurut
    int left = 0;
    int right = 10; 
    int middle = 0; 
    int number = 0; // variable untuk menampung angka yang akan dicari
    int bsearch = FALSE; 
    int i = 0; // iterasi

    int its = 0;

    printf("ARRAY: "); 
    for(i = 1; i <= 10; i++) // Menampilkan array per elemen
        printf("[%d] ", i); 

    printf("\nNomor yang akan dicari: ");
    scanf("%d", &number); // Input nilai number

    printf("|-------------------------------------------------------------------------|\n");
    printf("| iterasi | left | right | middle | number |  array[middle] =>  | bsearch |\n");
    printf("|         |      |       |        |        | array index middle |         |\n");
    printf("|---------|------|-------|--------|--------|--------------------|---------|\n");
    printf("|    %3d  |  %2d  |   %2d  |   %3d  |   %3d  |        %4d        |  ", its, left, right, middle, number, array[middle]);
    puts(bsearch == TRUE ? "TRUE   |" : "FALSE  |");

    its += 1;

    /*
    *  Memulai program iterasi
    *  iterasi akan berhenti jika variable bsearch bernilai True dan nilai var left lebih besar dari pada var right
    */
    while(bsearch == FALSE && left <= right) { 
        middle = (left + right) / 2; 
        // Mengambil index tengah dari penjumlahan antara variable left dan right lalu dibagi 2

        printf("|    %3d  |  %2d  |   %2d  |   %3d  |   %3d  |        %4d        |  ", its, left, right, middle, number, array[middle]);

        if(number == array[middle]) { // Mengecek apakah angka yang di input sama dengan array[middle]

            // Jika sama maka variable bsearch akan di ubah menjadi true dan akan menampilkan output "** Ketemu  **\n"
            bsearch = TRUE; 
            // printf("** Ketemu  **\n"); 
        } else { // Jika array[middle] tidak sama dengan angka maka block code ini akan dijalankan

            // Jika var number kurang dari array[middle] maka nilai var right = middle - 1
            if(number < array[middle]) right = middle - 1;

            // Sebaliknya jika var number lebih besar dari array[middle] maka var left = middle + 1
            if(number > array[middle]) left = middle + 1; 
        } 

        puts(bsearch == TRUE ? "TRUE   |" : "FALSE  |");

        its += 1;
    } 

    printf("|-------------------------------------------------------------------------|\n");

    if(bsearch == FALSE)
        /*
        *  Jika tidak dapat menemukan angka yang dicari maka akan mengeluarkan output "-- Nomor Tidak ditemukan --\n"
        */
        printf("-- Nomor Tidak ditemukan --\n");

    return 0; 
}
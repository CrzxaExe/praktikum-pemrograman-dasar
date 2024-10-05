#include <stdio.h>

void main () {
    int temp;
    float celcius;

    printf("masukan temperatur:");
    scanf("%d", &temp);

    celcius = (5.0/9.0) * (temp - 32);

    printf("%d derajat F adalah %f celcius\n", temp, celcius);
}
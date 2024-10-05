#include <stdio.h>

void main() {
    int max, total;

    printf("input : ");
    scanf("%d", &max);

    for (int i = 0; i<=max; i++) {
        total += i;
    }
    printf("total : %d", total);
}
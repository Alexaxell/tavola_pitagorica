#include <stdio.h>

int main() {
    int i, j;
    printf("\n");
    for (i = 1; i <= 12; i++) {
        for (j = 1; j <= 12; j++) {
            printf("%4d |", i * j);
        }
        printf("\n");
    }

    return 0;
}


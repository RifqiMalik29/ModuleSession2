#include <stdio.h>

void tigaTerbesar(int a, int b, int c) {
    if (a >= b && a >= c) {
        printf("%d adalah angka terbesar.\n", a);
        if (b >= c) {
            printf("%d adalah angka kedua terbesar.\n", b);
            printf("%d adalah angka ketiga terbesar.\n", c);
        } else {
            printf("%d adalah angka kedua terbesar.\n", c);
            printf("%d adalah angka ketiga terbesar.\n", b);
        }
    } else if (b >= a && b >= c) {
        printf("%d adalah angka terbesar.\n", b);
        if (a >= c) {
            printf("%d adalah angka kedua terbesar.\n", a);
            printf("%d adalah angka ketiga terbesar.\n", c);
        } else {
            printf("%d adalah angka kedua terbesar.\n", c);
            printf("%d adalah angka ketiga terbesar.\n", a);
        }
    } else {
        printf("%d adalah angka terbesar.\n", c);
        if (a >= b) {
            printf("%d adalah angka kedua terbesar.\n", a);
            printf("%d adalah angka ketiga terbesar.\n", b);
        } else {
            printf("%d adalah angka kedua terbesar.\n", b);
            printf("%d adalah angka ketiga terbesar.\n", a);
        }
    }
}

int main() {
    int x, y, z;
    printf("Masukkan tiga angka: ");
    scanf("%d %d %d", &x, &y, &z);

    tigaTerbesar(x, y, z);

    return 0;
}

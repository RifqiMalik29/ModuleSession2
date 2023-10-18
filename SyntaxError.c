#include <stdio.h>

int main() {
    int n = 1;

    switch (n)
    {
    case 1:
        printf("The number is 1\n");
        // Error ada disini, tidak ada break yang akan menyebabkan case dibawahnya ikut dijalankan
        break;
    case 2:
        printf("The number 2\n");
        break;
    default:
        printf("The number is not 1 or 2\n");
        break;
    }

    return 0;
}
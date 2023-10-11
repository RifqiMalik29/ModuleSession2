#include <stdio.h>

int main () {
    double fahrenheit;
    scanf("%lf", &fahrenheit);

    double converter = ((fahrenheit - 32) * 5) / 9;
    printf("Fahrenheit : %.2lf\n", converter);

    return 0;
}
#include <stdio.h>

int main () {
    int valueOne, valueTwo;
    scanf("%d %d", &valueOne, &valueTwo);

    int sum = valueOne + valueTwo;
    int product = valueOne * valueTwo;
    int quotient = valueOne / valueTwo;
    int difference = valueOne - valueTwo;
    int remainder = valueOne % valueTwo;

    printf("Sum : %d\nProduct : %d\nQuotient : %d\nDifference : %d\nRemainder : %d", sum, product, quotient, difference, remainder);

    return 0;
}
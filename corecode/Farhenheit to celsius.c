#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Celsius\n",celsius);

    return 0;
}

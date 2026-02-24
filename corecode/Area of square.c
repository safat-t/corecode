#include <stdio.h>

int main() {
    float length, area;

    printf("Enter the length: ");
    scanf("%f", &length);

    area = length * length;

    printf("area of the square is: %.2f\n", area);

    return 0;
}

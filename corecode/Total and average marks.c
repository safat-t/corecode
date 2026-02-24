#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, average;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

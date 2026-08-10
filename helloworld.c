#include <stdio.h>
int main()
{
    int decimal = 0;

    printf("Binary number: 00101101\n\n");

    printf("128: 0\n");
    printf("64:  0\n");
    printf("32:  1\n");
    printf("16:  0\n");
    printf("8:   1\n");
    printf("4:   1\n");
    printf("2:   0\n");
    printf("1:   1\n\n");

    decimal = 32 + 8 + 4 + 1;

    printf("Calculation: 32 + 8 + 4 + 1\n");
    printf("Decimal: %d\n", decimal);

    return 0;
}
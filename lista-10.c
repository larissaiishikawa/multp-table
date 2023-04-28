// Multiplication Table

#include <stdio.h>

int main() {
    // Variable declaration
    int num; // Number imput variable
    int res; // Result variable
    int aux; // Auxiliary variable

    // Data input
    printf("-------------------------------------------------\n");
    printf("\nMULTIPLICATION TABLE!\n");
    printf("Type a number to get its multiplication table: ");
    scanf("%d", &num);
    printf("\n-------------------------------------------------\n");

    // Processing and Data output
    aux = 0;
    printf("\nMultiplication table of the number %d\n\n", num);
    while (aux < 10) {
        aux++;
        res = num * aux;
        printf("%d x %d = %d\n", num, aux, res);
    }
    printf("\n-------------------------------------------------\n");
}
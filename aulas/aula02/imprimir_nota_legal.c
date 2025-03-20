#include <stdio.h>

int main() {
    printf("-----------------------------------\n");
    printf("         N O T A   L E G A L       \n");
    printf("-----------------------------------\n");
    printf("Item        Qntd      Pcr     Valor\n");
    printf("%-12s %03i %9.2f %8.2f\n", "caneta azul", 2, 2.0, 4.0);
    printf("%-12s %03i %9.2f %8.2f\n","Borracha", 1, 5.0, 5.0 );
    printf("%-12s %03i %9.2f %6.2f\n", "Resma de papel", 1, 10);
    printf("-----------------------------------\n");
    printf("                      TOTAL: R$ %3.2f\n", 19.00);


    return 0;
}
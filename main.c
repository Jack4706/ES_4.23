#include <stdio.h>
#include <math.h>

int main() {
    double Y;
    int X = 1;

    printf("Inserisci un numero reale positivo Y:\n ");
    scanf("%lf", &Y);

    while (pow(X, X) < Y) {
        X++;
    }

    printf("Il massimo numero intero positivo X tale che X^X < Y e': %d\n", X - 1);
    return 0;
}

#include <stdio.h>
int main () {
    float V, T,P;
    printf("digite o volume: ");
    scanf("%f", &V);

    printf("digite a pressao: ");
    scanf("%f", &P);

    printf("digite a temperatura: ");
    scanf("%f", &T);

    printf ( "A massa eh: %f", (P * V)/(T+460)*0.37 );

    return 0;
}

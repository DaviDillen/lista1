#include <stdio.h>
#include <math.h>
int main () {
    //declaração de variáveis
    float altura, largura;
    //entrada de dados
    printf("digite a altura em ml: ");
    scanf ( "%f" , &altura );
    printf("digite a largura em ml: ");
    scanf ( "%f" , &largura );
    //processamento
    float quantidade_de_tinta = largura * altura * 300;
    float latas = ceil(quantidade_de_tinta / 2000);
    //saída de dados
    printf("%.2f", latas);

    return 0;
}

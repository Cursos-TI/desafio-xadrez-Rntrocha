#include <stdio.h>

int main()
{

    // criando as variaveis para o jogo
    int bispo = 1;
    int torre = 1;
    int rainha = 1;

    printf("MOVENDO A PEÇA BISPO: \n"); // imprimindo informação do que irei realizar

    // mover o bispo 5 casas na diagonal superior direita
    for (; bispo <= 5; bispo++)
    {
        printf(" Bispo para Direita !\n"); // imprimindo a primeira direção do bispo
        printf(" Bispo para Cima !\n");    // imprimindo a segunda direção do bispo
    }

    printf("MOVENDO A PEÇA TORRE: \n"); // imprimindo informação do que irei realizar

    // mover a torre 5 casas para direita
    while (torre <= 5)
    {
        printf("Torre para Direita! \n"); // imprimindo o movimento da torre
        torre++;
    }

    // movendo a rainha 8 casas para esquerda
    printf("MOVENDO A PEÇA RAINHA: \n"); // imprimindo informação do que irei realizar
    do
    {
        printf("Rainha para Esquerda! \n"); // imprimindo o primeiro movimento da rainha
        rainha++;
    } while (rainha <= 7);
    printf("Rainha para esquerda! \n"); // imprimindo o Ssegundo movimento da rainha

    return 0;
}

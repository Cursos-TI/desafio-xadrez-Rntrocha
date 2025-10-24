#include <stdio.h>

void movimentoTorre(int casas) // criando a função para mover a torre
{
    if (casas > 0)
    {
        printf("Torre - Direita \n"); // printando o movimento
        movimentoTorre(casas - 1);    // decrementando o movimento
    }
}

void movimentoRainha(int casasR)
{
    if (casasR > 0)
    {
        printf("Rainha - Esquerda \n");
        movimentoRainha(casasR - 1);
    }
}

void movimentoBispo(int casasB)
{

    if (casasB == 0)
        return;

    for (int i = 0; i < 1; i++) // movimento horizontal
    {
        printf("Direita \n");

        for (int j = 0; j < 1; j++) // movimento vertical
        {
            printf("Cima \n");
        }
        movimentoBispo(casasB - 1);
    }
}
int main()
{
    movimentoTorre(5); // definindo a qtdd de movimentos para torre

    movimentoRainha(8);

    movimentoBispo(5);

    int cavalo = 1;

    while (cavalo--) // decrementada (--) para executar somente uma vez, código externo
    {
        for (int i = 0; i < 2; i++) // excutando dois movimentos para cima
        {
            printf("Cavalo para Cima ! \n"); // imprime 'cima' duas vezes
        }
        printf("Cavalo para direita! \n"); // imprime 'direita' uma vez
    }

    return 0;
}

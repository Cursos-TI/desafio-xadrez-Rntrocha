#include <stdio.h>

int main()
{

    // criando as variaveis para o jogo
    int bispo = 1;
    int torre = 1;
    int rainha = 1;
    int cavalo = 1;

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

    int escolha;
    printf("Agora é a vez de mover o Cavalo !\n");
    printf("Diga qual movimento você quer :\n");
    printf("1.Direita:\n");
    printf("2.Esquerda:\n");
    printf("3.Cima:\n");
    printf("Digite 1, 2 ou 3\n");
    scanf("%d", &escolha);
    // Movendo a peça cavalo em L
    switch (escolha)
    {
    case 1:
        printf("O cavalo não pode se mover para direita! \n");
        break;
    case 2:
        printf("O cavalo não pode se mover para esquerda! \n");
        break;
    case 3:
        while (cavalo--) // decrementada (--) para executar somente uma vez, código externo
        {
            for (int i = 0; i < 2; i++) // excutando dois movimentos para cima
            {
                printf("Cavalo para Cima ! \n"); // imprime 'cima' duas vezes
            }
            printf("Cavalo para direita! \n"); // imprime 'direita' uma vez
        }

    default:
        printf("Opção inválida, digite 1,2 ou 3 para selecionar o movimento !!! \n");
        break;
    }

    return 0;
}

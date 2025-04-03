#include <stdio.h>

int main() {
    int peca, dama = 8, torre = 5;

    printf("Qual peça voce quer mover?\n Dama 1\n Torre 2\n Bispo 3\n");
    scanf("%i", &peca);
    switch (peca)
    {
    case 1:
        while (dama > 0)
        {
            printf("Esquerda...\n");
            dama--;
        }
        printf("Sua dama se moveu oito vezes para esquerda.");

        break;
    case 2:
        do
        {
            printf("Direita...\n");
            torre--;
        } while (torre > 0);

        printf("Sua torre se moveu cinco vezes para direita.");

        break;
    case 3:
        for (int bispo = 5; bispo > 0; bispo--)
        {
            printf("Direita..Cima...\n");
        }

        printf("Seu bispo se moveu seis vezes para direita e para cima.");

        break;
    default:
        printf("Numero de peça errado.");
        break;
    }
    return 0;
}

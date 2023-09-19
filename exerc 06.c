#include <stdio.h>

int main()
{
    int opcao;
    float total = 0.0;

    /* Elabore um algoritmo que permita ao usuário realizar a compra de frutas.
    Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores.
    O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas.
    Ao final, apresente o valor total da compra.

    1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade */

    do
    {
        printf("--------------Menu de Frutas--------------");
        printf("\nFRUTAS \t\t\t 1- Abacaxi - 5,00 a unidade \n\t\t\t 2- Maça - 1,00 a unidade \n\t\t\t 3- Pera - 4,00 a unidade \n\t\t\t 0- Encerrar compra");

        printf("\nEscolha uma opçao:");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            int quantidade;
            printf("Informe a quantidade de ABACAXI: ");
            scanf("%d", &quantidade);
            total += quantidade * 5.0;
            break;
        }
        case 2:
        {
            int quantidade;
            printf("Informe a quantidade de MAÇA: ");
            scanf("%d", &quantidade);
            total += quantidade * 1.0;
            break;
        }
        case 3:
        {
            int quantidade;
            printf("Informe a quantidade de PERA: ");
            scanf("%d", &quantidade);
            total += quantidade * 4.0;
            break;
        }
        case 0:
            printf("Encerrando compra.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    }while (opcao != 0);
    printf("Total da compra: R$%.2f\n", total);
}

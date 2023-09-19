#include<stdio.h>

int main(){

    char sexo, corOlhos, corCabelos;
    int idade;
    float salario;
    int totalHabitantes = 0;
    int mulheresComCaracteristicas = 0;

    printf("Informe os dados dos habitantes da região:\n");

    while (1) {
        printf("Habitante %d:\n", totalHabitantes + 1);

        // Coleta dos dados do habitante
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        if (sexo == 'm' || sexo == 'f') {
            // Coleta dos dados restantes
            printf("Cor dos olhos (a/v/c/p): ");
            scanf(" %c", &corOlhos);
            printf("Cor dos cabelos (l/c/p/r): ");
            scanf(" %c", &corCabelos);
            printf("Idade em anos: ");
            scanf("%d", &idade);
            printf("Valor do salário: ");
            scanf("%f", &salario);

            // Verifica se os dados são válidos
            if ((corOlhos == 'c') && (corCabelos == 'c') && (idade >= 18 && idade <= 35) && (sexo == 'f') && (salario >= 0)) {
                mulheresComCaracteristicas++;
            }

            // Verifica se idade é -1 para encerrar a pesquisa
            if (idade == -1) {
                break;
            }
        } else {
            printf("Sexo inválido. Informe 'm' para masculino ou 'f' para feminino.\n");
        }

        totalHabitantes++;
    }

    if (totalHabitantes > 0) {
        float porcentagem = (float)mulheresComCaracteristicas / totalHabitantes * 100;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhum habitante informado.\n");
    }

}

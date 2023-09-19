#include<stdio.h>

int main(){

    //Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

    int contador = 0, soma = 0, numero;
    while (contador < 50){
        numero = contador + 2;
        soma += numero;
        contador++;
        printf("\n%d %d %d", contador, numero, soma);
    }
    


}
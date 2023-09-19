#include<stdio.h>

int main(){

    //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 

 int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    for(int c = numero; c >= 0; c--){

        printf("\n%d", c);
    }





}
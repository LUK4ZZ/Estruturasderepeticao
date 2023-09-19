#include<stdio.h>

int main(){

    //Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). 

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int c = 0; c <= numero; c+=2)
    {
        printf("\n%d", c);
    }
    




}
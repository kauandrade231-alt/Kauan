#include <stdio.h>
#include <stdbool.h>

void boletim(){
float nota1;
float nota2;
int idade;
char nome[5];
float media;

printf("\n digite seu nome: ");
scanf("%s", nome);

printf("\n digite sua idade: ");
scanf("%d", &idade);

printf("\n digite a sua primeira nota: ");
scanf("%f", &nota1);

printf("\n digite a sua segunda nota: ");
scanf("%f", &nota2);

media = (nota1 + nota2) / 2;

printf("\n------RESULTADO------\n");
printf("nome: %s\n", nome);
printf("idade %d anos\n", nota1);
printf("nota1: %.2f\n", nota1);
printf("nota2: %.2f\n", nota2);
printf("media: %.2f\n", media);

}
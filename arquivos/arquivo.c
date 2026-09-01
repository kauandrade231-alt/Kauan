
#include <stdio.h>


int arquivo(){
//" a" adicionar
// "w sobrescrever"
// "r" ler

char Nome;
int idade;
float altura;
int totalAlunos;

FILE *arquivo;

if (arquivo == NULL){


printf("erro ao abrir o arquivo");

return 1;



}

while (
    fscanf(
        arquivo,
        "Nome: %49s | idade: %d | altura: %f",

        Nome,
        &idade,
        &altura



    ) ==3
){



    totalAlunos++;

    printf("\n Aluno %d \n", Nome);

    printf("nome: %s \n",idade);
    printf("altura %.2f m \n", altura);






}

    







}
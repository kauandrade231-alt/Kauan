#include <stdio.h>

void banco(){
float saldo = 1000.00;
float saque;
float deposito;
float saida;
int opcao;

do{
printf("\n======BANCO======");

printf("\ncomo posso ajudar:)");
printf("\n1. - saldo");
printf("\n2. - saque");
printf("\n3. - deposito");
printf("\n0. - saida");
printf("\n qual vc vai escoher : ");
scanf("%d", &opcao);
switch (opcao)
{
case 1:
    printf("seu saldo é de :%.2f ",saldo);
    break;
case 2:
    printf("quanto quer sacar : ");
    (saldo=saldo-saque);
    scanf("%f", saldo);
    printf("seu saldo agora é de : %.2f",saldo);
    break;
case 3:
    printf("quanto deseja depositar : ");
    
    (saldo=saldo+deposito);
    scanf("%f", saldo);
    printf("se saldo agora é de : %.2f",saldo);
    break;
case 0:

    printf("adeus :)");
    scanf("%f" , saida);



default:

    printf("opção invalida! ");
    break;
}

}while (opcao !=0);

    return 0;













}
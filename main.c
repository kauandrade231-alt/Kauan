
#include <stdio.h>
#include "boletim.c"
#include "calculadora.c"
#include "banco.c"
#include "estacionamento.c"
void main(){
    int opcao;

    do{
        printf("\n========MENU========");
        printf("\n1. - boletim");
        printf("\n2. - calculadora");
        printf("\n3. - banco");
        printf("\n4. - estacionamento");
        printf("\n0. - SAIR");
        printf("\n Escolha a opçãoque deseja executar : ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            boletim();
            break;
        
        case 2:

        calculadora();
        break;

        case 3:
        banco();
        break;

        case 4:
        
        estacionamento();

        case 0:

        printf("programaencerrado!");
        
        default:

        printf("opcao invalida! ");

            break;
        }


    }while (opcao !=0);
    return 0;
}


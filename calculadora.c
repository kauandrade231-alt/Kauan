
#include <stdio.h>

void calculadora(){
    int soma;
    int subtracao;
    int divisao;
    int multiplicacao;
    int valor1,valor2;
    int opcao;
    printf("======CALCULADORA=====");

    printf("\n1. soma");
     printf("\n2. subtração");
      printf("\n3. multiplicação");
       printf("\n4. divisão");
        printf("\n5. sair");
        printf("\n Qual vai escolher : ");

        do{
            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf("qual o 1º valor : ");
                scanf("%d",&valor1);

                printf("qual o 2º valor : ");
                scanf("%d",&valor2);

                soma= valor1 + valor2;

                printf(" = %d",soma);
                break;
            case 2:

                 printf("qual o 1º valor : ");
                scanf("%d",&valor1);

                printf("qual o 2º valor : ");
                scanf("%d",&valor2);

                subtracao = valor1 - valor2;

                 printf(" = %d",subtracao);

                break;
            case 3:

                    
                 printf("qual o 1º valor : ");
                scanf("%d",&valor1);

                printf("qual o 2º valor : ");
                scanf("%d",&valor2);

                multiplicacao = valor1 * valor2;

                 printf(" = %d",multiplicacao);
                
                 break;
            
            case 4:

                  printf("qual o 1º valor : ");
                scanf("%d",&valor1);

                printf("qual o 2º valor : ");
                scanf("%d",&valor2);

                divisao = valor1 / valor2;

                 printf(" = %d",divisao);


            default:
                break;
            }

        }while(opcao !=5);

    
}


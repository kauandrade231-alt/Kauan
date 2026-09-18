#include <stdio.h>
FILE *arquivo;

void estacionamento()
{

    int i;
    int entrada, saida;
    int vagas = 20;
    int veiculo;
    char placa[10];
    int tempoLido;
    float tempo;
    float faturamento = 0.0;
    int opcao;
    float valorApagar;
    int veiculosAtendidos = 0;
    

    arquivo = fopen("veiculo.txt", "r");
    if (arquivo == NULL)
    {

        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    do
    {
        printf("\n========== ESTACIONAMENTO SENAI ==========  ");

        printf("\n oi como posso lhe ajudar : \n");
        printf("\n vagas disponiveis: %d\n", vagas);

        printf("\n Carro : 1 hora é R$ 8,00\n");
        printf("\ncada hora adicional é + 5,00\n");
        printf("\nMoto: 1 hora é R$ 5,00\n");
        printf("\ncada hora adicional é + 3,00\n");

        printf("\n 1. - Registrar entrada ");
        printf("\n 2. - Registrar saida");

        printf("\n 3. - Exibir faturamento");
        printf("\n 4. - exibir faturamento");
        printf("\n5. - Consultar veiculos estacionados");
        printf("\n6. - Consultar histórico");
        printf("\n 7 - Encerrer Sistema ");
        printf("\n qual vai escolher: ");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (vagas <= 0)
            {

                printf("\nNão a vagas disponiveis");
            }
            else
            {
                printf("\n --- REGISTRAR ENTRADA ---\n");
                printf("Digite a placa do vaiculo: ");
                scanf("%s", placa);

                printf("Tipo do veiculo: 01. - carro ou 02. - moto: ");
                scanf("%d", &veiculo);
            
                
                if (veiculo == 1 || veiculo == 2)
                {

                    vagas--;

                    printf("entrada liberada :) \nvagas sobrando%d", vagas);

                    fprintf(arquivo, "ENTRADA | PLACA: %s | TIPO: %s\n", placa, (veiculo == 1) ? "Carro" : "Moto");
                }
                else
                {

                    printf("Tipo de veiculo invalido!\n");
                }
            }
            break;

        case 2:

            printf("\n--- REGISTRAR SAIDA ---\n");
            printf("Qual a placa");

            scanf("%s", placa);

            printf("Tipo do veiculo (1- Carro | 2. Moto):");
            scanf("%d", &veiculo);

            printf("ficou por quanto tempo");
            scanf("%f", &tempo);

            valorApagar = 0.0;

            if (veiculo == 1)
            {

                valorApagar = 8.00;
                if (tempo > 1)
                {

                    valorApagar += (tempo - 1) * 5.00;
                }
            }
            else if (veiculo == 2)
            {

                valorApagar = 5.00;
                if (tempo > 1)
                {
                    valorApagar += (tempo - 1) * 3.00;
                }
                else
                {
                    printf("Tipo de veiculo invalido!\n");
                }
                

                vagas++;
                faturamento += valorApagar;
                veiculosAtendidos++;

                printf("\nValor a pagar: R$ %.2f\n", valorApagar);
                printf("Agradecemos a preferencia! Vagas disponiveis: %d\n", vagas);
                fprintf(arquivo, "SAIDA | Placa: %s | Tempo: %.1fh | Total: R$ %.2f\n",
                        placa, tempo, valorApagar);
                break;
            case 3:

                printf("\n======CAIXA======\n");

                printf("Veículos atendidos:%d\n", veiculosAtendidos);
                printf("Faturamento total: R$ %f\n", faturamento);

                break;
            case 4:
                printf("\n Encerrada o sistema...");
                break;

            default:
                printf("Rescusado");

                break;
            }
        }

    } while (opcao != 7);

   //fdsfsdfsdfsdfddsdfs
  fclose(arquivo);
return 7;
    
}
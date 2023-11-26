#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "portuguese");

    char nomeProduto [250][250];
    float valor [250];
    int quantidadeVendida [250];
    int opcao;
    int quantidadeVenda = 0;
    int i;
    float totalVendas = 0;

    do {
        printf ("=== Menu de Vendas === \n\n");
        printf ("1 - Adicionar uma Venda \n");
        printf ("2 - Sair e exibir resultados \n");
        printf ("Escolha uma das opções: \n");
        scanf ("%d", &opcao);

        switch (opcao) {
            case 1:

                printf ("Digite o nome do produto vendido: \n");
                scanf ("%s", nomeProduto[quantidadeVenda]);
                printf ("Digite o valor do produto: \n");
                scanf ("%f", &valor[quantidadeVenda]);
                printf ("Digite a quantidade vendida: \n");
                scanf ("%d", &quantidadeVendida[quantidadeVenda]);

                

                quantidadeVenda++;
                totalVendas += valor[quantidadeVenda - 1] * quantidadeVendida[quantidadeVenda - 1];


                break;
            case 2: 

                printf ("Exibindo resultados... \n\n");
                for (i = 0; i < quantidadeVenda; i++) {

                    printf ("Nome do Produto: %s\n", nomeProduto[i]);
                    printf ("Quantidade vendida: %d\n", quantidadeVendida[i]);
                    printf ("Valor: %.2f\n", valor[i]);
                    printf ("\n\n");
                }
                printf ("Total: R$%.2f\n", totalVendas);

                break;
            default:
                printf("Opção inváida!");
                system("cls || clear");
        }
    } while (opcao != 2);

    return 0;
}

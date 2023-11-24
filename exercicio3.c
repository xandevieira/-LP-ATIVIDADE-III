#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main () {

    setlocale(LC_ALL, "portuguese");

    char nome [250][250];
    char numeroTelefone [250][15]; // 051 071 9 1234-5678
    int opcao;
    int quantidadeContato = 0;
    int i;

    do {
        printf ("=== Cadastro Telefônico === \n\n");
        printf ("1 - Adicionar um número \n");
        printf ("2 - Sair e exibir resultados \n");
        printf ("Escolha uma das opções: \n");
        scanf ("%d", &opcao);

        switch (opcao) {
            case 1:

                printf ("Digite o nome do contato que deseja adicionar: \n");
                scanf ("%s", nome[quantidadeContato]);
                printf ("Digite o número que deseja adicionar: \n");
                scanf ("%s", numeroTelefone[quantidadeContato]);

                quantidadeContato++;

                break;
            case 2: 

                printf ("Exibindo resultados... \n\n");
                for (i = 0; i < quantidadeContato; i++) {

                    printf ("Nome: %s\n", nome[i]);
                    printf ("Número: %s\n", numeroTelefone[i]);
                }

                break;
            default:
                printf("Opção inváida!");
                sleep(3);
                system("cls || clear");
        }
    } while (opcao != 2);

    return 0;
}

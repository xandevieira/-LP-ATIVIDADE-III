#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomes[5][200];
    float notas[5][3];
    int idade [5];
    int i, j;
    float media[3];
    float somaNotas = 0;
    char resultado[5] [200];

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do %dº aluno: ", i + 1);
        gets(nomes[i]);
        for (j = 0; j < 3; j++){
            printf ("Digite a %dº nota do aluno:", j + 1);
            scanf ("%f", &notas[i][j]);

            somaNotas+= notas[i][j];
        }

        media[i] = somaNotas / j;
        somaNotas = 0;
        fflush(stdin);

        if (media[i] >= 7) {
            strcpy(resultado[i], "Aprovado");
        } else if (media[i] >= 5) {
            strcpy(resultado[i], "Recuperação");
        } else {
            strcpy(resultado[i], "Reprovado");
        }

    }

    system("cls");


    printf ("\nExibindo as informações dos alunos...\n");
    for  (i = 0; i < 5; i++) {
            printf ("\nNome: %s\n", nomes[i]);
        for (j = 0; j < 3; j++){
            printf ("Notas: %.1f\n", notas[i][j]);
        }
        printf ("\nMedia: %.1f\n", media[i]);
        printf ("Situação: %s\n", resultado[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

    int i;
    int numeros[5];
    int pares = 0;
    int impares = 0;
    int positivo = 0;
    int negativo = 0;
    float mediaPares;
    float mediaImpares;
    float mediaGeral;
    int maior = 0;
    int menor = 9999;
    int soma = 0;
    int somaPares = 0;
    int somaImpares = 0;

    for (i = 0; i < 5; i++) {
        printf ("Digite o %dº número: ", i + 1);
        scanf ("%d", &numeros[i]);
        
        soma+= numeros[i];

        if (numeros[i] > 0) {
            positivo++;
        }
        if (numeros[i] < 0) {
            negativo++;
        }

        if (numeros[i] % 2 == 0) {
            pares++;
            somaPares+= numeros[i];
        }
        else {
            impares++;
            somaImpares+= numeros[i];
        }

        maior = numeros[i] > maior ? numeros[i] : maior;
        menor = numeros[i] < menor ? numeros[i] : menor;
    }    
        mediaGeral = soma / i;
        
        if (impares > 0) {
            mediaImpares = (float)somaImpares / (float)impares;
        }

        if (impares > 0) {
            mediaPares = (float)somaPares / (float)pares;
        }


        printf ("Quantia de números pares e ímpares: %d, %d\n", pares, impares);
        printf ("Quantia de numeros positivos e negativos: %d, %d\n", positivo, negativo);
        printf ("Maior e menor número: %d, %d\n", maior, menor);
        printf ("Média de números pares: %.2f\n", mediaPares);
        printf ("Média de números ímpares: %.2f\n", mediaImpares);
        printf ("Média de todos os números inseridos: %.2f\n", mediaGeral);
        printf ("Números lídos de forma inversa : \n");
        for (i = 4; i >= 0; i--) {
            printf ("%d\n", numeros[i]);
        }

    return 0;
}
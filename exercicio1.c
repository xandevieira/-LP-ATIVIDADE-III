#include <stdio.h>
#include <stdlib.h>

int main() {

  // Declarando principais variáveis;
  
  char nome[5][200];
  float altura[5];
  float peso[5];
  int idade[5];

  // Declarando variáveis de cálculo;

  int maiorAltura = 0;
  int menorAltura = 0;
  int maiorPeso = 0;
  int menorPeso = 0;
  int maiorIdade = 0;
  int menorIdade = 0;
  int i;


  // Pedindo dados aos usuários;
  
  for (i = 0; i < 5; i++) {
    printf("Digite o nome da %d° pessoa: ", i + 1);
    scanf("%s", nome[i]);
    printf("Digite a altura da %d° pessoa: ", i + 1);
    scanf("%f", &altura[i]);
    printf("Digite o peso da %d° pessoa: ", i + 1);
    scanf("%f", &peso[i]);
    printf("Digite a idade da %d° pessoa: ", i + 1);
    scanf("%d", &idade[i]);
  }

  // Efetuando cálculos;
  for (i = 0; i < 5; i++) {
    if (altura[i] > altura[maiorAltura]) {
        maiorAltura = i;
    }
    if (altura[i] < altura[menorAltura]) {
        menorAltura = i;
    }
    if (peso[i] > peso[maiorPeso]) {
        maiorPeso = i;
    }
    if (peso[i] < peso[menorPeso]) {
        menorPeso = i;
    }
    if (idade[i] > idade[maiorIdade]) {
        maiorIdade = i;
    }
    if (idade[i] < idade[menorIdade]) {
        menorIdade = i;
    }
}


  // Imprimindo resultados; 

  printf ("Nome e Altura da pessoa mais alta: %s com %.2fm\n", nome[maiorAltura], altura[maiorAltura]);
  printf ("Nome e Altura da pessoa mais baixa: %s com %.2fm\n", nome[menorAltura], altura[menorAltura]);
  printf ("Nome e Peso da pessoa com maior peso: %s com %.2fkg\n", nome[maiorPeso], peso[maiorPeso]);
  printf ("Nome e Peso da pessoa com menor peso: %s com %.2fkg\n", nome[menorPeso], peso[menorPeso]);
  printf ("Nome e Idade da pessoa com maior idade: %s com %d anos\n", nome[maiorIdade], idade[maiorIdade]);
  printf ("Nome e Idade da pessoa com menor idade: %s com %d anos\n", nome[menorIdade], idade[menorIdade]);

  return 0;
}

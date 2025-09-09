#include <stdio.h>

int main() {
   
   char Estadox[100];
   char CodigoDaCidadex[100];
   char NomeDaCidadex[100];
   int populacaox;
   float areax;
   float PIBx;
   int NumeroPontosTuristicosx;

   char Estadoy[100];
   char CodigoDaCidadey[100];
   char NomeDaCidadey[100];
   int populacaoy;
   float areay;
   float PIBy;
   int NumeroPontosTuristicosy;

   printf("\n");

   printf("Digite o nome do Estado \n");
   scanf(" %[^\n]", &Estadox);

   printf("Digite o código da Cidade \n");
   scanf("%s", &CodigoDaCidadex);

   printf("Digite o nome da Cidade \n");
   scanf("%s", &NomeDaCidadex);

   printf("Quantas pessoas tem na cidade? \n");
   scanf("%d", &populacaox);

   printf("Qual a Área da cidade? \n");
   scanf("%f", &areax);

   printf("Qual o PIB da cidade? \n");
   scanf("%f", &PIBx);

   printf("Qual a quantidade de pontos turísticos que a cidade possui? \n");
   scanf("%d", &NumeroPontosTuristicosx);

   printf("\n");

   printf("Digite o nome do Estado 2 \n");
   scanf(" %[^\n]", &Estadoy);

   printf("Digite o código da Cidade 2 \n");
   scanf("%s", &CodigoDaCidadey);

   printf("Digite o nome da Cidade 2 \n");
   scanf("%s", &NomeDaCidadey);

   printf("Quantas pessoas tem na cidade 2? \n");
   scanf("%d", &populacaoy);

   printf("Qual a Área da cidade 2? \n");
   scanf("%f", &areay);

   printf("Qual o PIB da cidade 2? \n");
   scanf("%f", &PIBy);

   printf("Qual a quantidade de pontos turísticos que a cidade 2 possui? \n");
   scanf("%d", &NumeroPontosTuristicosy);

   printf("\n");

   printf("Estado: %s\nCódigo da Cidade: %s\nNome da Cidade: %s\n", Estadox,CodigoDaCidadex,NomeDaCidadex);
   printf("População: %d\nÁrea: %f\nPIB: %f\nNumero de pontos turísticos: %d\n", populacaox,areax,PIBx,NumeroPontosTuristicosx);

   printf("\n");

   printf("Estado: %s\nCódigo da Cidade: %s\nNome da Cidade: %s\n", Estadoy,CodigoDaCidadey,NomeDaCidadey);
   printf("População: %d\nÁrea: %f\nPIB: %f\nNumero de pontos turísticos: %d\n", populacaoy,areay,PIBy,NumeroPontosTuristicosy);

   
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontosoi turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

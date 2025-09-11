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

   printf("Digite o codigo da Cidade \n");
   scanf("%s", &CodigoDaCidadex);

   printf("Digite o nome da Cidade \n");
   scanf("%s", &NomeDaCidadex);

   printf("Quantas pessoas tem na cidade? \n");
   scanf("%d", &populacaox);

   printf("Qual a Area da cidade? \n");
   scanf("%f", &areax);

   printf("Qual o PIB da cidade? \n");
   scanf("%f", &PIBx);

   printf("Qual a quantidade de pontos turisticos que a cidade possui? \n");
   scanf("%d", &NumeroPontosTuristicosx);

   printf("\n");

   printf("Digite o nome do Estado 2 \n");
   scanf(" %[^\n]", &Estadoy);

   printf("Digite o codigo da Cidade 2 \n");
   scanf("%s", &CodigoDaCidadey);

   printf("Digite o nome da Cidade 2 \n");
   scanf("%s", &NomeDaCidadey);

   printf("Quantas pessoas tem na cidade 2? \n");
   scanf("%d", &populacaoy);

   printf("Qual a Area da cidade 2? \n");
   scanf("%f", &areay);

   printf("Qual o PIB da cidade 2? \n");
   scanf("%f", &PIBy);

   printf("Qual a quantidade de pontos turisticos que a cidade 2 possui? \n");
   scanf("%d", &NumeroPontosTuristicosy);

   printf("\n");

   printf("Estado: %s\nCodigo da Cidade: %s\nNome da Cidade: %s\n", Estadox,CodigoDaCidadex,NomeDaCidadex);
   printf("Populacao: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d\n", populacaox,areax,PIBx,NumeroPontosTuristicosx);
   printf("Densidade Populacional: %f\n", populacaox / areax);
   printf("PIB per Capita: %f\n", PIBx / populacaox);


   printf("\n");

   printf("Estado: %s\nCodigo da Cidade: %s\nNome da Cidade: %s\n", Estadoy,CodigoDaCidadey,NomeDaCidadey);
   printf("Populacao: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d\n", populacaoy,areay,PIBy,NumeroPontosTuristicosy);
   printf("Densidade Populacional: %f\n", populacaoy / areay);
   printf("PIB per Capita: %f\n", PIBy / populacaoy);

   
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

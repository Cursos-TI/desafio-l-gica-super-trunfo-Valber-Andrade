#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    //Adicionando as variaveis
    char estado1, estado2;
    char codigodacidade1[5], codigodacidade2[5];
    char nome1[20], nome2[20];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PibPerCapita1, PibPerCapita2;
    float SuperPoder1, SuperPoder2;
    
    // Cadastro das Cartas:
    //Adicionei um printf para o usuario se orientar a informar os dados da cidade de forma respectiva
    printf("Adicione os dados das cidades em ordem, primeira cidade depois a segunda cidade\n");
    printf("Qual o codigo do primeiro estado e do segundo estado?\n");
    scanf("%c %c", &estado1, &estado2);

    printf("Qual o código da primeira cidade e da segunda cidade?\n");
    scanf("%s %s", codigodacidade1, codigodacidade2);

    printf("Qual o nome da primeira cidade e da segunda cidade?\n");
    //Alterado o formato scanf para fgets, para concluir o desafio com nome composto e adicionando getchar
    getchar();
    fgets(nome1,20,stdin);
    fgets(nome2,20,stdin);

    printf("Quantos habitantes cada cidade possui?\n");
    scanf("%u %u", &populacao1, &populacao2);

    printf("Qual o tamanho da aréa das duas cidades?\n");
    scanf("%f %f", &area1, &area2);

    printf("Qual o PIB das duas cidades?\n");
    scanf("%f %f", &pib1, &pib2);

    printf("Quantos pontos turisticos cada cidade possui?\n");
    scanf("%d %d", &pontosturisticos1, &pontosturisticos2);

    //Dividindo a população pela area da cidade para ter a densidade populacional de cada uma das cidades
    DensidadePopulacional1 = populacao1 / area1;
    DensidadePopulacional2 = populacao2 / area2;
    
    //Dividindo o PIB pela população para obter o PIB per capita de cada uma das cidades
    PibPerCapita1 = pib1 / populacao1;
    PibPerCapita2 = pib2 / populacao2;

    //Calculando o super poder das duas cidades
    SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + DensidadePopulacional1 + PibPerCapita1;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + DensidadePopulacional2 + PibPerCapita2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior população.\n");
        } else {
        printf("Cidade 2 tem maior população.\n");
     }

     if (area1 > area2) {
        printf("Cidade 1 tem maior area.\n");
        } else {
        printf("Cidade 2 tem maior area.\n");
     }

     if (pib1 > pib2 {
        printf("Cidade 1 tem maior pib.\n");
        } else {
        printf("Cidade 2 tem maior pib.\n");
     }

     if (pontosturisticos1 > pontosturisticos2) {
        printf("Cidade 1 tem maior pontos turisticos.\n");
        } else {
        printf("Cidade 2 tem maior pontos turisticos.\n");
     }

     if (DensidadePopulacional1 > DensidadePopulacional2) {
        printf("Cidade 1 tem maior Densidade Populacional.\n");
        } else {
        printf("Cidade 2 tem maior Densidade Populacional.\n");
     }

     if (PibPerCapita1 > PibPerCapita2) {
        printf("Cidade 1 tem maior pib per capita.\n");
        } else {
        printf("Cidade 2 tem maior pib per capita.\n");
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

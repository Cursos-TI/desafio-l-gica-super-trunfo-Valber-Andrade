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

    printf("Digite a sigla da primeira cidade e da segunda cidade?\n");
    scanf("%s %s", nome1, nome2);

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

    if (populacao1 > populacao2) {
        printf("Cidade %s tem a maior população: %d \n", nome1, populacao1);
        } else {
        printf("Cidade %s tem a maior população: %d \n", nome2, populacao2);
     }

     if (area1 > area2) {
        printf("Cidade %s tem a maior area: %.2f \n", nome1, area1);
        } else {
        printf("Cidade %s tem a maior area: %.2f \n", nome2, area2);
     }

     if (pib1 > pib2) {
        printf("Cidade %s tem o maior pib: %.2f \n", nome1, pib1);
        } else {
        printf("Cidade %s tem o maior pib: %.2f \n", nome2, pib2);
     }

     if (pontosturisticos1 > pontosturisticos2) {
        printf("Cidade %s tem mais pontos turisticos: %d \n", nome1, pontosturisticos1);
        } else {
        printf("Cidade %s tem mais pontos turisticos: %d \n", nome2, pontosturisticos2);
     }

     if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Cidade %s tem a melhor Densidade Populacional: %.2f \n", nome1, DensidadePopulacional1);
        } else {
        printf("Cidade %s tem a melhor Densidade Populacional: %.2f \n", nome2, DensidadePopulacional2);
     }

     if (PibPerCapita1 > PibPerCapita2) {
        printf("Cidade %s tem o maior pib per capita: %.2f \n", nome1, PibPerCapita1);
        } else {
        printf("Cidade %s tem o maior pib per capita: %.2f \n", nome2, PibPerCapita2);
     }

     if (SuperPoder1 > SuperPoder2) {
        printf("O Super Poder da Cidade %s é o maior: %.2f \n", nome1, SuperPoder1);
        } else {
        printf("O Super Poder da Cidade %s é o maior: %.2f \n", nome2, SuperPoder2);
     }

    return 0;
}

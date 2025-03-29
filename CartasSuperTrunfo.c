#include <stdio.h>

int main(){

    //variaveis
    char estado1, estado2;
    char cidade1[30], cidade2[30];
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibp1, pibp2, conv1, conv2;    //conv1 e 2 foi criado para converter o pib1 e 2 e bilhoes de reais.
    int turisticos1, turisticos2, populacao1, populacao2;
    int codigo1, codigo2;

    // Tela de boas vindas
    printf("Bem vindo ao Super Trunfo! \n");
    printf("Aqui você irá cadastrar suas cartas \n");
    printf("Vamos começar??? \n\n");

    //Coleta de dados carta 01
    printf("Digite os dados da primeira carta abaixo: \n\n");
    printf("Digite qual é estado (A a H): \n");
    scanf("%c", &estado1);

    printf("Digite o nome da cidade: \n");    
    scanf("%s", &cidade1);

    printf("Digite o código da carta (01 a 04): \n");    
    scanf("%2d", &codigo1);

    printf("Qual é o volume populacional: \n");
    scanf("%d", &populacao1);

    printf("Qual é a área (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões R$): \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &turisticos1);

    conv1 = 1000000000 * (pib1);              //Converte o valor pib1 em bilhoes de reais.
    densidade1 = (populacao1 / area1);        //Calcula a densidade populacional carta 1.
    pibp1 = (conv1 / populacao1);             //Calcula o PIB per capita da carta 1.

    //Coleta de dados carta 02
    printf("\n\nDigite os dados da segunda carta abaixo: \n\n");
    printf("Digite qual é estado (A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: \n");    
    scanf("%s", &cidade2);

    printf("Digite o código da carta (01 a 04): \n");    
    scanf("%2d", &codigo2);

    printf("Qual é o volume populacional: \n");
    scanf("%d", &populacao2);

    printf("Qual é a área (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões R$): \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &turisticos2);

    conv2 = 1000000000 * (pib2);              //Converte o valor pib1 em bilhoes de reais.
    densidade2 = (populacao2 / area2);        //Calcula a densidade populacional carta 2.
    pibp2 = (conv2 / populacao2);              //Calcula o PIB per capita da carta 2.


    //resultado carta1.
    printf("\n\nCartas cadastradas com sucesso! \n\n");
    printf("\n\nCarta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%02d\n", estado1, codigo1);     //"%02d" adiciona o "0" no código
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);                // "%.2f" limita os valores decimais para duas casas
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibp1);


    //resultado carta2.
    printf("\n\nCarta 02: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%02d\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais \n",pib2);
    printf("Número de Pontos Turísticos: %d\n",turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibp2);

    return 0;    
}

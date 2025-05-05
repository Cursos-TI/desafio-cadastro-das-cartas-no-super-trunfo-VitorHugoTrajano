#include <stdio.h>

int main() {
    //Carta 1
    char codigo1[5] = "A01";
    char cidade1[20] = "";
    float populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int pontos_turisticos1 = 0;
    float densidade_pop1 = 0;

    //Carta 2
    char codigo2[5] = "B01";
    char cidade2[20] = "";
    float populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontos_turisticos2 = 0;
    float densidade_pop2 = 0;
    
    //Saudação
    printf("Olá a todos, vamos começar a construir o nosso jogo Super Trunfo.\n");
    printf("Vamos começar cadastrando os atributos de duas cartas ok?\n");
    printf("O país escolhido é o nosso Brasil.\n");
    printf("Vamos começar? Cadastre então os atributos da sua primeira carta.\n");

    //Cadastro da Carta 1.
    printf("Carta 1\n");
    printf("Qual será a cidade?\n");
    printf("R: ");
    scanf("%[^\n]s", &cidade1);

    printf("Qual a população da cidade escolhida?\n");
    printf("R: ");
    scanf("%f", &populacao1);

    printf("Qual a área desta cidade?\n");
    printf("R: ");
    scanf("%f", &area1);

    printf("Qual O PIB desta cidade?\n");
    printf("R: ");
    scanf("%f", &pib1);

    printf("Para finalizar, quantos pontos turísticos?\n");
    printf("R: ");
    scanf("%d", &pontos_turisticos1);

    //densidade populacional carta1
    densidade_pop1 = (float) populacao1 / area1;


    //Cadastro da Carta 2.
    printf("Vamos a carta número 2?\n");
    printf("Qual será a cidade?\n");
    printf("R: ");
    scanf("%s", cidade2);

    printf("Qual a população da cidade escolhida?\n");
    printf("R: ");
    scanf("%f", &populacao2);

    printf("Qual a área desta cidade?\n");
    printf("R: ");
    scanf("%f", &area2);

    printf("Qual O PIB desta cidade?\n");
    printf("R: ");
    scanf("%f", &pib2);

    printf("Para finalizar, quantos pontos turísticos?\n");
    printf("R: ");
    scanf("%d", &pontos_turisticos2);

    //densidade populacional carta 2
    densidade_pop2 = (float) populacao2 / area2;
    

    //Impressão dos valores na tela.
    //Impressão Carta 1
    printf("Carta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.3f milhões de habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f trilhões \n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop1);

    //Impressão Carta2
    printf("Carta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.3f milhões de habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2f trilhões \n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop2);

    return 0;
}

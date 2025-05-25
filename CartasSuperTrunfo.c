#include <stdio.h>

int main() {
    //Carta 1
    char codigo1[5] = "A01";
    char cidade1[20] = "";
    unsigned int populacao1, densidade_pop1, soma1;
    int area1, pontos_turisticos1, renda_percapita1;
    float pib1, superPoder1;

    //Carta 2
    char codigo2[5] = "B01";
    char cidade2[20] = "";
    unsigned int populacao2, densidade_pop2, soma2;
    int area2, pontos_turisticos2, renda_percapita2;
    float pib2, superPoder2;

    //Variáveis utilizadas para comparação.
    int opcao1, opcao2;

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
    scanf("%u", &populacao1);

    printf("Qual a área desta cidade?\n");
    printf("R: ");
    scanf("%d", &area1);

    printf("Qual O PIB desta cidade?\n");
    printf("R: ");
    scanf("%f", &pib1);

    printf("Para finalizar, quantos pontos turísticos?\n");
    printf("R: ");
    scanf("%d", &pontos_turisticos1);

    //densidade populacional carta1
    densidade_pop1 = populacao1 / area1;

    //Renda PerCapita carta1
    renda_percapita1 =  (int)pib1 / populacao1;

    //Super Poder Carta1
    superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_pop1 + renda_percapita1;

    //Cadastro da Carta 2.
    printf("Vamos a carta número 2?\n");
    printf("Qual será a cidade?\n");
    printf("R: ");
    scanf("%s", cidade2);

    printf("Qual a população da cidade escolhida?\n");
    printf("R: ");
    scanf("%u", &populacao2);

    printf("Qual a área desta cidade?\n");
    printf("R: ");
    scanf("%d", &area2);

    printf("Qual O PIB desta cidade?\n");
    printf("R: ");
    scanf("%f", &pib2);

    printf("Para finalizar, quantos pontos turísticos?\n");
    printf("R: ");
    scanf("%d", &pontos_turisticos2);

    //densidade populacional carta 2
    densidade_pop2 = populacao2 / area2;

    //Renda Per Capita carta2
    renda_percapita2 = (int)pib2 / populacao2;

    //Super Poder carta2
    superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_pop2 + renda_percapita2;
    

    //Impressão dos valores na tela.
    //Impressão Carta 1
    printf("Carta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u milhões de habitantes\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("PIB: R$ %.3f trilhões \n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %u hab/km²\n", densidade_pop1);
    printf("Renda Per Capita: R$ %.3f\n", renda_percapita1);
    printf("Super poder: %.2f\n", superPoder1);

    //Impressão Carta2
    printf("Carta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u milhões de habitantes\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: R$ %.3f trilhões \n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %u hab/km²\n", densidade_pop2);
    printf("Renda Per Capita: R$ %.3f\n", renda_percapita2);
    printf("Super poder: %.2f\n", superPoder2);

    //Comparando as cartas
    printf("Selecione dois atributos para comparação.\n");
    printf("1. População\n");
    printf("2. Área.\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Atributo: ");
    scanf("%d", &opcao1);
    printf("Atributo: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf ("Não é possível selecionar o mesmo atributo duas vezes.\n");
    } else {
        printf("Carta1: Cidade %s\n", cidade1);
        printf("Carta2: Cidade %s\n", cidade2);
        if(opcao1 == 1) {
            printf("Primeiro Atributo escolhido: População.\n");
        } else if( opcao1 == 2) {
            printf("Primeiro Atributo escolhido: Área.\n");
        } else if(opcao1 == 3) {
            printf("Primeiro Atributo escolhido: PIB.\n");
        } else if(opcao1 == 4) {
            printf("Primeiro Atributo escolhido: Pontos Turísticos.\n");
        } else if (opcao1 == 5) {
            printf("Primeiro Atributo escolhido: Densidade Demográfica.\n");
        } else {
            printf("Opção inválida.");
        }
        if(opcao2 == 1) {
            printf("Segundo Atributo escolhido: População.\n");
        } else if( opcao2 == 2) {
            printf("Segundo Atributo escolhido: Área.\n");
        } else if(opcao2 == 3) {
            printf("Segundo Atributo escolhido: PIB.\n");
        } else if(opcao2 == 4) {
            printf("Segundo Atributo escolhido: Pontos Turísticos.\n");
        } else if (opcao2 == 5) {
            printf("Segundo Atributo escolhido: Densidade Demográfica.\n");
        } else {
            printf("Opção inválida.");
        }
        switch (opcao1)
    {
    case 1:
        printf("Carta1: População %u milhões de pessoas.\n", populacao1);
        printf("Carta2: População %u milhões de pessoas.\n", populacao2);
        if(opcao2 == 2) {
            soma1 = populacao1 + area1;
            soma2 = populacao2 + area2;
        }else if(opcao2 == 3) {
            soma1 = populacao1 + pib1;
            soma2 = populacao2 + pib2;
        } else if(opcao2 == 4) {
            soma1 = populacao1 + pontos_turisticos1; 
            soma2 = populacao2 + pontos_turisticos2;
        }else {
            soma1 = populacao1 + densidade_pop1;
            soma2 = populacao2 + densidade_pop2;
        }
        break;
    case 2:
        printf("Carta1: Área %d km²\n", area1);
        printf("Carta2: Área %d km²\n", area2);
        if(opcao2 == 1) {
            soma1 = area1 + populacao1;
            soma2 = area2 + populacao2;
        }else if(opcao2 == 3) {
            soma1 = area1 + pib1;
            soma2 = area2 + pib2;
        } else if(opcao2 == 4) {
            soma1 = area1 + pontos_turisticos1;
            soma2 = area2 + pontos_turisticos2; 
        }else {
            soma1 = area1 + densidade_pop1;
            soma2 = area2 + densidade_pop2;
        }
        break;
    case 3:
        printf("Carta1: PIB R$ %f.3f\n", pib1);
        printf("Carta2: PIB R$ %f.3f\n", pib2);
        if(opcao2 == 2) {
            soma1 = pib1 + area1;
            soma2 = pib2 + area2;
        }else if(opcao2 == 1) {
            soma1 = populacao1 + pib1;
            soma2 = populacao2 + pib2;
        } else if(opcao2 == 4) {
            soma1 = pib1 + pontos_turisticos1; 
            soma2 = pib2 + pontos_turisticos2;
        }else {
            soma1 = pib1 + densidade_pop1;
            soma2 = pib2 + densidade_pop2;
        }
        break;
    case 4: 
        printf("Carta1: Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Carta2: Pontos Turísticos: %d\n", pontos_turisticos2);
        if(opcao2 == 2) {
            soma1 = pontos_turisticos1 + area1;
            soma2 = pontos_turisticos2 + area2;
        }else if(opcao2 == 3) {
            soma1 = pontos_turisticos1 + pib1;
            soma2 = pontos_turisticos2 + pib2;
        } else if(opcao2 == 1) {
            soma1 = pontos_turisticos1 + populacao1; 
            soma2 = pontos_turisticos2 + populacao2;
        }else {
            soma1 = pontos_turisticos1 + densidade_pop1;
            soma2 = pontos_turisticos2 + densidade_pop2;
        }
        break;
    case 5:
        printf("Carta1: Densidade demográfica %u hab/km².\n", densidade_pop1);
        printf("Carta2: Densidade demográfica %u hab/km².\n", densidade_pop2);
        if(opcao2 == 1) {
            soma1 = densidade_pop1 + populacao1;
            soma2 = densidade_pop2 + populacao2;
        }else if(opcao2 == 2) {
            soma1 = densidade_pop1 + area1;
            soma2 = densidade_pop2 + area2;
        } else if(opcao2 == 3) {
            soma1 = densidade_pop1 + pib1;
            soma2 = densidade_pop2 + pib2; 
        }else {
            soma1 = densidade_pop1 + pontos_turisticos1;
            soma2 = densidade_pop2 + pontos_turisticos2;
        }
    default:
        printf("Opção inválida.");
        break;
    }
    }
    printf("A soma dos atributos da Carta1 é: %d.\n", soma1);
    printf("A soma dos Atributos da Carta2 é: %d.\n", soma2);
    if(soma1 > soma2) {
        printf("Vitória da Carta1.\n");
    } else if( soma1 < soma2) {
        printf("Vitória da Carta2.\n");
    } else {
        printf("Houve empate.\n");
    }

    return 0;
}

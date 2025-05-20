#include <stdio.h>

int main() {
    //Carta 1
    char codigo1[5] = "A01";
    char cidade1[20] = "";
    unsigned long int populacao1 = 0;
    int area1 = 0;
    float pib1 = 0;
    int pontos_turisticos1 = 0;
    unsigned int densidade_pop1 = 0;
    int renda_percapita1 = 0;
    float superPoder1 = 0;

    //Carta 2
    char codigo2[5] = "B01";
    char cidade2[20] = "";
    unsigned long int populacao2 = 0;
    int area2 = 0;
    float pib2 = 0;
    int pontos_turisticos2 = 0;
    unsigned int densidade_pop2 = 0;
    int renda_percapita2 = 0;
    float superPoder2 = 0;

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

    if(opcao1 == 1) {
        printf("Primeiro atributo seleciondao: População.\n");
        if(populacao1 > populacao2) {
            printf("Vitória da Carta1.\n");
        } else if(populacao2 > populacao1) {
            printf("Vitória da Carta2.\n");
        }
    } else if (opcao1 == 2) {
        printf("Primeiro atributo selecionado: Área.\n");
        if(area1 > area2 ) {
            printf("Vitória da Carta1.\n");
        } else if(area2 > area1) {
            printf("Vitória da Carta2.\n");
        }    
    } else if (opcao1 == 3) {
        printf("Primeiro atributo selecionado: PIB.\n");
        if(pib1 > pib2) {
            printf("Vitória da Carta1.\n");
        } else if(pib2 > pib1) {
            printf("Vitória da Carta2.\n");
        }
    } else if(opcao1 == 4) {
        printf("Primeiro atributo selecionado: Pontos Turísticos.\n");
        if(pontos_turisticos1 > pontos_turisticos2) {
            printf("Vitória da Carta1.\n");
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Vitória da Carta2.\n");
        }
    } else {
        printf("Primeiro atributo selecionado: Densidade demográfica.\n");
        if(densidade_pop1 > densidade_pop2) {
            printf("Vitória da Carta1.\n");
        } else if (densidade_pop2 > densidade_pop1) {
            printf("Vitória da Carta2.\n");
        }
    }

    if(opcao2 == 1 ) {
        printf("Segundo atributo selecionado: População.\n");
        if(populacao2 > populacao1) {
            printf("Vitória da Carta2.\n");
        } else {
            printf("Vitória da Carta1.\n");
        }
    } else if(opcao2 == 2) {
        printf("Segundo atributo selecionado: Área.\n");
       if(area2 > area1) {
            printf("Vitória da Carta2.\n");
       } else {
        printf("Vitória da Carta1.\n");
       }
    }else if(opcao2 == 3) {
        printf("Segundo atributo selecionado: PIB.\n");
        if(pib2 > pib1) {
            printf("Vitória da Carta2.\n");
        } else {
            printf("Vitória da Carta1.\n");
        }
    }else if(opcao2 == 4) {
        printf("Segundo atributo selecionado: Pontos Turísticos.\n");
        if(pontos_turisticos2 > pontos_turisticos1) {
            printf("Vitória da Carta2.\n");
        }else {
            printf("Vitória da Carta1.\n");
        }   
    }else {
        printf("Segundo atributo selecionado: Densidade Demográfica.\n");
        if(densidade_pop2 > densidade_pop1) {
            printf("Vitória da Carta2.\n");
        }else {
            printf("Vitória da Carta1.\n");
        }
    }

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //nomeando variáveis básicas---------------------------
    char inicial_do_estado1, inicial_do_estado2;
    char codigo_carta1[3], codigo_carta2[3];
    char cidade_nome1[50], cidade_nome2[50];
    int populacao1, populacao2;
    float area_da_cidade1, area_da_cidade2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    char prosseguir[10];


        //Dando as informações inicias ao jogador---------------------------
    printf("\n•Você está prestes a criar suas duas primeiras cartas do jogo Super Trunfo de Países!\n•Cada carta representará uma cidade de um dos estados do país, sendo no máximo 4 estados e 4 cidades de um determinado país.\n•Mas, chega de babozeira e vamos para o que importa!\n\n•Siga as informações abaixo para montar suas duas primeiras cartas!");
    printf("\n•Acesse o terminal, digite 'y' e envie para começar!");
    scanf("%s", prosseguir);


        //criando a primeira carta (carta 1)---------------------------
    printf("\nPerfeito!\n1)Vamos começar com o estado! Digite a inicial do estado que você tem em mente. (Exemplo: Rio de janeiro = R)\nResposta:");
        scanf(" %c", &inicial_do_estado1);  //Inicial do estado 1
    printf("\n2)Agora, insira um número de 01 a 04 para para criar o código da carta. (ATENÇÃO, não repita números)\nResposta:");
        scanf("%s", codigo_carta1);         //Código da carta 1
    printf("\n3)Boa! Agora, ponha o nome de uma cidade desse estado. Obs1: Substitua os espaços por '_'. (Exemplo: Rio_de_Janeiro). Obs2: caso sua cidade tenha acento, não ponha. (exemplo: Apiaí -> Apiai)\nResposta:");
        scanf("%s", cidade_nome1);          //Nome da cidade 1
    printf("\n4)Você está indo bem! Agora a população da cidade. (Número inteiro)\nResposta:");
        scanf("%d", &populacao1);           //Ppopulação da cidade 1
    printf("\n5)Quase lá! Agora, a área da cidade em quilômetros quadrados(km²). Obs: substitua a vírgula por ponto. (Exemplo: '610,54' -> '610.54')\nResposta:");
        scanf("%f", &area_da_cidade1);      //area em km² da cidade 1
    printf("\n6)Agora, o PIB da cidade.(A mesma questão da vírgula e do ponto).\nResposta:"); 
        scanf("%f", &pib1);                 //PIB da cidade 1
    printf("\n7)É isso, agora, para finalizar, o número de pontos turísticos da cidade.\nResposta:");
        scanf("%d", &pontos_turisticos1);   //pontos turísticos da cidade 1


        //Criando a segunda carta (carta 2)---------------------------
    prosseguir[10]=0;
    printf("\n•Sensacional! Agora que você já aprendeu, sigamos para a sua segunda carta!\n•Digite 'y' e envie para prosseguir.");
    scanf("%s", prosseguir);

    printf("\n1) Inicial do estado\nResposta:");
        scanf(" %c", &inicial_do_estado2);   //inicial estado 2
    printf("\n2) Número de 01 a 04. Sem repetir, ('%s' já foi utilizado)\nResposta:", codigo_carta1);
        scanf("%s", codigo_carta2);         //Código carta 2
    printf("\n3) Nome da cidade do Estado. (substituindo espaços e omitindo acentos)\nResposta:");
        scanf("%s", cidade_nome2);          //Cidade nome 2
    printf("\n4) População da cidade\nResposta:");
        scanf("%d", &populacao2);           //População cidade 2
    printf("\n5) Área da cidade em quilômetros quadrados. (Substituindo vírgula por ponto)\nResposta:");
        scanf("%f", &area_da_cidade2);      //Área cidade 2
    printf("\n6) PIB da cidade.\nResposta:");
        scanf("%f", &pib2);                 //PIB cidade 2
    printf("\n7) Número de pontos turísticos da cidade.\nResposta:");
        scanf("%d", &pontos_turisticos2);   //Pontos turísiticos cidade 2


        //Mostrando resultados (resultados)---------------------------
    prosseguir[10]=0;
    printf("\n•Perfeito, agora que você concluiu as etapas, vamos dar uma olhada nas suas cartas!\n•Digite 'y' e envie para ver suas cartas.");
    scanf("%s", prosseguir);
    printf("\nCarta: 1\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2fR$\nNúmero de pontos turísticos: %d\n", inicial_do_estado1, inicial_do_estado1, codigo_carta1, cidade_nome1, populacao1, area_da_cidade1, pib1, pontos_turisticos1);
    printf("\nCarta: 2\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2fR$\nNúmero de pontos turísticos: %d\n", inicial_do_estado2, inicial_do_estado2, codigo_carta2, cidade_nome2, populacao2, area_da_cidade2, pib2, pontos_turisticos2);

    return 0;
}

/*Acredito que o código, se as etapas forem seguidas, atende ao que foi pedido. É muito fácil de quebrá-lo, 
pois o conceito é muito simples. Mas, o objetivo era entender o que aprendera, e não utilizar funções que
ainda sequer sei utilizar.*/

/* Alguns número, se forem exagerados, simplesmente quebram. Provavelmente tem a ver com a limitação das
variáveis, mas não acho que haja muito o que eu possa fazer agora, talvez no próximo desafio.*/

/*Matrícula: 202503548803
Nome: Davi dos Santos Capitano
Github: CAPTURACERTA*/
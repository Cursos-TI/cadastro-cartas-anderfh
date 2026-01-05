#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
  char estadoA[2] = "A", estadoB[2] = "B";
  char codigoA[4] = "A01", codigoB[4] = "B01";
  char nomecidadeA01[15] = "Aires", nomecidadeB01[15] = "Buenos";
  unsigned long int populacaoA01, populacaoB01;
  float areaA01, areaB01;
  float pibA01, pibB01;
  int pontoturA01, pontoturB01;
  float densidadepopA01, densidadepopB01;
  float pibpercapitaA01, pibpercapitaB01;
  float superPoderA01, superPoderB01;
  char atributo[30], unidadeMedida[30];
  int escolhaAtributo;
  float valorAtributoA01, valorAtributoB01;

  //pré definição dos dados

  populacaoA01 = 12000000;
  areaA01 = 700000;
  pibA01 = 130;
  pontoturA01 = 30;

  populacaoB01 = 2000000;
  areaB01 = 1300000;
  pibB01 = 50;
  pontoturB01 = 30;

  // Cálculos

  densidadepopA01 = populacaoA01 / areaA01; //calcula a densidade populacional de A01
  densidadepopB01 = populacaoB01 / areaB01; //calcula a densidade populacional de B01
  pibpercapitaA01 = (pibA01 * 1000000000) / populacaoA01; //calcula o PIB per Capita de A01
  pibpercapitaB01 = (pibB01 * 1000000000) / populacaoB01; //calcula o PIB per capita de B01
  superPoderA01 = populacaoA01 + areaA01 + pibA01 + pontoturA01 + (- densidadepopA01) + pibpercapitaA01; //calcula o Super Poder de A01
  superPoderB01 = populacaoB01 + areaB01 + pibB01 + pontoturB01 + (- densidadepopB01) + pibpercapitaB01; //calcula o Super Poder de B01
  
  // Menu inicial
  int escolhaMenu;

  printf("--- Jogo Super Trunfo ---\n\n");
  printf("Vamos começar o jogo!\n\n");
  printf("1. Novo Jogo\n");
  printf("2. Configurar cartas\n");
  printf("3. Sair\n");
  printf("\nEscolha uma opção: \n");
  scanf("%d", &escolhaMenu);

  switch (escolhaMenu)
  {
  case 1:
    //Escolha do atributo a ser comparado

    printf("\n-- Atributos das cartas --\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("\nEscolha o atributo a ser comparado:\n");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo)
    {
    case 1:
      printf("\n--- Comparando as cartas ---\n");//Mostra a comparação escolhida
      printf("-- Atributo: População --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, populacaoA01, "habitantes");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, populacaoB01, "habitantes");// Mostra o valor do atributo para a carta 2
      printf("\nResultado: ");// Apresenta o resultado

      if(populacaoA01 > populacaoB01){//Faz a comparação das cartas e retorna o vencedor
        printf("Carta 1 venceu!\n\n");
      } else{
        printf("Carta 2 venceu!\n\n");
      }
      break;
    case 2:
      printf("\n--- Comparando as cartas ---\n");//Mostra a comparação escolhida
      printf("-- Atributo: Área --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, areaA01, "km²");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, areaB01, "km²");// Mostra o valor do atributo para a carta 2
      printf("\nResultado: ");// Apresenta o resultado

      if(areaA01 > areaB01){//Faz a comparação das cartas e retorna o vencedor
        printf("Carta 1 venceu!\n\n");
      } else{
        printf("Carta 2 venceu!\n\n");
      }
      break;
    case 3:
      printf("\n--- Comparando as cartas ---\n");//Mostra a comparação escolhida
      printf("-- Atributo: PIB --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, pibA01, "Bilhões de Reais");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, pibB01, "Bilhões de Reais");// Mostra o valor do atributo para a carta 2
      printf("\nResultado: ");// Apresenta o resultado

      if(pibA01 > pibB01){//Faz a comparação das cartas e retorna o vencedor
        printf("Carta 1 venceu!\n\n");
      } else{
        printf("Carta 2 venceu!\n\n");
      }
      break;
    case 4:
      printf("\n--- Comparando as cartas ---\n");//Mostra a comparação escolhida
      printf("-- Atributo: Pontos turísticos --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, pontoturA01, "pontos turísticos");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, pontoturB01, "pontos turísticos");// Mostra o valor do atributo para a carta 2
      printf("\nResultado: ");// Apresenta o resultado

      if(pontoturA01 > pontoturB01){//Faz a comparação das cartas e retorna o vencedor
        printf("Carta 1 venceu!\n\n");
      } else{
        printf("Carta 2 venceu!\n\n");
      }
      break;
    case 5:
      printf("\n--- Comparando as cartas ---\n");//Mostra a comparação escolhida
      printf("-- Atributo: Densidade demográfica --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, densidadepopA01, "hab/Km²");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, densidadepopB01, "hab/Km²");// Mostra o valor do atributo para a carta 2
      printf("\nResultado: ");// Apresenta o resultado

      if(densidadepopA01 < densidadepopB01){//Faz a comparação das cartas e retorna o vencedor
        printf("Carta 1 venceu!\n\n");
      } else{
        printf("Carta 2 venceu!\n\n");
      }
      break;
    case 6:
      printf("\n--- Comparando as cartas ---\n");//Mostra a comparação escolhida
      printf("-- Atributo: PIB per capita --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, pibpercapitaA01, "Reais");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, pibpercapitaB01, "Reais");// Mostra o valor do atributo para a carta 2
      printf("\nResultado: ");// Apresenta o resultado

      if(pibpercapitaA01 > pibpercapitaB01){//Faz a comparação das cartas e retorna o vencedor
        printf("Carta 1 venceu!\n\n");
      } else{
        printf("Carta 2 venceu!\n\n");
      }
      break;
    case 7:
      printf("\n--- Comparando as cartas ---\n");//Mostra a comparação escolhida
      printf("-- Atributo: Super poder --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, superPoderA01, "pontos");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, superPoderB01, "pontos");// Mostra o valor do atributo para a carta 2
      printf("\nResultado: ");// Apresenta o resultado

      if(superPoderA01 > superPoderB01){//Faz a comparação das cartas e retorna o vencedor
        printf("Carta 1 venceu!\n\n");
      } else{
        printf("Carta 2 venceu!\n\n");
      }
    default:
      printf("Número não corresponde a um atributo.\n");
      break;
    }
    break;
  case 2:
    // Área para entrada de dados
  
    printf("Por favor, configure as cartas do baralho:\n\n");

    printf("Vamos configurar a primeira carta:\n\n");// Perguntar os dados da carta 1
    
    printf("Qual a primeira letra do nome do estado?\n");// Perguntar a primeira letra do estado
    scanf("%s", &estadoA);

    printf("Qual o código da carta?\n");// Perguntar o código da carta
    scanf("%s", codigoA);

    printf("Qual o nome da cidade?\n");// Perguntar o nome da cidade
    scanf("%s", nomecidadeA01);

    printf("Qual a população da cidade?\n");// Perguntar a população da cidade
    scanf("%lu", &populacaoA01);

    printf("Qual a área da cidade?(km²)\n");// Perguntar a área da cidade
    scanf("%f", &areaA01);

    printf("Qual o PIB da cidade?(Bilhões de Reais)\n");// Perguntar o PIB da cidade
    scanf("%f", &pibA01);

    printf("Quantos pontos turísticos tem a cidade?\n");// Perguntar os pontos turísticos da cidade
    scanf("%d", &pontoturA01);

    printf("\nAgora vamos configurar a segunda carta:\n\n");// Perguntar os dados da carta 2

    printf("Qual a primeira letra do nome do estado?\n");// Perguntar a primeira letra do estado
    scanf("%s", &estadoB);

    printf("Qual o código da carta?\n");// Perguntar o código da carta
    scanf("%s", codigoB);

    printf("Qual o nome da cidade?\n");// Perguntar o nome da cidade
    scanf("%s", nomecidadeB01);

    printf("Qual a população da cidade?\n");// Perguntar a população da cidade
    scanf("%lu", &populacaoB01);

    printf("Qual a área da cidade?(km²)\n");// Perguntar a área da cidade
    scanf("%f", &areaB01);

    printf("Qual o PIB da cidade?(Bilhões de Reais)\n");// Perguntar o PIB da cidade
    scanf("%f", &pibB01);

    printf("Quantos pontos turísticos tem a cidade?\n");// Perguntar os pontos turísticos da cidade
    scanf("%d", &pontoturB01);

    // Área para exibição dos dados da cidade

    printf("\n--- Carta 1 ---\n");// Mostrar os dados da carta 1
    printf("- Estado %s\n", estadoA);// Mostrar a primeira letra do estado
    printf("- Código %s\n", codigoA);// Mostrar o código da carta
    printf("- Cidade: %s\n", nomecidadeA01);// Mostrar o nome da cidade
    printf("- População: %lu habitantes\n", populacaoA01);// Mostrar a população da cidade
    printf("- Área: %.2f km²\n", areaA01);// Mostrar a área da cidade
    printf("- PIB: R$%.2f Bilhões\n", pibA01);// Mostrar o PIB da cidade
    printf("- Pontos turísticos: %d\n", pontoturA01);// Mostrar os pontos turísticos da cidade
    printf("- Densidade populacional: %.2f hab/Km²\n", densidadepopA01);//mostra a densidade populacional da cidade
    printf("- PIB per capita: R$%.2f\n", pibpercapitaA01);//mostra o PIB per capita da cidade
    printf("- O Super Poder é: %.2f \n", superPoderA01);//mostra o Super Poder da cidade

    printf("\n--- Carta 2 ---\n");// Mostrar os dados da carta 2
    printf("- Estado %s\n", estadoB);// Mostrar a primeira letra do estado
    printf("- Código %s\n", codigoB);// Mostrar o código da carta
    printf("- Cidade: %s\n", nomecidadeB01);// Mostrar o nome da cidade
    printf("- População: %lu habitantes\n", populacaoB01);// Mostrar a população da cidade
    printf("- Área: %.2f km²\n", areaB01);// Mostrar a área da cidade
    printf("- PIB: R$%.2f Bilhões\n", pibB01);// Mostrar o PIB da cidade
    printf("- Pontos turísticos: %d\n", pontoturB01);// Mostrar os pontos turísticos da cidade
    printf("- Densidade populacional: %.2f hab/Km²\n", densidadepopB01);//mostra a densidade populacional da cidade
    printf("- PIB per capita: R$%.2f\n", pibpercapitaB01);//mostra o PIB per capita da cidade
    printf("- O Super Poder é: %.2f \n", superPoderB01);//mostra o Super Poder da cidade

    break;
  case 3:
    printf("Saindo ...");//Mensagem de saída do sistema
    break;
  default:
    printf("Caractere inválido :(\n\n");// Mensagem se caractere digitado não for válido
    break;
  }

return 0;
} 

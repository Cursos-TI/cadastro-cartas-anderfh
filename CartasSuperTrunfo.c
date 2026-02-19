#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
  char estadoA[2] = "A", estadoB[2] = "B";
  char codigoA[4] = "A01", codigoB[4] = "B01";
  char nomecidadeA01[15] = "Aires", nomecidadeB01[15] = "Buenos";
  float populacaoA01, populacaoB01;
  float areaA01, areaB01;
  float pibA01, pibB01;
  float pontoturA01, pontoturB01;
  float densidadepopA01, densidadepopB01;
  float pibpercapitaA01, pibpercapitaB01;
  float superPoderA01, superPoderB01;
  int escolhaMenu;
  int escolhaAtributo1, escolhaAtributo2;
  float comparação1A, comparação1B, comparação2A, comparação2B;

  //pré definição aleatória dos dados

  srand(time(0));
  populacaoA01 = 120000*(rand() % 100 + 1);
  areaA01 = 7000*(rand() % 100 + 1);
  pibA01 = 1.3*(rand() % 100 + 1);
  pontoturA01 = 1*(rand() % 100 + 1);

  populacaoB01 = 120000*(rand() % 100 + 1);
  areaB01 = 7000*(rand() % 100 + 1);
  pibB01 = 1.3*(rand() % 100 + 1);
  pontoturB01 = 1*(rand() % 100 + 1);

  // Cálculos

  densidadepopA01 = populacaoA01 / areaA01; //calcula a densidade populacional de A01
  densidadepopB01 = populacaoB01 / areaB01; //calcula a densidade populacional de B01
  pibpercapitaA01 = (pibA01 * 1000000000) / populacaoA01; //calcula o PIB per Capita de A01
  pibpercapitaB01 = (pibB01 * 1000000000) / populacaoB01; //calcula o PIB per capita de B01
  superPoderA01 = populacaoA01 + areaA01 + pibA01 + pontoturA01 + (- densidadepopA01) + pibpercapitaA01; //calcula o Super Poder de A01
  superPoderB01 = populacaoB01 + areaB01 + pibB01 + pontoturB01 + (- densidadepopB01) + pibpercapitaB01; //calcula o Super Poder de B01
  
  // Menu inicial

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
    //Escolha do 1º atributo a ser comparado

    printf("\n-- Atributos das cartas --\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("\nEscolha o 1º atributo a ser comparado:\n");
    scanf("%d", &escolhaAtributo1);
    printf("\nEscolha o 2º atributo a ser comparado:\n");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo1 == escolhaAtributo2){
      printf("Os atributos escolhidos para comparação são iguais. Por favor, escolha atributos diferentes.\n");
      return 0;
    }else if (escolhaAtributo1 < 1 || escolhaAtributo1 > 7 || escolhaAtributo2 < 1 || escolhaAtributo2 > 7){
      printf("Número não corresponde a um atributo. Por favor, escolha um número entre 1 e 7.\n");
      return 0;
    }else{
      printf("\n--- Comparando as cartas ---\n");//Mostra as comparações escolhidas
    }

    switch (escolhaAtributo1)
    {
    case 1:
      printf("-- Atributo: População --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.0f %s\n", nomecidadeA01, populacaoA01, "habitantes");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.0f %s\n", nomecidadeB01, populacaoB01, "habitantes");// Mostra o valor do atributo para a carta 2
      comparação1A = populacaoA01;
      comparação1B = populacaoB01;
      break;
    case 2:
      printf("-- Atributo: Área --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.0f %s\n", nomecidadeA01, areaA01, "km²");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.0f %s\n", nomecidadeB01, areaB01, "km²");// Mostra o valor do atributo para a carta 2
      comparação1A = areaA01;
      comparação1B = areaB01;
      break;
    case 3:
      printf("-- Atributo: PIB --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, pibA01, "Bilhões de Reais");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, pibB01, "Bilhões de Reais");// Mostra o valor do atributo para a carta 2
      comparação1A = pibA01;
      comparação1B = pibB01;
      break;
    case 4:
      printf("-- Atributo: Pontos turísticos --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.0f %s\n", nomecidadeA01, pontoturA01, "pontos turísticos");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.0f %s\n", nomecidadeB01, pontoturB01, "pontos turísticos");// Mostra o valor do atributo para a carta 2
      comparação1A = pontoturA01;
      comparação1B = pontoturB01;
      break;
    case 5:
      printf("-- Atributo: Densidade demográfica --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, densidadepopA01, "hab/Km²");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, densidadepopB01, "hab/Km²");// Mostra o valor do atributo para a carta 2
      comparação1A = densidadepopA01;
      comparação1B = densidadepopB01;
      break;
    case 6:
      printf("-- Atributo: PIB per capita --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, pibpercapitaA01, "Reais");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, pibpercapitaB01, "Reais");// Mostra o valor do atributo para a carta 2
      comparação1A = pibpercapitaA01;
      comparação1B = pibpercapitaB01;
      break;
    case 7:
      printf("-- Atributo: Super poder --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, superPoderA01, "pontos");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, superPoderB01, "pontos");// Mostra o valor do atributo para a carta 2
      comparação1A = superPoderA01;
      comparação1B = superPoderB01;
      break;
    default:
      printf("Número não corresponde a um atributo.\n");
      break;
    }

    switch (escolhaAtributo2)
    {
    case 1:
      printf("-- Atributo: População --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.0f %s\n", nomecidadeA01, populacaoA01, "habitantes");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.0f %s\n", nomecidadeB01, populacaoB01, "habitantes");// Mostra o valor do atributo para a carta 2
      comparação2A = populacaoA01;
      comparação2B = populacaoB01;
      break;
    case 2:
      printf("-- Atributo: Área --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.0f %s\n", nomecidadeA01, areaA01, "km²");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.0f %s\n", nomecidadeB01, areaB01, "km²");// Mostra o valor do atributo para a carta 2
      comparação2A = areaA01;
      comparação2B = areaB01;
      break;
    case 3:
      printf("-- Atributo: PIB --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, pibA01, "Bilhões de Reais");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, pibB01, "Bilhões de Reais");// Mostra o valor do atributo para a carta 2
      comparação2A = pibA01;
      comparação2B = pibB01;
      break;
    case 4:
      printf("-- Atributo: Pontos turísticos --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.0f %s\n", nomecidadeA01, pontoturA01, "pontos turísticos");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.0f %s\n", nomecidadeB01, pontoturB01, "pontos turísticos");// Mostra o valor do atributo para a carta 2
      comparação2A = pontoturA01;
      comparação2B = pontoturB01;
      break;
    case 5:
      printf("-- Atributo: Densidade demográfica --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, densidadepopA01, "hab/Km²");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, densidadepopB01, "hab/Km²");// Mostra o valor do atributo para a carta 2
      comparação2A = densidadepopB01-densidadepopA01;
      comparação2B = densidadepopA01-densidadepopB01;
      break;
    case 6:
      printf("-- Atributo: PIB per capita --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, pibpercapitaA01, "Reais");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, pibpercapitaB01, "Reais");// Mostra o valor do atributo para a carta 2
      comparação2A = pibpercapitaA01;
      comparação2B = pibpercapitaB01;
      break;
    case 7:
      printf("-- Atributo: Super poder --\n");//Mostra o atributo escolhido para comparação
      printf("- Carta 1 - %s: %.2f %s\n", nomecidadeA01, superPoderA01, "pontos");// Mostra o valor do atributo para a carta 1
      printf("- Carta 2 - %s: %.2f %s\n", nomecidadeB01, superPoderB01, "pontos");// Mostra o valor do atributo para a carta 2
      comparação2A = superPoderA01;
      comparação2B = superPoderB01;
      break;
    default:
      printf("Número não corresponde a um atributo.\n");
      break;
    }

    //cálculo da somatória dos atributos escolhidos para comparação
    float somaA = comparação1A + comparação2A;
    float somaB = comparação1B + comparação2B;
    printf("\n--- Resultado da comparação ---\n");//Mostra o resultado da comparação
    printf("- Carta 1 - %s: %.2f pontos\n", nomecidadeA01, somaA);// Mostra a pontuação total da carta 1
    printf("- Carta 2 - %s: %.2f pontos\n", nomecidadeB01, somaB);// Mostra a pontuação total da carta 2

    //resultado final
    if (somaA > somaB){
      printf("\nA carta 1 - %s é a vencedora! Parabéns!\n", nomecidadeA01);// Mostra a carta vencedora
    }else if (somaB > somaA){
      printf("\nA carta 2 - %s é a vencedora! Parabéns!\n", nomecidadeB01);// Mostra a carta vencedora
    }else{
      printf("\nAs cartas empataram! Que disputa acirrada!\n");// Mostra mensagem de empate
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
    scanf("%f", &populacaoA01);

    printf("Qual a área da cidade?(km²)\n");// Perguntar a área da cidade
    scanf("%f", &areaA01);

    printf("Qual o PIB da cidade?(Bilhões de Reais)\n");// Perguntar o PIB da cidade
    scanf("%f", &pibA01);

    printf("Quantos pontos turísticos tem a cidade?\n");// Perguntar os pontos turísticos da cidade
    scanf("%f", &pontoturA01);

    printf("\nAgora vamos configurar a segunda carta:\n\n");// Perguntar os dados da carta 2

    printf("Qual a primeira letra do nome do estado?\n");// Perguntar a primeira letra do estado
    scanf("%s", &estadoB);

    printf("Qual o código da carta?\n");// Perguntar o código da carta
    scanf("%s", codigoB);

    printf("Qual o nome da cidade?\n");// Perguntar o nome da cidade
    scanf("%s", nomecidadeB01);

    printf("Qual a população da cidade?\n");// Perguntar a população da cidade
    scanf("%f", &populacaoB01);

    printf("Qual a área da cidade?(km²)\n");// Perguntar a área da cidade
    scanf("%f", &areaB01);

    printf("Qual o PIB da cidade?(Bilhões de Reais)\n");// Perguntar o PIB da cidade
    scanf("%f", &pibB01);

    printf("Quantos pontos turísticos tem a cidade?\n");// Perguntar os pontos turísticos da cidade
    scanf("%f", &pontoturB01);

    // Área para exibição dos dados da cidade

    printf("\n--- Carta 1 ---\n");// Mostrar os dados da carta 1
    printf("- Estado %s\n", estadoA);// Mostrar a primeira letra do estado
    printf("- Código %s\n", codigoA);// Mostrar o código da carta
    printf("- Cidade: %s\n", nomecidadeA01);// Mostrar o nome da cidade
    printf("- População: %f habitantes\n", populacaoA01);// Mostrar a população da cidade
    printf("- Área: %.2f km²\n", areaA01);// Mostrar a área da cidade
    printf("- PIB: R$%.2f Bilhões\n", pibA01);// Mostrar o PIB da cidade
    printf("- Pontos turísticos: %f\n", pontoturA01);// Mostrar os pontos turísticos da cidade
    printf("- Densidade populacional: %.2f hab/Km²\n", densidadepopA01);//mostra a densidade populacional da cidade
    printf("- PIB per capita: R$%.2f\n", pibpercapitaA01);//mostra o PIB per capita da cidade
    printf("- O Super Poder é: %.2f \n", superPoderA01);//mostra o Super Poder da cidade

    printf("\n--- Carta 2 ---\n");// Mostrar os dados da carta 2
    printf("- Estado %s\n", estadoB);// Mostrar a primeira letra do estado
    printf("- Código %s\n", codigoB);// Mostrar o código da carta
    printf("- Cidade: %s\n", nomecidadeB01);// Mostrar o nome da cidade
    printf("- População: %f habitantes\n", populacaoB01);// Mostrar a população da cidade
    printf("- Área: %.2f km²\n", areaB01);// Mostrar a área da cidade
    printf("- PIB: R$%.2f Bilhões\n", pibB01);// Mostrar o PIB da cidade
    printf("- Pontos turísticos: %f\n", pontoturB01);// Mostrar os pontos turísticos da cidade
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

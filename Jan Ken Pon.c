#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhaJogador, escolhaComputador;

    srand(time(0));//inicializa o randomizador

    //página inicial do jogo, menu de escolhas

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    //gera a escolha do computador
    escolhaComputador = rand() %3 + 1;

    //Demonstração das escolhas
    printf("Jogador 1 escolheu: ");
    switch (escolhaJogador)
    {
    case 1:
        printf("Pedra");
        break;
    case 2:
        printf("Papel");
        break;
    case 3:
        printf("Tesoura");
        break;
    default:
        printf("Escolha inválida");
        break;
    }
    printf("\nJogador 2 escolheu: ");
    switch (escolhaComputador)
    {
    case 1:
        printf("Pedra");
        break;
    case 2:
        printf("Papel");
        break;
    case 3:
        printf("Tesoura");
        break;
    default:
        printf("Escolha inválida");
        break;
    }

    printf("\n\n");

    //lógica de comparação

    if (escolhaJogador == escolhaComputador)
    {
        printf("Empate !");
    }else
    {
        printf("Jogador ");
    }
    

    if (escolhaJogador == 1)
    {
        if (escolhaComputador == 2)
        {
            printf("2 ganha!");
        }
        if (escolhaComputador == 3)
        {
            printf("1 ganha!");
        }        
    }

    if (escolhaJogador == 2)
    {
        if (escolhaComputador == 1)
        {
            printf("1 ganha!");
        }
        if (escolhaComputador == 3)
        {
            printf("2 ganha!");
        }        
    }

    if (escolhaJogador == 3)
    {
        if (escolhaComputador == 1)
        {
            printf("2 ganha!");
        }
        if (escolhaComputador == 2)
        {
            printf("1 ganha!");
        }        
    }
    
    
    printf("\n\n\n");
    return 0;
}
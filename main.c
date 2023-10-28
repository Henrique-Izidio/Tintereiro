#include <stdio.h>
#include "./src/game.h"
#include "./src/tool_box.h"

#define COR_AMARELA "\x1b[33m"
#define COR_AZUL "\x1b[34m"
#define COR_VERMELHA "\x1b[31m"
#define COR_VERDE "\x1b[32m"
#define COR_MAGENTA "\x1b[35m"
#define COR_CYAN "\x1b[36m"
#define RESET_COR "\x1b[0m"

int main() {
    void Menu();
    void introduc();
    int Dificuldade();
    void clearScreen();
    void setAnsi();
    void game();

    setAnsi();

    //introduc();
    int escolha;
    while (1) {
       Menu();
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                clearScreen();
                ;
                int dif = Dificuldade();
                printf("\nIniciando o jogo...\n");
                clearScreen();
                game(dif);
                break;
            case 2:
                clearScreen();
                printf(COR_VERDE "\nExibindo os créditos...\n"RESET_COR);
                printf(COR_MAGENTA"\n JOGO FEITO PELO PROFESSOR HUGO ROBERTO PINHEIRO, \n ASSIM COMO O TRABALHO PARA A TURMA 2023.1 DE CIÊNCIDA DA COMPUTAÇÃO"RESET_COR);
                printf(COR_MAGENTA"\n QUEM ESCREVEU O CÓDIGO.....HENRIQUE IZÍDIO, ISAIAS FERNANDES E PHELIPPE \n \n "RESET_COR);
                getchar();
                clearScreen();
                break;
            case 3:
                clearScreen();
                printf(COR_CYAN  "\nSaindo do jogo. Até logo!\n"RESET_COR);
                return 0;
            default:
                printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
                break;
        }
    }

    return 0;
}

void introduc() {
    printf(COR_AMARELA "\n \t \t \t AS CASAS ESTÃO DISPUTANDO FEROZMENTE PELO TRONO\n " RESET_COR);
    getchar();
    printf(COR_AZUL "\t \t \t RESTA VOCÊ, DONO DE TODOS OS SEGREDOS, MANIPULAR VASSALOS E NOBRES PARA CHEGAR A UM RESULTADO QUE, APESAR DE NÃO AGRADAR A TODOS, TRARÁ PAZ\n" RESET_COR);
    getchar();
    printf(COR_VERMELHA "\t \t \t ENTRETANTO, O TEMPO É ESCASSO E ALGUMAS DAS SUAS PRECIOSAS INFORMAÇÕES TARDAM A CHEGAR.\n" RESET_COR);
    getchar();
    printf(COR_VERDE "\t \t \t VOCÊ PRECISARÁ TRABALHAR COM INCERTEZAS POR UM MOMENTO.\n" RESET_COR);
    getchar();
    printf(COR_MAGENTA "\t \t \t E QUANDO AS INFORMAÇÕES CHEGAREM... TALVEZ SEJA TARDE DEMAIS PARA REVERTER A SITUAÇÃO.\n" RESET_COR);
    getchar();
    printf(COR_CYAN "\t \t \t A GUERRA PODE ESTAR MAIS PERTO DO QUE NUNCA E A ÚNICA PESSOA CAPAZ DE EVITÁ-LA É VOCÊ.\n" RESET_COR);
    getchar();
    clearScreen();
}

void Menu() {
    void clearScreen();

    //clearScreen();
    printf("\n");
    printf("\x1b[31m");
    printf("******** REGICIDA ********\n");
    printf("\x1b[0m");
    printf(COR_AMARELA "1. Jogar\n"RESET_COR);
    printf(COR_VERDE "2. Créditos\n"RESET_COR);
    printf(COR_MAGENTA "3. Sair\n"RESET_COR);
    printf("\x1b[31m");
    printf("*******************\n");
    printf("\x1b[0m");
    printf("Escolha uma opção: ");
}

int Dificuldade(){
    int dif = 0;
    while(dif != 1 && dif != 2 && dif != 3){
        printf("SELECIONE UMA DIFICULDADE\n");
        printf("1 - Dificil\n");
        printf("2 - Normal\n");
        printf("3 - Facil\n");
        scanf("%d", &dif);
    }
    return dif;
}
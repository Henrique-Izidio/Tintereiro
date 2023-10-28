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
                printf(COR_VERDE "\nExibindo os creditos...\n"RESET_COR);
                printf(COR_MAGENTA"\n JOGO FEITO PELO PROFESSOR HUGO ROBERTO PINHEIRO, \n ASSIM COMO O TRABALHO PARA A TURMA 2023.1 DE CIENCIDA DA COMPUTAÇAO"RESET_COR);
                printf(COR_MAGENTA"\n QUEM ESCREVEU O CODIGO.....HENRIQUE IZIDIO, ISAIAS FERNANDES E PHELIPPE \n \n "RESET_COR);
                getchar();
                clearScreen();
                break;
            case 3:
                clearScreen();
                printf("COMANDOS DO JOGO\n");
                printf("Fase de Expanção\n");
                printf("1 - Para posicionar uma peça no tabuleiro digite a coordernada onde quer inseri-la\n");
                printf("    - Exemplo: \"A1\", sem aspas.");
                printf("2 - E possivel mover o tabuleiro para deixa-lo da melhor forma possivel. Para isso use os seguintos comandos\n");
                printf("    - MVD: Move para a direita\n");
                printf("    - MVE: Move para a esquerda\n");
                printf("    - MVC: Move para a cima\n");
                printf("    - MVB: Move para a baixo\n");
                printf("Apenas é possivel mover o tabuleiro comleto. Só é possivel mover para determinada direção caso a borda da mesma esteja desocupada.\n\n");
                
                printf("Fase de Intriga:\n");
                printf("1 - Para realizar a troca de duas peças digite as coordenadas de ambas as peças uma seguida da outra.\n");
                printf("    - Exemplo: \"A1B2\", sem aspas.\n\n");

                printf("Durante ambas as fases é possivel retornar ao menu com o comando \"SAIR\", sem aspas.\n");
                printf("E indiferente escrever os comandos com letras maiusculas ou minusculas\n");
                printf("Porem as coordenadas devem ser escritas com a letra primeiro e em seguida o numero.\n");

                getchar();

                break;
            case 4:
                clearScreen();
                printf(COR_CYAN  "\nSaindo do jogo. Ate logo!\n"RESET_COR);
                return 0;
            default:
                printf("\nOpção invalida. Por favor, escolha uma opcao valida.\n");
                break;
        }
    }

    return 0;
}

void Menu() {
    void clearScreen();

    //clearScreen();
    printf("\n");
    printf("\x1b[31m");
    printf("******** REGICIDA ********\n");
    printf("\x1b[0m");
    printf(COR_AMARELA "1. Jogar\n"RESET_COR);
    printf(COR_VERDE "2. Creditos\n"RESET_COR);
    printf(COR_VERMELHA "3. Tutorial\n"RESET_COR);
    printf(COR_MAGENTA "4. Sair\n"RESET_COR);
    printf("\x1b[31m");
    printf("*******************\n");
    printf("\x1b[0m");
    printf("Escolha uma opcao: ");
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
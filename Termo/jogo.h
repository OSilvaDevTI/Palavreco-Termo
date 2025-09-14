#ifndef JOGO_H
#define JOGO_H

#include <stdio.h>
#include <conio.c>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

void jogo(){
    char tentativas[6];
    char palavras[10][6] = {
        "ruela", "nuvem", "prato", "fazer", "termo",
        "ideia", "tempo", "veloz", "carro", "comer"
    };
    
    int jogarNovamente = 1;

    while (jogarNovamente) {
        system("cls");
        srand(time(NULL));
        int r = rand() % 10;
        const char* palavra = palavras[r];
        int tentativasRestantes = 6;
        int venceu = 0;

        while (tentativasRestantes > 0) {
            printf("\nTentativas restantes: %d\n", tentativasRestantes);
            printf("Digite uma palavra de 5 letras: ");
            scanf("%s", &tentativas);

            // Se acertou a palavra inteira, encerra
            if (strcmp(tentativas, palavra) == 0) {
                textbackground(GREEN);
                textcolor(BLACK);
                for (int i = 0; i < 5; i++) {
                    printf(" %c ", tentativas[i]);
                }
                textbackground(BLACK);
                textcolor(WHITE);
                printf("\nParabens! Voce acertou!\n");
                venceu = 1;
                break;
            }

            // Comparação letra por letra
            for (int i = 0; i < 5; i++) {
                if (tentativas[i] == palavra[i]) {
                    // letra correta na posição certa (Verde)
                    textbackground(GREEN);
                    textcolor(BLACK);
                    printf(" %c ", tentativas[i]);
                } else {
                    int existe = 0;
                    for (int j = 0; j < 5; j++) {
                        if (tentativas[i] == palavra[j]) {
                            existe = 1;
                            break;
                        }
                    }
                    if (existe) {
                        // letra existe em posição diferente (Amarelo)
                        textbackground(YELLOW);
                        textcolor(BLACK);
                        printf(" %c ", tentativas[i]);
                    } else {
                        // letra não existe (Vermelho)
                        textbackground(RED);
                        textcolor(WHITE);
                        printf(" %c ", tentativas[i]);
                    }
                }
                // Resetar cor
                textbackground(BLACK);
                textcolor(WHITE);
            }
            printf("\n");

            tentativasRestantes--;
        }

        // Se não venceu após 6 tentativas
        if (!venceu) {
            printf("\nVoce perdeu! A palavra correta era: %s\n", palavra);
        }

        // Pergunta se quer jogar de novo ou voltar ao menu
        char opcao;
        printf("\nDeseja jogar novamente (s/n)? ");
        scanf(" %c", &opcao);

        if (opcao == 's' || opcao == 'S') {
            jogarNovamente = 1;
        } else {
            jogarNovamente = 0;
            printf("\nVoltando ao menu principal...\n");
        }
    }
}

#endif

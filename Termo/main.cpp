#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "jogo.h"
#include "menu.h"

int main(){
    bool botaoVoltar = false, menu = false;
    char voltar;
    int opcao;
    
    while(menu == false)
    {    
        system("cls");
        titulo();
        
        gotoxy(50, 15);
        cprintf("Selecione sua opcao: ");
        scanf("%d", &opcao);    
        system("cls");
        
        switch(opcao)
        {    
            case 1:
        		system("cls");
                jogo();
            break;
            
            case 2:
        		system("cls");
                creditos();
                voltar = getch();
                    if (voltar == '1')
                    {
        				system("cls");
                        botaoVoltar = 1;
                        break;
                    }
            break;
            
            case 3:
                como_jogar();
                voltar = getch();
        		system("cls");

                    if (voltar == '1')
                    {
        				system("cls");
                        botaoVoltar = 1;
                        break;
                    }
            break;
            
            case 4:
                gotoxy(50, 15);
                cprintf("Adeus!");
                menu = true;
            break;
        }
    }
    return 0;
}

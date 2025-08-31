#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "jogo.h"
#include "menu.h"

int main(){
	bool botaoVoltar, menu;
	char voltar;
	int opcao;
	
	while(menu == false)
	{	
		clrscr();
		titulo();
		
		gotoxy(50, 15);
		cprintf("Selecione sua opcao: ");
		scanf("%d", &opcao);	
		clrscr();
		
		switch(opcao)
		{	
			case 1:
				clrscr();
				jogo();
			break;
			
			case 2:
				clrscr();
				creditos();
				voltar = getch();
					if (voltar == '1')
					{
						clrscr();
						botaoVoltar == 1;
						break;
					}
			break;
			
			case 3:
				como_jogar();
				voltar = getch();
				clrscr();
					if (voltar == '1')
					{
						clrscr();
						botaoVoltar == 1;
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

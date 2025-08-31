#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void titulo(){
	gotoxy(47, 3);
	cprintf(" ___ ___ ___ _   _  _  ");
	gotoxy(47, 4);
	cprintf("|_ _| __| o \\ \\_/ |/ \\ ");
	gotoxy(47, 5);
	cprintf(" | || _||   / \\_/ ( o )");
	gotoxy(47, 6);
	cprintf(" |_||___|_|\\\\_| |_|\\_/ ");	

	gotoxy(52, 9);
	cprintf("[1] - Jogar");
	gotoxy(52, 10);
	cprintf("[2] - Creditos");
	gotoxy(52, 11);
	cprintf("[3] - Como jogar");
	gotoxy(52, 12);
	cprintf("[4] - Sair");
}

void creditos(){
	gotoxy(47, 3);
	cprintf("  __ ___ ___ __  _ ___ _  __ ");
	gotoxy(47, 4);
	cprintf(" / _| o \\ __|  \\| |_ _/ \\/ _|");
	gotoxy(47, 5);
	cprintf("( (_|   / _|| o ) || ( o )_ \\");
	gotoxy(47, 6);
	cprintf(" \\__|_|\\\\___|__/|_||_|\\_/|__/");	

	gotoxy(47, 9);
	cprintf("[Programacao] - Felipe Silva");
	gotoxy(47, 10);
	cprintf("[Coloracao] - Felipe Placo");
	gotoxy(47, 11);
	cprintf("[Design] - Davi Bueno");
	gotoxy(52, 14);
	cprintf("[1] - Voltar");
}

void como_jogar(){
	gotoxy(40, 3);
	cprintf("  __ _  _   _  _      _  _   __  _  ___ ");
	gotoxy(40, 4);
	cprintf(" / _/ \\| \\_/ |/ \\    | |/ \\ / _|/ \\| o \\");
	gotoxy(40, 5);
	cprintf("( (_ o ) \\_/ ( o )  _| ( o ) |_ | o |   /");
	gotoxy(40, 6);
	cprintf(" \\__\\_/|_| |_|\\_/  \\__/ \\_/ \\__/_n_|_|\\\\");	

	gotoxy(10, 9);
	cprintf("Objetivo: Adivinhar a palavra secreta de 5 letras em ate 6 tentativas.");
	gotoxy(21, 10);
	cprintf("Regras:");
	gotoxy(22, 11);
	cprintf("- Digite uma palavra valida em portugues e pressione Enter.");
	gotoxy(22, 11);
	cprintf("- As letras mudam de cor para dar dicas:");
	gotoxy(22, 12);
	cprintf("- Verde: Letra correta na posicao certa.");
	gotoxy(22, 13);
	cprintf("- Amarelo: Letra correta, mas posicao errada.");
	gotoxy(10, 15);
	cprintf("Dica: Use as cores para ajustar suas proximas tentativas.");
	gotoxy(52, 18);
	cprintf("[1] - Voltar");
}

#endif

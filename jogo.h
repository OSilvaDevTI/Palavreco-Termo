#ifndef JOGO_H
#define JOGO_H

#include <stdio.h>
#include <conio.c>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

void jogo(){
	//termo titulo jogo(Felipe e Davi)
	
	char tentativas[5];
	char palavras[10][6] = {
	"ruela", "nuvem", "prato", "fazer", "termo", "ideia", "tempo", "veloz", "carro", "comer"};
	srand(time(NULL));
	int r = rand()%10;
	const char* palavra = palavras[r];
  	int i;
  
	printf("Boa: ");
	scanf("%d", &i);
	
}

#endif

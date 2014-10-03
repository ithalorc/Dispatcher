#include <stdio.h>

int main(){

	FILE *fp;
	char chr;
	int indice;

	//Abertura do arquivo
	fp = fopen("/home/iconceicao/Projetos/Dispatcher/arquivo.txt","r");
	
	if(fp == NULL){
		printf("Arquivo não encontrado.");
		return -1;
	}
	
	// pega caracteres (0-9)
	while ((chr = getc(fp)) != EOF){
		if(chr != ',')
			printf("%c",chr);
	}

	// Fecha arquivo
	fclose(fp);
	
	return -1;
	
}

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
	
	while ((chr = getc(fp)) != EOF){
		if(chr != ',')
			printf("%c",chr);
	}

	fclose(fp);
	
	return -1;
	
}

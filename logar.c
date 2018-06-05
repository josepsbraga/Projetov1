#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int logar(){
	char login[50], senha[50];
	usuario user;
	FILE *arquivo;
	while(1){
		system("clear");
		arquivo = fopen("usuario.dat", "r");
		if(arquivo == NULL){
			if(cadastrar()){
				continue;
			}
			else{
				return 0;
			}
		}
		else{
			printf("Digite seu login: \n");
			scanf("\n%[^\n]s", &login);
			printf("Digite sua senha: \n");
			scanf("\n%[^\n]s", &senha);
			fread(&user, sizeof(user),1, arquivo);
			if(ferror(arquivo)){
				printf("Erro ao ler no arquivo\n");
				return 0;
			}
			fclose(arquivo);
			if (!(strcmp(user.login, login) || strcmp(user.senha, senha))){
				return 1;
			}
			printf("\nUSUÁRIO OU SENHA INCORRETA!\n\n");
		}
	}
}
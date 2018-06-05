#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int cadastrar(){
	system("clear");
	usuario user;
	printf("Digite seu nome: \n");
	scanf("\n%[^\n]s",&user.nome);
	printf("Digite seu login: \n");
	scanf("\n%[^\n]s",&user.login);
	printf("Digite seu senha: \n");
	scanf("\n%[^\n]s",&user.senha);

	FILE *arquivo;

	arquivo = fopen("usuario.dat", "a+");
	if (arquivo == NULL){
		printf("ERRO ao abrir o arquivo\n");
		return 0;
        menu();
	}
	else{
		fwrite(&user, sizeof(user), 1, arquivo);
		if (ferror(arquivo))
		{
			printf("Erro ao escrever no arquivo\n");
			return 0;
            menu();
		}
		fclose(arquivo);
        menu();
	}
	system("clear");
	return 1;
}


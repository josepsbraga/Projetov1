#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int reservar(){
    system("clear");
    reserva pass;
	printf("Digite sua origemm: \n");
	scanf("\n%[^\n]s", &pass.origem);
	printf("Digite seu destino: \n");
	scanf("\n%[^\n]s", &pass.destino);
	printf("Digite a data de ida: \n");
	scanf("\n%[^\n]s", &pass.dataida);

	FILE *arquivo;

	arquivo = fopen("reserva.dat", "a+");
	if (arquivo == NULL){
		printf("ERRO ao abrir o arquivo\n");
		return 0;
        menu();
	}
	else{
		fwrite(&pass, sizeof(pass), 1, arquivo);
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


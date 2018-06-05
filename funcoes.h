typedef struct{
	char nome[100];
	char login[50];
	char senha[50];
}usuario;

typedef struct{
	char origem[100];
	char destino[50];
	char dataida[10];
}reserva;

int cadastrar();
int logar();
int reservar();
#include<stdio.h>
#include<string.h>

typedef struct{
	float preço;
	char modelo[50], cor[20], placa[7];
} tabela;
tabela x;
void menu(){
	printf("--------------------------------------Concessionária--------------------------------------\n");
	printf(" -------------------------  1- Inserir cadastro dos carros--------------------------------\n");
	printf("-------------------------  2 - Pesquisa pela cor do carro---------------------------------\n");
	printf("------------------------- 3 listagem em ordem alfabética pelo modelo ---------------------\n");
	printf("------------------------- 4 alteracção de dados pelo modelo ------------------------------\n");
	printf("------------------------------------  5 - sair -------------------------------------------\n");
	printf("\n");
	printf("Insira a ação que deseja realizar: ")
}

void cadastro(){
	printf("Insira o modelo do Carro: ")
}

int main(){
	int Am;
	while(Am!=5){
		menu();
		scanf("%i", &Am);
		switch(Am){
			case 1:cadastro();	break;
			case 2:	break;
			case 3:	break;
			case 4:	break;
			case 5:	break;
			default:	break;
		}
	}
}

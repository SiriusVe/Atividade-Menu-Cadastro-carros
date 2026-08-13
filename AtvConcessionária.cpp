#include<stdio.h>
#include<string.h>

int i;
typedef struct{
	float preco;
	char modelo[50], cor[20], placa[7];
} tabela;
tabela x[3];
void menu(){
	printf("--------------------------------------Concessionaria--------------------------------------\n");
	printf(" -------------------------  1- Inserir cadastro dos carros--------------------------------\n");
	printf("-------------------------  2 - Pesquisa pela cor do carro---------------------------------\n");
	printf("------------------------- 3 listagem em ordem alfabética pelo modelo ---------------------\n");
	printf("------------------------- 4 alteracção de dados pelo modelo ------------------------------\n");
	printf("------------------------------------  5 - sair -------------------------------------------\n");
	printf("\n");
	printf("Insira a acao que deseja realizar: ");
}

void cadastro(){
	for(i=0;i<=2;++i){
	printf("Insira o Modelo do Carro %i: ", i+1);
	scanf(" %s", &x[i].modelo);
	printf("Insira a Cor do Carro %i: ", i+1);
	scanf(" %s", &x[i].cor);
	printf("Insira a Placa do Carro %i: ", i+1);
	scanf(" %s", &x[i].placa);
	printf("Insira o preço do Carro %i: ", i+1);
	scanf(" %f", &x[i].preco);
	printf("\n");
	}
}

int main(){
	int Am;
	while(Am!=5){
		menu();
		scanf("%i", &Am);
		printf("\n");
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

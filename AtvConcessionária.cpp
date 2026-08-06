#include<stdio.h>
#include<string.h>

void menu(){
	printf("--------------------------------------Concessionária--------------------------------------\n");
	printf(" -------------------------  1- Inserir cadastro dos carros--------------------------------\n");
	printf("-------------------------  2 - Pesquisa pela cor do carro---------------------------------\n");
	printf("------------------------- 3 listagem em ordem alfabética pelo modelo ---------------------\n");
	printf("------------------------- 4 alteracção de dados pelo modelo ------------------------------\n");
	printf("------------------------------------  5 - sair -------------------------------------------\n");
	printf("\n");
}

int main(){
	int Am;
	while(Am!=5){
		menu();
	}
}

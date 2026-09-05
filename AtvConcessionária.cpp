#include<stdio.h>
#include<string.h>

int i;
typedef struct{
	float preco;
	char modelo[50], cor[20], placa[10];
} tabela;
void menu(){
	printf("--------------------------------------Concessionaria--------------------------------------\n");
	printf(" -------------------------  1- Inserir cadastro dos carros--------------------------------\n");
	printf("-------------------------  2 - Pesquisa pela cor do carro---------------------------------\n");
	printf("------------------------- 3 listagem em ordem alfabetica pelo modelo ---------------------\n");
	printf("------------------------- 4 alteracao de dados pelo modelo ------------------------------\n");
	printf("------------------------------------  5 - sair -------------------------------------------\n");
	printf("\n");
	printf("Insira a acao que deseja realizar: ");
}

void cadastro(tabela y[]){
	for(i=0;i<=2;++i){
	
	int c;
	while((c = getchar()) != '\n' && c!= EOF);
	
	printf("Insira o Modelo do Carro %i: ", i+1);
	fgets(y[i].modelo, 50 ,stdin);
	y[i].modelo[strcspn(y[i].modelo, "\n")] = '\0';
	
	printf("Insira a Cor do Carro %i: ", i+1);
	fgets(y[i].cor, 20, stdin);
	y[i].cor[strcspn(y[i].cor, "\n")] = '\0';
	
	
	printf("Insira a Placa do Carro %i: ", i+1);
	fgets(y[i].placa, 10, stdin);
	y[i].placa[strcspn(y[i].placa, "\n")] = '\0';
	
	printf("Insira o preco do Carro %i: ", i+1);
	scanf("%f", &y[i].preco);
	
	printf("\n");
	}
}

void PCor(tabela y[]){
	char pesq[20];
	int c;
	int flag = 0;
	while((c = getchar()) != '\n' && c!= EOF);
	printf("Insira a cor que deseja buscar: ");
	fgets(pesq, 20, stdin);
	pesq[strcspn(pesq, "\n")] = '\0';
	
	for(i=0;i<4;++i){
		
		if(strcmp(pesq, y[i].cor) == 0){
			flag = 1;
			printf("Carro %s encontrado\n", pesq);
			printf("Placa do carro: %s\n", y[i].placa);
			printf("Modelo do carro: %s\n", y[i].modelo);
			printf("Preco do carro: %f\n\n", y[i].preco);
		}
	}
	if (flag==0){
		printf("Não encontrado\n");
	}
}

int main(){
	int Am;
	tabela x[3];
	while(Am!=5){
		menu();
		scanf("%i", &Am);
		printf("\n");
		switch(Am){
			case 1:cadastro(x);	break;
			case 2:PCor(x);	break;
			case 3:	break;
			case 4:	break;
			case 5: break;
			default: printf("Comando inexistente\n\n");	break;
		}
	}
}

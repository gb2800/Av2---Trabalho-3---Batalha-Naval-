/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Gabriel Pontes Monteiro - matricula: 0050013431 
* Professor: Alex Salgado 
***************************************/


#include <stdio.h>

int main(){

	char adversario[5][5] = { {0, 0, 0, 0, 0},
							 {1, 1, 0, 0, 0},
							{0, 0, 1, 1, 0},
							{0, 1, 0, 0, 1},
							{0, 1, 1, 0, 0}};
	
	char campo[5][5];
	
	char nome[10];
	
	int pontos = 0, l, c, continuar = 1;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	for(l=0; l<5; l++){
             for(c=0; c<5; c++){
                      campo[l][c] = '*';
                      printf("%c", campo[l][c]);
             }
             printf("\n");
    }
	    
	
	while (continuar == 1){
		printf("Entre com as coordenadas: \n");
		printf("Numero da linha: ");
    	scanf("%d", &l);
    	printf("Numero da coluna: ");
    	scanf("%d", &c);
		
		
		if (adversario[l][c] == 1 ){
			pontos++;
			printf(" Bomba!! você ganhou 1 ponto \n\n");
			campo[l][c] = 'B';
		}		
		else {
			campo[l][c] = 'A';
			printf("Agua!!, que pena \n\n");
		}
		for(l=0; l<5; l++){
				for(c=0; c<5; c++){
					printf("%c" ,campo[l][c]);
				}
				printf("\n");
		}
		printf("Se deseja continuar digite 1: ");
		scanf("%d", &continuar);
	}
	
	printf("Olá %s \n", nome); 
	printf("você fez %d ponto(s). \n", pontos);	
		
return 0;						

}
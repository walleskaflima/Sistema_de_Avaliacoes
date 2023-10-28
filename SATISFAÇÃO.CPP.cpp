#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int resposta1, resposta2,resposta3;
    char tecla;

   printf("Questionario de avaliacao de Satisfacao do cliente, digite '+' para comecar...\n");

    while (1) {
        tecla = _getch();

        if (tecla == '+') {
            break; 
        }
    }

   
    printf("Questionario iniciado!\n");
	
	printf("1. Quao satisfeito voce ficou com o tema exposto do museu?(Digite um numero de 1 a 5, sendo 1 muito insatisfeito e 5 muito satisfeito):  ");
	scanf("%d", &resposta1);
	
	printf("2. Quao satisfeito voce ficou com o espaco utilizado para exposicao?(Digite um nuero de 1 a 5, sendo 1 muito insatisfeito e 5 muito satisfeito): ");
	scanf("%d", &resposta2);
	
	printf("3. Quais as chances de voce recomendar nosso museu a um amigo? (Digite um numero de 1 a 5, sendo 1 nao recomendo e 5 irei recomendar): ");
	scanf("%d", &resposta3);
	
	
	printf("\nObrigado por responder ao questionario!\n");
	
	FILE *pim;
	pim = fopen("pim.csv", "a");
	fprintf(pim, "\nResposta 1: %d\n", resposta1);
	fprintf(pim, "\nResposta 2: %d\n", resposta2);
	fprintf(pim, "\nResposta 3: %d\n", resposta3);
	
	
	return 0;

	
}
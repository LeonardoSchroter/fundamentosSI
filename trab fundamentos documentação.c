#include<stdio.h>
main(){
	/** variavel que representa o número do dia que será informado*/
	int num;
	printf("digite um numero de 1 a 7\n");
	scanf("%d",&num);
	
	/** rotina que a partir do num retorna o dia da semana */
	switch(num){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terca");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		
		default:
			printf("Sabado");
			
	}
	getch();
}



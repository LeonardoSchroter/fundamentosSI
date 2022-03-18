#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade;
	float tempoSono;
	printf("Qual sua idade? ");
	scanf("%d", &idade);
	tempoSono = idade / 3;
	
	printf("Você ja dormiu %.0f anos\n", tempoSono);
	return 1;
}

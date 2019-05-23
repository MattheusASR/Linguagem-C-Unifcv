#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int i;
    int maior;
    int menor;
    
    for(i=0; i<=9; i++){
		printf("digite os valores do vetor: ", i+1);
		scanf("%d", &x[i]);
	}
	
	maior = x[0];
	for (i = 0; i <=10; i++){
		if (x[i] > maior) {
			maior = x[i];
		}
	}
	
	menor = x[0];
	for (i = 0; i <=10; i++){
		if (x[i] < menor) {
			menor = x[i];
		}
	}
	
	printf(" maior valor: %d", maior);
	printf("\n menor valor: %d", menor);
	
    return 0;
}
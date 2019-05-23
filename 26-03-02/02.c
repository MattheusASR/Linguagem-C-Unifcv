#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x[15];
	int i;
	int p=0;
	int n=0;
	int somaP=0;
	int somaN=0;
	
	for(i = 0; i<=14; i++){
		printf("digite os valores do vetor: ", i+1);
		scanf("%f", &x[i]);
	}

	
	for(i = 0; i<=14; i++){
		if (x[i] >= 0)
		{
		p++; somaP = somaP + x[i];
	    }	
		else
		{ 
		n++; somaN= somaN + x[i];
		}
	}
	
	printf("numeros positivos: %d \n", p);
	printf("numeros negativos: %d \n", n);
	printf("a soma positiva eh: %d \n", somaP);
	printf("a soma negativa eh: %d \n", somaN);
  
    return 0;
}
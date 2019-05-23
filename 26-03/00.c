#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vet[8], i;
	int x, y, soma = 0;

for(i=0; i<7; i++)
{
printf("Digite os dados do vetor:", i+1);
scanf("%d", &vet[i]);
}

printf("Digite o valor de x: ");
scanf("%d", &x);


printf("Digite o valor de y: ");
scanf("%d", &y);


for ( i = x; i <= y; i++){
printf("%d \n" ,vet[i]);

soma = soma + vet[i];
}
printf("Resultado: %d", soma);

return 0;
}
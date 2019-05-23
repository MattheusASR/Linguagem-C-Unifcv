#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x[6];
	int i;
	
	for ( i = 0; i < 6; i++){
		printf("Digite o valor de x[%d]: ",i);
		scanf("%d", &x[i]);
	}
	
	printf("\n resultado: ");
	for(i = 0; i <=5; i++){
		printf("%d", x[i]);
	}
    return 0;
}
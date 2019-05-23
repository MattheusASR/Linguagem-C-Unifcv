#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x[6];
	int i,j;
	
	for ( i = 0; i < 6; i++){
		printf("Digite o valor de x[%d]: ",i);
		scanf("%d", &x[i]);
	}
	
	printf("\n resultado: ");
	for(j = 5; j >=0; j--){
		printf("%d", x[j]);
	}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[5], i;
	float media = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("Digite o %d valor: ", (i+1));
		scanf("%d", &num[i]);
		media = media + num[i];
	}
	

	
	for(i = 0; i <= 4 ; i++)
	{
		printf("%d \n", num[i]);
		
	}
		printf("Media eh %f: \n", media / 5); 
    return 0;
}
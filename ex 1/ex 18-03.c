#include <stdio.h>
#include <stdlib.h>


   int main(){

    int a = 0;
    int b;
    
    printf("digite o valor: ");
    scanf("%d", &b);
    
    
    while( b >= a )
	{
    	printf("%d \n", b);
    	b--;
	}

	  return 0;
}

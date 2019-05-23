#include <stdio.h>
#include <stdlib.h>

 int main(){

    int a = 0;
    int b;
    
    printf("digite o valor: ");
    scanf("%d", &b);
    
    
    while( a <= b )
	{
    	if (a % 2 == 0)
        printf ("%d\n", a);
        a++;
	}

	  return 0;
}


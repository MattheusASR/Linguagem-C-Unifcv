#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vProduto;
    printf("Quanto custa o Produto? ");
    scanf("%d", &vProduto);
    
    int desconto = vProduto -(vProduto * 0.1);
    int parcelas = vProduto / 3;
    int comissaoVista = desconto * 0.5;
    int comissaoParcelado = 
	vProduto * 0.5;
    
    printf("\n Valor do Produto: ", vProduto);
    printf("\n Valor das parcelas: ", parcelas);
    printf("\n Valor A Vista: ", desconto);
    printf("\n Valor com comissao a vista: ", comissaoVista);
    printf("\n Valor com comissao a prazo: ", comissaoParcelado);
	return 0;
}
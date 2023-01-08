#include <stdio.h>

int main()
{
    int qtds, qtd, i, clientes=0;
    char resp;
    float valor, compra, pago, faturamento=0;
    
    printf("Chegou cliente (s/n)? ");
    scanf("%c", &resp);
    
    while (resp == 's') {
        
        printf("Quantos tipos de produtos? Digite: ");
        scanf("%d", &qtds);
        compra = 0;
        
        for (i=1; i<=qtds; i++) {
            printf("Quantos do %d produto? Digite: ", i);
            scanf("%d", &qtd);
            printf("Valor do %d produto? Digite: ", i);
            scanf("%f", &valor);
            
            compra += qtd + valor;
        }
            printf("Total da compra: R$ %.2f", compra);
            printf("Digite o valor pago: ");
            scanf("%f", &pago);
            
            printf("Troco.................: R$ %.2f", pago - compra);
        
            faturamento += compra;
            clientes++;
        
            printf("Novo cliente (s/n): ");
            scanf("%c", &resp);
    }
    printf("\nFaturamento: R$ %.2f", faturamento);
    printf("\nClientes........: %d", clientes);
    printf("\nMedia......: R$ %.2f", faturamento/clientes);

    
    
}


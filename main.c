#include <stdio.h>

int calcularExpressao(int termos) {
    int i, res=1, numberador=1, denominador=2;
    
    
    for (i=2; i<=termos; i++) {
        if (i % 2 == 0)
            res += numberador / denominador;
        else 
            res -= numberador / denominador;
        
    }
}   

int main()
{
    int termos, s;
    
    printf("Digite a quantidade de termos: ");
    scanf("%d", &termos);
    
    printf("S = %d!", s);
    return 0;
}

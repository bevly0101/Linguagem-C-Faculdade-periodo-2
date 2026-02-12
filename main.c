#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ENTRADA
    float preco, reajuste, totalSemDesconto;
    float totalComDesconto, desconto;
    int quantidade;

    printf("DADOS DE ENTRADA DA MERCADORIA: \n");

    printf("Preco(R$):");
    scanf("%f", &preco);

    printf("Quantidade (unidade):");
    scanf("%i", &quantidade);

    printf("Reajuste (%%):");
    scanf("%f", &reajuste);

    //PROCESSAMENTO:
    totalSemDesconto = preco * quantidade;
    desconto = reajuste / 100 * totalSemDesconto;
    totalComDesconto = totalSemDesconto - desconto;

    //SAÍDA
    printf("Total a pagar (0 %% OFF): R$ %.2f\n",
           totalSemDesconto);
    printf("Total a pagar (-%.2f %% OFF): R$ %.2f\n",
           reajuste, totalComDesconto);
    printf("Desconto Ganho: -R$ %.2f",desconto);
    return 0;
}

#include <stdio.h>
 
int main() {
    int codp, nump,codp2, nump2;
    float preco, preco2;
    scanf("%d%d%f%d%d%f",&codp,&nump,&preco,&codp2,&nump2,&preco2);
    printf("VALOR A PAGAR: R$ %.2f\n", (nump*preco)+(nump2*preco2));
    return 0;
}
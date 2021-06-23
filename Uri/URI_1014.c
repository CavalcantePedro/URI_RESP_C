#include <stdio.h>

int main()
{
    int senha;
    scanf("%d", &senha);
    while (senha != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }
    if (senha == 2002)
    {
        printf("Acesso Permitido\n");
    }
    
    return 0;
}
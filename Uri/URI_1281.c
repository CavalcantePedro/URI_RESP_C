#include <stdio.h>
#include <string.h>

int main(void)
{
    int n,m,i,p,quant;
    double total;
    scanf("%d", &n);
    while (n--)
    {
        char produto[55][55], cmp[55];
        double preco[55];
        total = 0;

        scanf("%d", &m);

        for (i = 0; i < m; i++)
        {
            scanf("%s %lf", produto[i], &preco[i]);
        }

        scanf("%d", &p);

        while (p--)
        {
            scanf("%s %d", cmp, &quant);

            
            
            for (i = 0; i < m; i++)
            {
                if (strcmp(cmp, produto[i]) == 0)
                {
                    
                    total += quant * preco[i];
                    
                }
            }
        }
        
        printf("R$ %.2lf\n", total);
        
    }
    
    return 0;
} 
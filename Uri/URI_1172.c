#include <stdio.h>

void TrocaValoresArray(int *a, int quant)
{
    int i;
    for ( i = 0; i < quant; i++)
    {
        if(a[i] <= 0)
        {
            a[i] = 1;
        }
    }
    
}

int main ()
{
    int array[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    TrocaValoresArray(array,10);
    for ( i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n",i, array[i]);
    }
    
    return 0;
}
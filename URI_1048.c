#include <stdio.h>
 
int main() {
 
    double sal,nsal;
    scanf("%lf",&sal);
    if (sal >= 0 && sal<= 400)
    {
       nsal = (sal*15)/100;
       printf("Novo salario: %.2lf\n", nsal+sal);
       printf("Reajuste ganho: %.2lf\n", nsal);
       printf("Em percentual: 15 %%\n");
    }
    else if (sal<=800)
    {
       nsal = (sal*12)/100;
       printf("Novo salario: %.2lf\n", nsal+sal);
       printf("Reajuste ganho: %.2lf\n", nsal);
       printf("Em percentual: 12 %%\n");
    }
    else if (sal<=1200)
    {
       nsal = (sal*10)/100;
       printf("Novo salario: %.2lf\n", nsal+sal);
       printf("Reajuste ganho: %.2lf\n", nsal);
       printf("Em percentual: 10 %%\n");
    }
    else if (sal<=2000)
    {
       nsal = (sal*7)/100;
       printf("Novo salario: %.2lf\n", nsal+sal);
       printf("Reajuste ganho: %.2lf\n", nsal);
       printf("Em percentual: 7 %%\n");
    }
    else if (sal > 2000)
    {
       nsal = (sal*4)/100;
       printf("Novo salario: %.2lf\n", nsal+sal);
       printf("Reajuste ganho: %.2lf\n", nsal);
       printf("Em percentual: 4 %%\n");
    }
    return 0;
}
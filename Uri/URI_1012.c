#include <stdio.h>

int main()
{
    double a,b,c,aTriangulo,aCirculo,aTrapezio,aQuadrado,aRetangulo;
    scanf("%lf %lf %lf", &a,&b,&c);
    aTriangulo = (a * c)/2;
    aCirculo = 3.14159 * (c*c);
    aTrapezio = ((a+b)*c)/2;
    aQuadrado = b*b;
    aRetangulo= a*b;
    printf("TRIANGULO: %1.3lf\n",aTriangulo);
    printf("CIRCULO: %1.3lf\n",aCirculo);
    printf("TRAPEZIO: %1.3lf\n",aTrapezio);
    printf("QUADRADO: %1.3lf\n",aQuadrado);
    printf("RETANGULO: %1.3lf\n",aRetangulo);
    return 0;
}
#include <stdio.h>
 
int main() {
 
    float a,b,c,x;
    scanf("%f%f%f", &a,&b,&c);

    if (b>a && c<=b)
    {
        x = a;
        a = b;
        b = x;
    }
    else if (c>a && b<=c)
    {
        x = a;
        a = c;
        c = x;
    }
    
    if (a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (a*a == (b*b)+(c*c))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((a*a)>(b*b)+(c*c))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((a*a)<(b*b)+(c*c))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a ==b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a==b || b==c || a==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
 
    return 0;
}
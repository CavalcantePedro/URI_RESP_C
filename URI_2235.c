#include <stdio.h>
 
int main() {
 
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if (a+b == c || a+c == b || c+b== a || b == a||c==b|| c==a)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
 
    return 0;
}
#include <stdio.h>

int main()
{
    int dist;
    float litros, media;
    scanf("%d", &dist);
    scanf("%f", &litros);
    media = dist/litros;
    printf("%1.3f km/l\n", media);
    return 0;
}
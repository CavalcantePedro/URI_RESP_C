#include <stdio.h>
 
int main() {
 
    float a,b, med;
    scanf("%f%f",&a,&b);
    med = ((a*3.5) + (b*7.5)) / 11;
    printf("MEDIA = %.5f\n", med);
    return 0;
}
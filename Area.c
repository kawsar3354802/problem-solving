#include <stdio.h>
int main() {
   double A,B,C,triangle,circle,trapizium,quadrado,retengulo;
   scanf("%lf %lf %lf",&A,&B,&C);
    triangle=A*C/2;
    circle=3.14159*C*C;
    trapizium=((A+B)*C)/2;
    quadrado=B*B;
    retengulo=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapizium,quadrado,retengulo);
    return 0;
}
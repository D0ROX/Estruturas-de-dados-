//Função converte Celsius-Fahrenheit

#include <stdio.h>
float cf(float c){return c*9/5+32;}
int main(){
    float c;
    printf("Digite temperatura em Celsius:\n");
    scanf("%f",&c);
    printf("Em Fahrenheit = %.2f\n",cf(c));
    return 0;
}

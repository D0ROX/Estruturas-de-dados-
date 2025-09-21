//Calcular o determinante de uma matriz 2x2

#include <stdio.h>
int main(){
    int a[2][2];
    printf("Digite os 4 valores da matriz 2x2:\n");
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)scanf("%d",&a[i][j]);
    int det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    printf("Determinante = %d\n",det);
    return 0;
}

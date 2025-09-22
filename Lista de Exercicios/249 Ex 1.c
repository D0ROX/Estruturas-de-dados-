//Ler uma matriz 3x3 e mostrar

#include <stdio.h>
int main(){
    int a[3][3];
    printf("Digite 9 valores da matriz 3x3:\n");
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&a[i][j]);
    printf("Matriz:\n");
    for(int i=0;i<3;i++){for(int j=0;j<3;j++)printf("%d ",a[i][j]);printf("\n");}
    return 0;
}

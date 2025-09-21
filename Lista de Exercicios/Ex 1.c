//Ler matriz 3x3 e imprimir

#include <stdio.h>
int main(){
    int a[3][3];
    printf("Digite os 9 valores da matriz 3x3:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Matriz lida:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}


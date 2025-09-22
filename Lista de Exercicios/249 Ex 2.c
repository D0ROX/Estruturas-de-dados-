//Somar duas matrizes 3x3

#include <stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("Digite 9 valores da primeira matriz:\n");
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&a[i][j]);
    printf("Digite 9 valores da segunda matriz:\n");
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&b[i][j]);
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)c[i][j]=a[i][j]+b[i][j];
    printf("Soma das matrizes:\n");
    for(int i=0;i<3;i++){for(int j=0;j<3;j++)printf("%d ",c[i][j]);printf("\n");}
    return 0;
}

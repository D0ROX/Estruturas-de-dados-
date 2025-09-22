//Transpor matriz 3x3

#include <stdio.h>
int main(){
    int a[3][3],t[3][3];
    printf("Digite 9 valores da matriz 3x3:\n");
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)t[j][i]=a[i][j];
    printf("Transposta:\n");
    for(int i=0;i<3;i++){for(int j=0;j<3;j++)printf("%d ",t[i][j]);printf("\n");}
    return 0;
}

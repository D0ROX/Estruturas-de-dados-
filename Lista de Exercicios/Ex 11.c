//Substituir elementos negativos por zero

#include <stdio.h>
int main(){
    int m,n;
    printf("Digite numero de linhas e colunas:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Digite os %d valores:\n",m*n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++){scanf("%d",&a[i][j]);if(a[i][j]<0)a[i][j]=0;}
    printf("Matriz com negativos substituidos por zero:\n");
    for(int i=0;i<m;i++){for(int j=0;j<n;j++)printf("%d ",a[i][j]);printf("\n");}
    return 0;
}

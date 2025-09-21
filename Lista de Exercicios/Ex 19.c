//Função que soma matriz passada como parâmetro

#include <stdio.h>
int soma_matriz(int m,int n,int a[m][n]){int s=0;for(int i=0;i<m;i++)for(int j=0;j<n;j++)s+=a[i][j];return s;}
int main(){
    int m,n;
    printf("Digite linhas e colunas da matriz:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Digite os %d valores:\n",m*n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    printf("Soma dos elementos = %d\n",soma_matriz(m,n,a));
    return 0;
}

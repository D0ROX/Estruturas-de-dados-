//Função para transpor matriz

#include <stdio.h>
void transp(int m,int n,int a[m][n],int t[n][m]){for(int i=0;i<m;i++)for(int j=0;j<n;j++)t[j][i]=a[i][j];}
int main(){
    int m,n;
    printf("Digite linhas e colunas da matriz:\n");
    scanf("%d%d",&m,&n);
    int a[m][n],t[n][m];
    printf("Digite os %d valores:\n",m*n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    transp(m,n,a,t);
    printf("Matriz transposta:\n");
    for(int i=0;i<n;i++){for(int j=0;j<m;j++)printf("%d ",t[i][j]);printf("\n");}
    return 0;
}

//Média dos elementos

#include <stdio.h>
int main(){
    int m,n;
    printf("Digite numero de linhas e colunas:\n");
    scanf("%d%d",&m,&n);
    int a[m][n],s=0;
    printf("Digite os %d valores:\n",m*n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++){scanf("%d",&a[i][j]);s+=a[i][j];}
    printf("Media dos elementos: %.2f\n",(float)s/(m*n));
    return 0;
}


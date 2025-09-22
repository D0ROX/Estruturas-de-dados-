//Somar elementos acima da diagonal principal

#include <stdio.h>
int main(){
    int n;
    printf("Digite a ordem da matriz quadrada:\n");
    scanf("%d",&n);
    int a[n][n],s=0;
    printf("Digite %d valores:\n",n*n);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)s+=a[i][j];
    printf("Soma acima da diagonal = %d\n",s);
    return 0;
}

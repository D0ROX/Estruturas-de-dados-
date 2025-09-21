//Soma dos elementos abaixo da diagonal

#include <stdio.h>
int main(){
    int n;
    printf("Digite a ordem da matriz quadrada:\n");
    scanf("%d",&n);
    int a[n][n],s=0;
    printf("Digite os %d valores:\n",n*n);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=1;i<n;i++)for(int j=0;j<i;j++)s+=a[i][j];
    printf("Soma abaixo da diagonal: %d\n",s);
    return 0;
}

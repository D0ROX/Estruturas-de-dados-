//Função calcula média de vetor

#include <stdio.h>
float media(int v[],int n){int s=0;for(int i=0;i<n;i++)s+=v[i];return (float)s/n;}
int main(){
    int n;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&n);
    int v[n];
    printf("Digite os %d valores do vetor:\n",n);
    for(int i=0;i<n;i++)scanf("%d",&v[i]);
    printf("Media = %.2f\n",media(v,n));
    return 0;
}

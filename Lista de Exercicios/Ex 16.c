//Função retorna maior elemento de vetor

#include <stdio.h>
int maior(int v[],int n){int m=v[0];for(int i=1;i<n;i++)if(v[i]>m)m=v[i];return m;}
int main(){
    int n;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&n);
    int v[n];
    printf("Digite os %d valores do vetor:\n",n);
    for(int i=0;i<n;i++)scanf("%d",&v[i]);
    printf("Maior valor = %d\n",maior(v,n));
    return 0;
}

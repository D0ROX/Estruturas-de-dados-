//Ler dois vetores de mesmo tamanho e gerar um terceiro com a soma dos elementos correspondentes}

#include <stdio.h>
int main(){
    int n;
    printf("Digite o tamanho dos vetores:\n");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("Digite %d valores do primeiro vetor:\n",n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Digite %d valores do segundo vetor:\n",n);
    for(int i=0;i<n;i++)scanf("%d",&b[i]);
    for(int i=0;i<n;i++)c[i]=a[i]+b[i];
    printf("Vetor soma:\n");
    for(int i=0;i<n;i++)printf("%d ",c[i]);
    return 0;
}

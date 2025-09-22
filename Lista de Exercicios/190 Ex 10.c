//Ler 10 números e ordenar crescente

#include <stdio.h>
int main(){
    int v[10],temp;
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++)scanf("%d",&v[i]);
    for(int i=0;i<9;i++)for(int j=i+1;j<10;j++)if(v[j]<v[i]){temp=v[i];v[i]=v[j];v[j]=temp;}
    printf("Ordenado:\n");
    for(int i=0;i<10;i++)printf("%d ",v[i]);
    return 0;
}

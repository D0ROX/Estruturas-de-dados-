//Ler 10 números e mostrar índice do maior

#include <stdio.h>
int main(){
    int v[10],midx=0;
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++){scanf("%d",&v[i]);if(v[i]>v[midx])midx=i;}
    printf("Maior numero = %d na posicao %d\n",v[midx],midx);
    return 0;
}

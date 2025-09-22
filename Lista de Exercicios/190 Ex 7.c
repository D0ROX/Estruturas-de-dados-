//Ler 10 números e separar pares e ímpares em dois vetores

#include <stdio.h>
int main(){
    int v[10],pares[10],impares[10],p=0,i=0;
    printf("Digite 10 numeros:\n");
    for(int k=0;k<10;k++){
        scanf("%d",&v[k]);
        if(v[k]%2==0)pares[p++]=v[k];else impares[i++]=v[k];
    }
    printf("Pares:\n");for(int k=0;k<p;k++)printf("%d ",pares[k]);
    printf("\nImpares:\n");for(int k=0;k<i;k++)printf("%d ",impares[k]);
    return 0;
}

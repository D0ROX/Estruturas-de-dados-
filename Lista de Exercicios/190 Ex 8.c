//Ler 10 números e mostrar apenas os negativos

#include <stdio.h>
int main(){
    int v[10];
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++)scanf("%d",&v[i]);
    printf("Numeros negativos:\n");
    for(int i=0;i<10;i++)if(v[i]<0)printf("%d ",v[i]);
    return 0;
}

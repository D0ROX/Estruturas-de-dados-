//Ler 10 números e mostrar o maior

#include <stdio.h>
int main(){
    int v[10];
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++)scanf("%d",&v[i]);
    int m=v[0];
    for(int i=1;i<10;i++)if(v[i]>m)m=v[i];
    printf("Maior numero = %d\n",m);
    return 0;
}

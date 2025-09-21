//Função soma dois números

#include <stdio.h>
int soma(int x,int y){return x+y;}
int main(){
    int a,b;
    printf("Digite dois numeros:\n");
    scanf("%d%d",&a,&b);
    printf("Soma = %d\n",soma(a,b));
    return 0;
}

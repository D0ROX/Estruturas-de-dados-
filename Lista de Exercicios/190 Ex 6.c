//Ler 10 n�meros e contar pares

#include <stdio.h>
int main(){
    int v[10],c=0;
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++){scanf("%d",&v[i]);if(v[i]%2==0)c++;}
    printf("Quantidade de pares = %d\n",c);
    return 0;
}

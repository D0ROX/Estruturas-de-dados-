//Ler 10 números e mostrar

#include <stdio.h>
int main(){
    int v[10];
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++)scanf("%d",&v[i]);
    printf("Numeros digitados:\n");
    for(int i=0;i<10;i++)printf("%d ",v[i]);
    return 0;
}

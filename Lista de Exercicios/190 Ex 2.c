//Ler 10 números e mostrar em ordem inversa

#include <stdio.h>
int main(){
    int v[10];
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++)scanf("%d",&v[i]);
    printf("Numeros em ordem inversa:\n");
    for(int i=9;i>=0;i--)printf("%d ",v[i]);
    return 0;
}

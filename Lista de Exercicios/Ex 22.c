//Função que recebe número e diz se é palíndromo

#include <stdio.h>
int pal(int n){int r=0,x=n;while(x>0){r=r*10+x%10;x/=10;}return r==n;}
int main(){
    int n;
    printf("Digite um numero para verificar se eh palindromo:\n");
    scanf("%d",&n);
    if(pal(n))printf("Palindromo\n");else printf("Nao\n");
    return 0;
}

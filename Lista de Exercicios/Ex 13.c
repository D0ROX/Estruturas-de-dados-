//Função retorna fatorial

#include <stdio.h>
long long fat(int n){long long r=1;for(int i=2;i<=n;i++)r*=i;return r;}
int main(){
    int n;
    printf("Digite um numero para calcular o fatorial:\n");
    scanf("%d",&n);
    printf("Fatorial = %lld\n",fat(n));
    return 0;
}

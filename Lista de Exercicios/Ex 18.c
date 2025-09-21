//Função potência

#include <stdio.h>
long long pot(int b,int e){long long r=1;for(int i=0;i<e;i++)r*=b;return r;}
int main(){
    int b,e;
    printf("Digite a base e o expoente:\n");
    scanf("%d%d",&b,&e);
    printf("Potencia = %lld\n",pot(b,e));
    return 0;
}

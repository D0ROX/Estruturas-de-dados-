//Função imprime números de Fibonacci até n

#include <stdio.h>
void fib(int n){long long a=0,b=1;for(int i=0;i<n;i++){printf("%lld ",a);long long c=a+b;a=b;b=c;}}
int main(){
    int n;
    printf("Digite quantos termos de Fibonacci quer ver:\n");
    scanf("%d",&n);
    fib(n);
    return 0;
}

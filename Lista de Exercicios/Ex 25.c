//Fun��o que calcula o mdc de dois n�meros (m�ximo divisor comum)

#include <stdio.h>
int mdc(int a,int b){while(b){int t=b;b=a%b;a=t;}return a;}
int main(){
    int a,b;
    printf("Digite dois numeros para calcular o MDC:\n");
    scanf("%d%d",&a,&b);
    printf("MDC = %d\n",mdc(a,b));
    return 0;
}

//Ler 10 n�meros e mostrar m�dia

#include <stdio.h>
int main(){
    int v[10],s=0;
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++){scanf("%d",&v[i]);s+=v[i];}
    printf("Media = %.2f\n",(float)s/10);
    return 0;
}

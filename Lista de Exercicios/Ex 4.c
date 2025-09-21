//Maior elemento de cada linha

#include <stdio.h>
int main(){
    int a[3][3];
    printf("Digite os 9 valores da matriz 3x3:\n");
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&a[i][j]);
    printf("Maior elemento de cada linha:\n");
    for(int i=0;i<3;i++){
        int m=a[i][0];
        for(int j=1;j<3;j++)if(a[i][j]>m)m=a[i][j];
        printf("%d\n",m);
    }
    return 0;
}

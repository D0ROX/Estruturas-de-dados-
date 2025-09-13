// Ex. 4 � Repetir opera��es usando vetor

#include <stdio.h>

void eliminarN_vetor(int vetor[], int* tamanho, int posicao) {
    if (posicao < 0 || posicao >= *tamanho) { printf("Posi��o inv�lida!\n"); return; }
    for (int i = posicao; i < *tamanho - 1; i++) {
        vetor[i] = vetor[i+1];
    }
    (*tamanho)--;
}

void imprimirVetor(int vetor[], int tamanho) {
    for(int i=0; i<tamanho; i++) printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int numeros[20] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Vetor original: ");
    imprimirVetor(numeros, n);

    printf("Removendo elemento na posi��o 2 (o 30)...\n");
    eliminarN_vetor(numeros, &n, 2);

    printf("Vetor ap�s remo��o: ");
    imprimirVetor(numeros, n);

    return 0;
}

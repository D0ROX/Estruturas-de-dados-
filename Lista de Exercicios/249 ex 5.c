//Ex. 5 – Cálculo médio de acessos

#include <stdio.h>
#define TAMANHO 1024

int buscaLinear(int vetor[], int chave, int* acessos) {
    *acessos = 0;
    for(int i = 0; i < TAMANHO; i++) {
        (*acessos)++;
        if(vetor[i] == chave) return i;
    }
    return -1;
}

int buscaBinaria(int vetor[], int chave, int* acessos) {
    *acessos = 0;
    int inicio = 0, fim = TAMANHO - 1;
    while (inicio <= fim) {
        (*acessos)++;
        int meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == chave) return meio;
        if (vetor[meio] < chave) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1;
}

int main() {
    int vetor_ordenado[TAMANHO];
    for(int i=0; i<TAMANHO; i++) vetor_ordenado[i] = i;

    int chave = 987;
    int acessos;

    buscaLinear(vetor_ordenado, chave, &acessos);
    printf("Busca Linear (O(n)) precisou de %d acessos.\n", acessos);

    buscaBinaria(vetor_ordenado, chave, &acessos);
    printf("Busca Binária (O(log n)) precisou de %d acessos.\n", acessos);

    return 0;
}

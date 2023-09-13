#include <stdio.h>

void inverterVetor(int vetor[], int tamanho) {
    if (tamanho != 5) {
        printf("O vetor deve ter tamanho 5.\n");
        return;
    }

    int i, temp;
    for (i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int V[] = {4, 9, 10, 8, 6};
    int tamanho = sizeof(V) / sizeof(V[0]);

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    inverterVetor(V, tamanho);

    printf("Vetor invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}

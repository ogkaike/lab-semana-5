#include <stdio.h>
#include <stdbool.h>

bool crescente(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (v[i] >= v[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int vetor1[] = {1, 2, 3, 4, 5};
    int vetor2[] = {1, 3, 2, 4, 5};

    if (crescente(vetor1, 5)) {
        printf("O vetor 1 está em ordem crescente.\n");
    } else {
        printf("O vetor 1 NÃO está em ordem crescente.\n");
    }

    if (crescente(vetor2, 5)) {
        printf("O vetor 2 está em ordem crescente.\n");
    } else {
        printf("O vetor 2 NÃO está em ordem crescente.\n");
    }

    return 0;
}
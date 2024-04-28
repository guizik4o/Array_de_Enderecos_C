#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    float array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i * 1.5;
    }

    printf("Enderecos de cada posicao do array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Endereco do elemento %d: %p\n", i, (void*)&array[i]);
    }

    return 0;
}

// Técnica:

// 1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
// escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado
// pertence ou não à sequência.

// IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int fib1 = 0, fib2 = 1, fib3, n;

    printf("Informe um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", n);
        return 0;
    }
    while (fib3 < n) {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;

        if (fib3 == n) {
            printf("O número %d pertence à sequência de Fibonacci.\n", n);
            return 0;
        }
    }

    printf("O número %d não pertence à sequência de Fibonacci.\n", n);

    return 0;
}

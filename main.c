#include "operations.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valorUm = 0;
int valorDois = 0;
char operacao[30] = "not";
int condicaoParar = 0;

int main(void) {

    do {
        if (strcmp(operacao, "stop") == 0) {
            break;
        }
        printf("Digite a operação desejada:\n");
        printf("add - Soma;\n");
        printf("sub - Subtração;\n");
        printf("mul - Multiplicação;\n");
        printf("div - Divisão;\n");
        printf("s - Sair;\n");
        printf("Digite a operação desejada:\n");
        scanf(" %s", operacao);

        if (strcmp(operacao, "s") == 0) {
            break;
        } 

        printf("Digite o valor um:\n");
        scanf(" %d", &valorUm);
        printf("Digite o valor dois:\n");
        scanf(" %d", &valorDois);

        if (strcmp(operacao, "add") == 0) {
            add(valorUm, valorDois);
        } else if (strcmp(operacao, "sub") == 0) {
            sub(valorUm, valorDois);
        } else if (strcmp(operacao, "mul") == 0) {
            multiply(valorUm, valorDois);
        } else if (strcmp(operacao, "div") == 0) {
            division(valorUm, valorDois);
        } else {
            strcpy(operacao, "stop");
        }

    } while(condicaoParar == 0);

    return 0;
}
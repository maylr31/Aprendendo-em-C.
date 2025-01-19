#include <stdio.h>

int main() {
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[] = "Bruno"; // Correção: declaração correta de string

    // Impressão das variáveis
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome); // Correção: uso de aspas duplas

    return 0;
}

/*
Explicação dos especificadores de formato:
 %d ou %i: Imprime um número inteiro no formato decimal.
 %f: Imprime um número de ponto flutuante com precisão padrão.
 %.2f: Imprime um número de ponto flutuante com duas casas decimais.
 %c: Imprime um único caractere.
 %s: Imprime uma string (cadeia de caracteres).
*/
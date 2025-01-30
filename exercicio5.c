#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {  // Função principal do programa
    int idade;  // Declaração da variável 'idade' para armazenar a entrada do usuário

    printf("Digite sua idade: ");  // Exibe uma mensagem pedindo a idade
    scanf("%d", &idade);  // Lê um número inteiro digitado pelo usuário e armazena em 'idade'

    if (idade < 18) {  // Condição para verificar se a idade é menor que 18
        printf("Você é menor de idade.\n");  // Exibe mensagem se a condição for verdadeira
    } else {  // Se a idade não for menor que 18 (ou seja, 18 ou mais)
        printf("Você é maior de idade.\n");  // Exibe mensagem indicando maioridade
    }

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}

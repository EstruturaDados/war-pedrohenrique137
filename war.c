#include <stdio.h>
#include <string.h>

// ------------------------------------------------------
// Estrutura de Dados: Território
// Esta struct armazena as informações de um território
// no jogo War, incluindo nome, cor do exército e número
// de tropas.
// ------------------------------------------------------
typedef struct {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército (ex: vermelho, azul)
    int tropas;      // Quantidade de tropas no território
} Territorio;

int main() {
    // ------------------------------------------------------
    // Declaração do vetor de structs
    // Armazena até 5 territórios diferentes
    // ------------------------------------------------------
    Territorio territorios[5];

    printf("=== Cadastro de Territórios ===\n\n");

    // ------------------------------------------------------
    // Entrada de dados: o usuário informa os dados dos 5 territórios
    // ------------------------------------------------------
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do %dº território:\n", i + 1);

        printf("Nome do território: ");
        scanf(" %[^\n]", territorios[i].nome); // Lê string com espaços

        printf("Cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // ------------------------------------------------------
    // Exibição dos dados cadastrados
    // ------------------------------------------------------
    printf("\n=== Lista de Territórios Cadastrados ===\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("--------------------------------------\n");
    }

    printf("\nCadastro concluído com sucesso!\n");
    return 0;
}

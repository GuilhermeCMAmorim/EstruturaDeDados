#include <stdio.h>
#include "tabela_hash.h"

int main() {

    TabelaHash *hash = hash_criar(10);

    printf("Tabela vazia? %s\n",
           hash_esta_vazia(hash) ? "Sim" : "Nao");

    /* Inserções */
    hash_inserir(hash, 15);
    hash_inserir(hash, 25);
    hash_inserir(hash, 35);
    hash_inserir(hash, 8);
    hash_inserir(hash, 18);

    printf("\nTabela Hash:\n");
    hash_exibir(hash);

    /* Busca */
    int valor = 25;

    if (hash_buscar(hash, valor)) {
        printf("\nValor %d encontrado.\n", valor);
    } else {
        printf("\nValor %d nao encontrado.\n", valor);
    }

    /* Remoção */
    printf("\nRemovendo 25...\n");
    hash_remover(hash, 25);

    printf("\nTabela apos remocao:\n");
    hash_exibir(hash);

    /* Nova busca */
    if (hash_buscar(hash, valor)) {
        printf("\nValor %d encontrado.\n", valor);
    } else {
        printf("\nValor %d nao encontrado.\n", valor);
    }

    /* Destruição */
    hash_destruir(hash);

    return 0;
}
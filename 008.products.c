#include <stdio.h>
#include <string.h>

#define MAX 1000

typedef struct {
    int codigo;
    char descricao[20];
    float preco;
    int quantidade;
} Produto;

Produto produto[MAX];

int indice = 0;

void cadastrarProduto(int codigo, char descricao[], float preco, int quantidade){
    produto[indice].codigo = codigo;
    strcpy(produto[indice].descricao, descricao);
    produto[indice].preco = preco;
    produto[indice].quantidade = quantidade;
    indice++;
}

int main(){
    cadastrarProduto(1, "Pipoca Pronta Pop", 2.99, 1500);
    return 0;
}

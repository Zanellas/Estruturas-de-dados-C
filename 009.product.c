scanf("%d", &produto[indice].codigo);
scanf("%s", produto[indice].descricao);
scanf("%f", &produto[indice].preco);
scanf("%d", &produto[indice].quantidade);


scanf("%d", &indice);
printf("%s", produto[indice].descricao);


for ( i = 0; i < MAX; i++) {
    strcpy(produto[i].descircao, "");
    produto[i].codigo = 0;
    produto[i].preco = 0.0;   
    produto[i].quantidade = 0;
}


for (indice = 0; indice < MAX; indice++) {
    printf("%-4d %-20s %-6.2f %-4d \n", 
	      produto[indice].codigo, produto[indice].descricao,          
        produto[indice].preco, produto[indice].quantidade);
}


for (indice = 0; indice < MAX; indice++) {
    if (strcmp(produto[indice].descricao,  "") != 0) 
        printf("%-4d %-20s %-6.2f %-4d \n", 
            produto[indice].codigo, 
            produto[indice].descricao,
            produto[indice].preco, 
            produto[indice].quantidade);
}


int indice = 0;
while (indice < MAX) {
    if (strcmp(produto[indice].decricao, "Azeite Oliva") == 0) {
        printf("Codigo....: %d \n", produto[indice].codigo);
        printf("Descricao.: %s \n", produto[indice].descricao);
        printf("Preco.....: %-.2f \n", produto[indice].preco);
        printf("Quantidade: %d \n", produto[indice].quantidade);
    }
    indice++;
}



#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct {
    int codigo;
    char descricao[20];
    float preco;
    int quantidade;
} Produto;

void inicializar(void)
void incluir(int, char *, float, int)
void alterar(int, char *, float, int)
void excluir(int)
void imprimir(void)

void inicializar() {
    int codigo;
    for (codigo = 0; codigo < MAX; codigo++) {
        strcpy(produto[codigo].descircao, "");
        produto[codigo].codigo = codigo;
        produto[codigo].preco = 0.0;   
        produto[codigo].quantidade = 0;
    }
}

void incluir(int codigo, char *descricao, float preco, int quantidade) {
    if (codigo > MAX || strcmp(produto[codigo].descricao, "") != 0) {
        printf("Erro na inclusao: codigo ja cadastrado ou fora da faixa.\n");
    } else if (quantidade < 0) {
        printf("Erro na inclusao: quantidade menor que zero.\n");
    } else {
        strcpy(produto[codigo].descricao, descricao);
        produto[codigo].preco = preco;
        produto[codigo].quantidade = quantidade;
        printf("Inclusao com sucesso: $s. \n", descicao);
    }
}

void excluir(int codigo) {
    char desc[20];
    strcpy(desc, produto[codigo].descricao);
  
    strcpy(produto[codigo].descricao, "");
    produto[codigo].codigo = codigo;
    produto[codigo].preco = 0.0;
    produto[codigo].quantidade = 0;
    printf("Exclusao com sucesso: %s. \n", desc);
}

void imprimir() { 
    int i;
    printf("\n%-4s %-20s %-6s %-4s \n",
        "Cod", "nome", "Preco", "Qtde");
    printf("%-4s %-20s, %-6s %-4s \n",
        "---", "--------------------", "------", "----");

    for (i = 0; i < MAX;  i++) {
        if (strcmp(produto[i].descricao, "") != 0)
            printf("%-4d %-20s %-6.2f %-4d \n",
                produto[i].codigo, produto[i].descricao,
                produto[i].preco, produto[i].quantidade);
    }
    printf("\n");
}




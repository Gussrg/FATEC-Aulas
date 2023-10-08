#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct aux{
    TIPOCHAVE chave;

    /*Dados armazenados vão aqui */
    struct aux *esq, *dir;

}NO;
typedef NO* PONT;

PONT inicializa(){
    retun(NULL);
}

PONT adiciona(PONT raiz, PONT no){
    if (raiz == NULL) return(no);
    if (no->chave < raiz->chave)
        raiz->esq = adiciona(raiz->esq, no);
    else
        raiz->dir = adiciona(raiz->dir, no);
        //ignora chave igual
    return(raiz);
}
int main(){
    PONT r = inicializa();

    no = criaNovoNo(12);
    r = adiciona(r, no);
}

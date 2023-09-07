/*
PROGRAMA DESAFIO 2

1 - Escreva um programa que tem a estrutura de dados abaixo. O programa tem as seguintes opções de menu:

   1 – Entrada de dados.
   2 – Lista todas todos os dados na tela.
   3 – Pesquisar um livro pelo nome completo e mostra na tela
   4 – Pesquisar autor pelo nome completo
   5 – Pesquisar livro por faixa de preço.
   6 – Altera quantidade (entrada e saída) pesquisado pelo nome completo.
   7 – Altera preço do livro pesquisado pelo nome completo
   8 – Altera dados. Pesquisa pelo nome completo.
   9 – Exclui dados. Pesquisa pelo nome completo.
   10 – Saída pelo usuário

Estrutura: livro, autor, preço, quantidade

A única estrutura de dados do programa deve ser uma variável local na função main(). Portanto a passagem da estrutura para as funções utiliza ponteiro.

Cada uma das opções do menu é uma função no programa.

Todas as operações de leitura e escrita devem ser feitas direto no arquivo. (utilize a função fseek quando necessário).

O programa tem um único arquivo de dados. Não pode usar nenhum arquivo auxiliar.

Não pode usar nenhuma função de biblioteca a não ser as 6 da apostila e as funções de manipulação de arquivos.

Desafio entrega dia 13/06/2023
Assunto: DF02H
email: lingprog3f@gmail.com
Nome do arquivo: Cnumero do grupo e os nomes dos alunos

Exercícios entrega dia 13/06/2023
Assunto: EX02H
email: lingprog3f@gmail.com
Corpo do email: Cnumero do grupo e os nomes dos alunos
Nome dos arquivos: cap7.c, cap8.c, cap9.c, cap10.c
*/



#include<locale.h>
#include<stdio.h>


void entrada_dados()
{


}

void lista_dados()
{

}

void pesquisar_livro()
{

}



int pesquisar_autor()
{


}

int faixa_preco
{



}

int altera_quant()
{


}

int altera_preco()
{


}


int altera_dados()
{



}
int exclui_dados()
{


}

int saida()
{
    printf("\n\nEncerrando o programa...\n\nAté a próxima!\n");
}

void main()
{
    setlocale(LC_ALL,"");
    int escolha;
    FILE *arquivo;
    arquivo=fopen("livros.txt", "r+");
    if(arquivo==NULL)
    {
        printf("\nArquivo inexistente.");
    }
    else
    {
        fclose(arquivo);
    }

    do
    {
        // system("cls");

        printf("Escolha a opção que deseja:\n");
        printf("\n1 – Entrada de dados.");
        printf("\n2 – Listar todos os dados na tela.");
        printf("\n3 – Pesquisa um livro com o nome completo");
        printf("\n4 – Pesquisa autor pela primeira letra");
        printf("\n5 – Altera dados.");
        printf("\n6 – Exclui dados.");
        printf("\n7 - Encerrar programa\n");
        scanf("%d",&escolha);
        //system("cls");

        switch(escolha)
        {
        case 1:
            entrada_dados();
            break;
        case 2:
            lista_dados();
            break;
        case 3:
            pesquisar_livro();
            break;
        case 4:
            pesquisar_autor();
            break;
        case 5:
            altera_dados();
            break;
        case 6:
            exclui_dados();
            break;
        case 7:
            saida();
            break;
        default:
            printf("\nOpção inválida\n");
            break;
        }
    }
    while(escolha!=7);

    return (0);
}

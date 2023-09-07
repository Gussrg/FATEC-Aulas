#define ex1



#ifdef ex1

/*1 - Escreva um programa para criar e abrir um arquivo texto de nome "arq.txt".
    Receba via teclado diversos caracteres (um por vezes) e escreva-os
    nesse arquivo. O caracter '0' finaliza a entrada de dados. Abra o arquivo
    "arq.txt", leia e imprima na tela todos os caracteres armazenados no
    arquivo (um por vezes).

*/

#include "stdio.h"
#include<locale.h>
#include "stdlib.h"

int main ()
{

    char fim;

    do
    {




        printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');

}

#endif // ex1


#ifdef ex2
/* 2 - Escreva um programa para gerenciar uma agenda de contatos. Para cada contato
    armazene o nome, o telefone e o aniversario (dia e mes) em uma estrutura de
    dados. Utilize um vetor de estrutura de 4 elementos como variavel LOCAL na
    funcao main(). Utilize ponteiros para passar o vetor de estrutura para
    as funcoes. Sempre que o programa for encerrado, os contatos devem ser
    escritos no arquivo e quando o programa iniciar os contatos devem ser lidos
    do arquivo.
    O programa deve ter as seguintes opcoes:(cada opcao do menu e' um funcao)
    1 - inserir contato
    2 - listar todos os contatos
    3 - pesquisar um contato pelo nome
    4 - listar os contatos cujo nome inicia com uma letra digitada
    5 - imprimir os aniversariantes do mês.
    6 - altera contato
    7 - exclui contato
    8 - saida
    */

#include "stdio.h"
#include<locale.h>
#include "stdlib.h"

int main ()
{

    char fim;

    do
    {




        printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');

}

#endif // ex2

#ifdef ex3


/*3 - Escreva um programa para controle de um cadastro de clientes. Para cada
    registro sera' armazenado nome, email e celular numa estrutura de dados.
    A unica estrutura de dados e' uma variavel LOCAL na funcao main().
    Escreva os registros direto no arquivo. (utilize a funcao fseek quando
    necessario). NAO pode usar vetor de estruturas. Utilize ponteiros para
    passar parametros para as funcoes.
    O programa deve ter as seguintes opcoes: (cada opcao do menu e' um funcao)
    1 - inclui registros
    2 - listar todos os registros
    3 - pesquisar registro pelo nome
    4 - altera registro
    5 - exclui registro
    6 - saida
*/

#include "stdio.h"
#include<locale.h>
#include "stdlib.h"

int main ()
{

    char fim;

    do
    {




        printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');

}

#endif // ex3

#ifdef ex4


/*4 - Escreva um programa para o controle de mercadorias em uma dispensa
    domestica. Para cada produto sera' armazenado um codigo numerico, nome
    do produto e quantidade atual numa estrutura de dados. A unica estrutura
    de dados deve ser declarada como variavel LOCAL na funcao main(). Escreva
    os itens das mercadorias direto no arquivo. (utilize a funcao fseek quando
    necessario). NAO pode usar vetor de estruturas. Utilize ponteiros.
    O programa deve ter as seguintes opcoes: (cada opcao do menu e' um funcao)
    1 - inclui produtos
    2 - listar todos os produtos
    3 - pesquisar uma mercadoria pela descrição
    4 - listar os produtos não disponíveis.
    5 - alterar a quantidade atual
    6 - altera produtos
    7 - exclui produtos
    8 - saida
*/

#include "stdio.h"
#include<locale.h>
#include "stdlib.h"

int main ()
{

    char fim;

    do
    {




        printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');

}

#endif // ex4

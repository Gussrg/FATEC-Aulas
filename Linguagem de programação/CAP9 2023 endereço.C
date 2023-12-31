#define ex1
#include "stdio.h"
/******************************************************************************

				FUNCOES 2

*******************************************************************************

1 - Formato de uma funcao em C

A estrutura de uma funcao na linguaguem C e' semelhante a estrutura da funcao
main(). A unica diferenca e' que a funcao main() tem um nome especial.

O formato de uma funcao em C e':

<tipo_de_retorno> <nome_da_funcao> (<parametros ou informacoes>)
tipos dos parametros ou informacoes;

{
	declaracao de variaveis;
	comandos;
	funcoes;
        retorno da funcao;
}

tipo_de_retorno -----------> E' o tipo do dado que a funcao retornara'.

nome_da_funcao ------------> E' o nome pelo qual a funcao sera' chamada.

parametros ou informacoes ou
lista de argumentos -------> Sao as informacoes que a funcao recebe para
                             executar a tarefa definida.

tipos dos parametros  ou
informacoes ---------------> Se houve informacoes entao o tipo destes deve ser
                             declarado.

declaracao de variaveis----> Declaracao dos tipos das variaveis locais`a funcao
                             e que sao utilizados apenas dentro nesta.

comandos ------------------> Sao os comandos da linguaguem C que executam as
                             tarefas definidas para a funcao.

funcoes -------------------> Sao chamadas para funcoes de biblioteca e/ou outras
                             funcoes desenvolvidas pelo programador.

retorno da funcao ---------> Retorna uma informacao para a funcao que chamou.

2 - Chamando uma funcao

A sintaxe para chamar uma funcao e'

	<nome_da_funcao>(<parametros ou informacoes>);

Exemplo:
	printf("teste");  chama a funcao de bilioteca "printf" e passa a
                          informacao "teste".

	soma(a,b);   chama a funcao "soma" e passa as informacoes "a" e "b".

3 - Passagem de parametros ou informacoes

O que sao parametros ou informacoes ou argumentos de uma funcao?
Sao as informacoes que a funcao recebe para executar a tarefa para a qual foi
desenvolvida.

Existem dois metodos de passagem de parametros ou informacoes para uma funcao.

- O 1. metodo e' a passagem de parametros ou informacoes por "valor" ou "copia".

Neste metodo, na fun��o que chamou faz-se uma copia dos valores a serem
enviados para a funcao chamada. Dessa forma os valores originais nao podem ser
alterados, pois a funcao chamada manipula apenas as copias dos mesmos. Na funcao
chamada sao criadas variaveis do mesmo tipo da funcao que chamou que receberao
as copias destes valores.

Lembrando que as variaveis que recebem os parametros ou informcoes da funcao que
chamou e as que estao dentro da funcao chamada, sao variaveis locais. Portanto,
quando a execucao da funcao se encerrar as variaveis sao destruidas ou seja, o
seu conteudo e' perdido.

Exemplo:*/

#ifdef ex1
void troca(int x,int y);

main()		/* passagem de parametros por "valor" ou "copia" */
{
int a,b;
a = 10;
b = 20;

printf("main() -> antes da troca ---> a = %d  b = %d \n\n",a,b);

troca(a,b); /* chama a funcao "troca" passando como informacao a copia dos
               valores das variaveis "a" e "b" */

printf("main() -> depois da troca --> a = %d  b = %d \n\n",a,b);

printf("Voce esta' de volta a funcao main()\n");
printf("Fim do programa\n");
}

/* funcao troca dois valores */

void troca(int x,int y)    /* recebe a copias dos valores das variaveis "a" e "b"
                              da funcao main */
{
int c;

printf("\tfuncao troca()\n");
printf("\ttroca os valores da variaveis x e y que sao\n");
printf("\tcopias das variaveis a e b da funcao main().\n\n");

printf("\to valor de x e' %d, o de y e' %d\n",x,y);

c = x;
x = y;
y = c;

printf("\to valor de x e' %d, o de y e' %d\n",x,y);
printf("\tfim da funcao troca\n\n");
}
#endif

/*

- O 2. metodo e' a passagem de parametros ou informacoes por "referencia" ou
"ponteiro" ou "endereco".

Como vimos, quando passamos parametros ou informacoes por "valor" ou "copia", a
funcao chamada cria novas variaveis do mesmo tipo dos parametros ou informacoes
passados e copia nelas os valores passados pela funcao que chamou.

Na passagem de parametros ou informacoes por "referencia" ou "ponteiro" ou
"endereco" a funcao que chama passa para a funcao chamada o endereco das
variaveis. A funcao chamada entao cria variaveis para receber esses enderecos ou
seja cria ponteiros que devem ser do mesmo tipo das variaveis que estao sendo
passada.

Diferentemente da passagem de parametros por "valor" ou "copia" onde nao se pode
alterar os valores das variaveis que sao passadas para a funcao chamada, aqui os
conteudos originais ou seja, das variaveis da funcao que chama, podem ser
alterados.

Lembrando que atraves dos ponteiros podemos acessar o conteudos da variaveis de
maneira indireta.

A passagem de parametros ou informacoes por "referencia" ou "ponteiro" ou
"endereco" e' normalmente utilizada para se trabalhar com vetores e estruturas
que nao devem utilizar a passagem por "valor" ou "copia".

Exemplos:*/

#ifdef ex2
void troca(int *p1,int *p2);

main()		/* exemplo passando o endereco das variaveis simples */
{
int a,b;
a = 10;
b = 20;

printf("main() -> antes da troca ---> a = %d  b = %d \n\n",a,b);

troca(&a,&b); /* chama a funcao "troca" agora passando como informacao os
                 enderecos das variaveis "a" e "b" */

printf("main() -> depois da troca --> a = %d  b = %d \n",a,b);
printf("Fim do programa\n");

}

/* funcao "troca"-> troca dois valores recebidos da funcao que chamou*/

void troca(int *p1,int *p2)
{
int c;

printf("\tfuncao troca()\n");
printf("\ttroca os conteudos da variaveis a e b da funcao main()\n");
printf("\tatraves dos enderecos da variaveis.\n\n");

c = *p1;
*p1 = *p2;
*p2 = c;

printf("\tfim da funcao troca\n\n");
}
#endif

#ifdef ex3
void troca(int *p1,int *p2);

main()		/* exemplo passando o endereco das variaveis simples */
{
int a,b, *pa, *pb;
a = 10;
b = 20;
pa = &a;
pb = &b;

printf("main() -> antes da troca ---> a = %d  b = %d \n\n",a,b);

troca(pa,pb); /* chama a funcao "troca" agora passando como informacao os
                 enderecos das variaveis "a" e "b" guardados no
                 ponteiros pa e pb*/

printf("main() -> depois da troca --> a = %d  b = %d \n",a,b);
printf("Fim do programa\n");

}

/* funcao "troca"-> troca dois valores recebidos da funcao que chamou*/

void troca(int *p1,int *p2)
{
int c;

printf("\tfuncao troca()\n");
printf("\ttroca os conteudos da variaveis a e b da funcao main()\n");
printf("\tatraves dos enderecos da variaveis.\n\n");

c = *p1;
*p1 = *p2;
*p2 = c;

printf("\tfim da funcao troca\n\n");
}
#endif

#ifdef ex4
void display(int *pont);

main()		/* Exemplo passando o endereco do 1. elemento do vetor */
{
int z[10],i;

printf("inicializa o vetor z com os valores de 10 a 19\n\n");

for(i=0;i < 10;++i)
	{
	z[i] = i+10;
	}

display(z); /* &z[0] */  /* chama a funcao "display" agora passando como
                            informacao o endereco do 1. elemento da
                            variavel vetor "z". */

printf("\nde volta a funcao main()\n");
printf("Fim do programa\n");
}

/* funcao "display" que mostra o conteudo de um vetor de 10 elementos */

void display(int *pont)
{
int i;

printf("\tfuncao display\n");
printf("\timprime na tela os valores do vetor z via o ponteiro \n");
printf("\tpont que aponta para o 1. elemento do vetor\n");

for(i=0;i < 10;i++)
	{
	printf("\t  %d\n",*(pont+i));  //pont[i]
	}
printf("\tfim da funcao display\n\n");
}
#endif

#ifdef ex5
void imprimir(struct data *pont);

		/* exemplo passando um ponteiro para estrutura */
struct data {
	int dia;
	int mes;
	int ano;
	int dia_ano;
	char nome_mes[10];
	};
main()
{
static struct data calendario = {7,9,1822,250,"setembro"};
struct data *prt;

printf("inicializa o ponteiro prt e chama a funcao imprimir()\n\n");

prt=&calendario;  /* guarda o endereco da variavel "calendario" no
                     ponteiro "prt" */

imprimir(prt); /* chama a funcao "imprimir" agora passando como informacao o
                  endereco da variavel do tipo estrutura de dados "calendario"
                  atribuido ao ponteiro "prt"*/

printf("de volta a funcao main()\n");
printf("Fim do programa\n");
}

/*funcao "imprimir" que mostra os dados da estrutura recebida da funcao main()*/

void imprimir(struct data *pont)
{
printf("\tfuncao imprimir()\n");
printf("\timprime os elementos da estrutura de dados calendario \n");
printf("\ta partir do ponteiro pont.\n\n");

printf("\tdata da procalmacao da independencia:\n");
printf("\t  %d\n",pont->dia);
printf("\t  %d\n",pont->mes);
printf("\t  %d\n",pont->ano);
printf("\t  %d\n",pont->dia_ano);
printf("\t  %s\n\n",pont->nome_mes);

printf("\tfim da funcao imprimir\n\n");
}
#endif
/*

/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que receba n valores via teclado e receba tambem a
    opera��o a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As opera��es aritmeticas e a entrada
    de dados devem ser funcoes que recebe os valores usando ponteiros.  
    As variaveis sao LOCAIS na funcao main().

2 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva 
    uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros. 
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa 
    usando ponteiros.(utilize o comando return). 
    O vetor deve ser declarado como variavel LOCAL na funcao main().

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

3 - Escreva um programa que receba em uma funcao 2 strings de ate' 10 caracteres
    passando como parametro ponteiro.
    Os vetores devem ser declarados como variaveis LOCAIS na fun��o main().
    Escreva uma funcao para comparar as 2 strings. Passe como parametros para 
    a funcao as 2 strings usando ponteiros e retorne como resultado se IGUAIS 1 
    ou se DIFERENTES 0. Mostre o resultado no video na funcao main().


4 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura e' uma variavel LOCAL na funcao main(). Receba via teclado o
    conteudo de cada um dos membros numa funcao e imprima-os no video no
    seguinte formato(tamb�m numa fun��o).

    estrutura: char, int, long, float, double, unsigned char, unsigned int,
    unsigned long

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long

5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel LOCAL na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa fun��o e imprima todos os registros no
    video em outra funcao. Fa�a um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a op��o de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
     estutura: nome, end, cidade, estado, cep

6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro sempre usando ponteiros.
*/

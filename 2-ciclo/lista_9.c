#define ex01


#ifdef ex01
/*1 - Escreva um programa que receba n valores via teclado e receba tambem a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funcoes que recebe os valores usando ponteiros.
    As variaveis sao LOCAIS na funcao main(). */

#include <stdio.h>
#include<locale.h>


#endif // ex01

#ifdef ex02
/* 2 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa
    usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel LOCAL na funcao main().

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y */
int main () {

char fim;

do {




   printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
   getchar();
   scanf("%c", &fim);
}while(fim!='s');

}
#endif // ex02

#ifdef ex03
/*3 - Escreva um programa que receba em uma funcao 2 strings de ate' 10 caracteres
    passando como parametro ponteiro.
    Os vetores devem ser declarados como variaveis LOCAIS na função main().
    Escreva uma funcao para comparar as 2 strings. Passe como parametros para
    a funcao as 2 strings usando ponteiros e retorne como resultado se IGUAIS 1
    ou se DIFERENTES 0. Mostre o resultado no video na funcao main().*/

#include<stdio.h>
#include<locale.h>

struct varis
{

    short curto;
    long longo;
    int inteiro;
    float flutuante;
    double dobro;
    char caracter;
};
int main()
{
    struct varis membros;
    char fim;

    setlocale(LC_ALL,"");

    do
    {

        printf("Insira uma variável do tipo short:\n");
        scanf("%hd", &membros.curto);
        printf("Insira uma variável do tipo long:\n");
        scanf("%ld", &membros.longo);
        printf("Insira uma variável do tipo inteira:\n");
        scanf("%d", &membros.inteiro);
        printf("Insira uma variável do tipo float:\n");
        scanf("%f", &membros.flutuante);
        printf("Insira uma variável do tipo double:\n");
        scanf("%lf", &membros.dobro);
        getchar();
        printf("Insira uma variável do tipo char:\n");
        scanf("%c", &membros.caracter);

        printf("       10        20        30        40        50        60\n");
        printf("12345678901234567890123456789012345678901234567890123456789012345\n");
        printf("    %hd                 %ld                 %d\n", membros.curto, membros.longo, membros.inteiro);
        printf("              %f                  %e                  %c", membros.flutuante, membros.dobro, membros.caracter);

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex03

#ifdef ex04
/*4 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura e' uma variavel LOCAL na funcao main(). Receba via teclado o
    conteudo de cada um dos membros numa funcao e imprima-os no video no
    seguinte formato(também numa função).

    estrutura: char, int, long, float, double, unsigned char, unsigned int,
    unsigned long

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long */
int main () {

char fim;

do {




   printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
   getchar();
   scanf("%c", &fim);
}while(fim!='s');

}
#endif // ex04

#ifdef ex05
/*5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel LOCAL na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa função e imprima todos os registros no
    video em outra funcao. Faça um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a opção de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
     estutura: nome, end, cidade, estado, cep */
int main () {

char fim;

do {




   printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
   getchar();
   scanf("%c", &fim);
}while(fim!='s');

}
#endif // ex05

#ifdef ex06
/* 6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro sempre usando ponteiros.
 */
int main () {

char fim;

do {




   printf("\n\n\n\nDeseja encerrar o programa? Digite s para sair.\n");
   getchar();
   scanf("%c", &fim);
}while(fim!='s');

}
#endif // ex06


#define ex06


#ifdef ex01
/*1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
    funcao para compara-las usando ponteiros e retorne como resultado se
    sao IGUAIS 1 ou se sao DIFERENTES 0 para a funcao main().
    Imprima o resultado na funcao main(). Declare os vetores como variavel global */

#include <stdio.h>
#include<locale.h>

char cadeia1[11], cadeia2[11];

int verifica ()
{
    int cont;
    for (cont=0; cont<11; cont++)
    {
        if (cadeia1[cont]!=cadeia2[cont])
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    setlocale(LC_ALL,"");

    char fim;
    int teste;

    do
    {
        system("cls");
        printf("Digite a primeira string:\n");
        gets(cadeia1);
        printf("Digite a segunda string:\n");
        gets(cadeia2);

        teste = verifica();

        if (teste==1)
        {
            printf("As strings digitadas são iguais.");
        }
        else
        {
            printf("As strings digitadas não são iguais.");

        }

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);

    }
    while(fim!='s');
}
#endif // ex01

#ifdef ex02
/* 2 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

#include <stdio.h>
#include<locale.h>

char vetor[] = {'b', 'd', 'f', 'h', 'j', 'k', 'm', 'o', 'q', 's', 'u', 'w', 'y'};

int pesquisaLetra(char letra) {
    char *ptr = vetor;

    while (*ptr != '\0') {
        if (*ptr == letra) {
            return 1;
        }
        ptr++;
    }

    return 0;
}

int main() {
    char letra, fim;


    do{


    printf("Digite uma letra: ");
    scanf("%c", &letra);

    int resultado = pesquisaLetra(letra);

    if (resultado == 1) {
        printf("A letra %c foi encontrada no vetor.\n", letra);
    } else {
        printf("A letra %c não foi encontrada no vetor.\n", letra);
    }

    printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);

}while(fim!='s');

}


#endif // ex02



#ifdef ex03
/*3 - Escreva um programa que receba via teclado usando ponteiros um char,
    int, long, unsigned, float, double, unsigned long e unsigned char,
    e imprima-os no video utilizando ponteiros no seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char */

#include<stdio.h>
#include<locale.h>

struct varis
{
    short *curto;
    long *longo;
    int *inteiro;
    float *flutuante;
    double *dobro;
    char *caracter;
};

int main()
{
    struct varis membros;
    char fim;

    setlocale(LC_ALL, "");

    do
    {
        short curto;
        long longo;
        int inteiro;
        float flutuante;
        double dobro;
        char caracter;

        membros.curto = &curto;
        membros.longo = &longo;
        membros.inteiro = &inteiro;
        membros.flutuante = &flutuante;
        membros.dobro = &dobro;
        membros.caracter = &caracter;

        printf("Insira uma variável do tipo short:\n");
        scanf("%hd", membros.curto);
        printf("Insira uma variável do tipo long:\n");
        scanf("%ld", membros.longo);
        printf("Insira uma variável do tipo inteira:\n");
        scanf("%d", membros.inteiro);
        printf("Insira uma variável do tipo float:\n");
        scanf("%f", membros.flutuante);
        printf("Insira uma variável do tipo double:\n");
        scanf("%lf", membros.dobro);
        getchar();
        printf("Insira uma variável do tipo char:\n");
        scanf("%c", membros.caracter);

        printf("       10        20        30        40        50        60\n");
        printf("12345678901234567890123456789012345678901234567890123456789012345\n");
        printf("    %hd                 %ld                 %d\n", *membros.curto, *membros.longo, *membros.inteiro);
        printf("              %f                  %e                  %c", *membros.flutuante, *membros.dobro, *membros.caracter);

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    } while(fim != 's');

    return 0;
}

#endif // ex03

#ifdef ex04
/*4 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado. Todos os calculos devem ser
    feitos usando ponteiro. */



#include<stdio.h>
#include<locale.h>

float calcularMedia(int *numeros, int tamanho)
{
    int soma = 0;
    int cont = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (numeros[i] < 0)
        {
            break;
        }
        soma += numeros[i];
        cont++;
    }

    if (cont > 0)
    {
        return (float) soma / cont;
    }
    else
    {
        return 0.0;
    }
}

int main()
{

    setlocale(LC_ALL, "");

    int numeros[100];
    int tamanho = 0;
    int numero;
    char fim;
    do
    {

    printf("Digite os números inteiros positivos (digite um número negativo para parar):\n");

    while (1)
    {
        scanf("%d", &numero);
        if (numero < 0)
        {
            break;
        }

        numeros[tamanho] = numero;
        tamanho++;
    }

    float media = calcularMedia(numeros, tamanho);

    printf("A media dos numeros digitados é: %.2f\n", media);

      printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    } while(fim != 's');

}

#endif // ex04

#ifdef ex05
/*5 - Escreva um programa com a estrutura abaixo. Receba 2 datas via teclado
    usando ponteiros. Calcule e exiba o numero de dias entre as duas datas
    usando ponteiros. Utilize um vetor de estruturas.
    	estrutura: dia, mes e ano */


#include<stdio.h>
#include<locale.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

int calcularDiferencaDias(struct Data *data1, struct Data *data2)
{
    int dias1 = data1->ano * 365 + data1->mes * 30 + data1->dia;
    int dias2 = data2->ano * 365 + data2->mes * 30 + data2->dia;

    return dias2 - dias1;
}

int main()
{
    setlocale(LC_ALL, "");

    struct Data data1;
    struct Data data2;
    char fim;

    do
    {
        printf("Digite a primeira data (dia mes ano): ");
        scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
        printf("Digite a segunda data (dia mes ano): ");
        scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
        int diferencaDias = calcularDiferencaDias(&data1, &data2);
        printf("O número de dias entre as duas datas é: %d\n", diferencaDias);

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim != 's');
}

#endif // ex05

#ifdef ex06
/* 6 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados via teclado numa funcao usando ponteiros. Imprima os dados
    recebidos no video numa usando ponteiros. Utilize um comando de loop.
    O vetor de estruturas de ser declarado como variavel global
       estrutura: nome, end, cidade, estado, cep
 */


#include<stdio.h>
#include<locale.h>

struct Dados
{
    char nome[50];
    char endereco[100];
    char cidade[50];
    char estado[3];
    char cep[10];
};

struct Dados vetorDados[4];

void receberDados(struct Dados *dados)
{
    printf("Digite o nome: ");
    scanf("%s", dados->nome);

    printf("Digite o endereço: ");
    scanf("%s", dados->endereco);

    printf("Digite a cidade: ");
    scanf("%s", dados->cidade);

    printf("Digite o estado: ");
    scanf("%s", dados->estado);

    printf("Digite o CEP: ");
    scanf("%s", dados->cep);
}

void imprimirDados(struct Dados *dados)
{
    printf("Nome: %s\n", dados->nome);
    printf("Endereço: %s\n", dados->endereco);
    printf("Cidade: %s\n", dados->cidade);
    printf("Estado: %s\n", dados->estado);
    printf("CEP: %s\n", dados->cep);
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "");
    char fim;

    do
    {
        for (int i = 0; i < 4; i++)
        {
            printf("Digite os dados para a pessoa %d:\n", i + 1);
            receberDados(&vetorDados[i]);
        }

        printf("\nDados recebidos:\n");

        for (int i = 0; i < 4; i++)
        {
            printf("Dados da pessoa %d:\n", i + 1);
            imprimirDados(&vetorDados[i]);
        }

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim != 's');

}



#endif // ex06


#define ex05

#ifdef ex01
/*1 - Escreva um programa que receba dois numeros inteiros e execute as seguintes
    funçoes:
    - Verificar se o numero digitado e' positivo ou negativo. Sendo que o valor de
      retorno sera' 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 numeros sao positivos, retorne a soma dos N numeros existentes entre
      eles.
    - Se os 2 numeros sao negativos, retorne a multiplicacao dos N numeros existente
      entre eles.
    - Se 1. numero for positivo e o 2. negativo faca a divisao entre eles.
*/

#include<stdio.h>
#include<locale.h>


int verifica(int auxnum)
{
    if (auxnum<0)
    {
        return 0;

    }
    else if(auxnum>0)
    {
        return 1;

    }
    else
        return -1;

}

int soma(int auxnum1, int auxnum2)
{
    int cont;
    int soma=0;

    if(auxnum1<auxnum2)
    {
        for(cont=auxnum1+1;cont<auxnum2;cont++)
        {
            soma=soma+cont;
        }

    }
    else
    {
        for(cont=auxnum2+1;cont<auxnum1;cont++)
        {
            soma=soma+cont;
        }
    }
    return soma;


}
int multiplica(int num1, int num2)
{
    int cont;
    int mult=1;

    if(num1<num2)
    {
        for(cont=num1+1;cont<num2;cont++)
        {
            mult=mult*cont;
        }

    }
    else
    {
        for(cont=num2+1;cont<num1;cont++)
        {
            mult=mult*cont;
        }
    }
    return mult;
}

float divide(int num1, int num2)
{
    float div;

    if (num1<num2)
    {
        div=(float)num2/(float)num1;
    }
    else{
        div=(float)num1/(float)num2;
    }
    return div;
}
int main ()
{
    setlocale(LC_ALL,"");

    int num1, num2, ver1, ver2;
    char fim;

    do
    {
    system("cls");
    printf("Insira um número qualquer para a primeira posição: \n");
    scanf("%d", &num1);
    ver1=verifica(num1);
    printf(" verifica é: %d ", ver1);
    printf("\nInsira um número qualquer para a segunda posição: \n");
    scanf("%d", &num2);
    ver2=verifica(num2);
    printf(" verifica é: %d ", ver2);

    if (ver1==1 && ver2==1)
    {
        printf("A soma dos números que estão entre %d e %d é %d.\n", num1, num2, soma(num1, num2));
    }
    else
    {
        if (ver1==0 && ver2==0)
        {
            printf("O produto dos números que estão entre %d e %d é %d.\n", num1, num2, multiplica(num1, num2));
        }
        else
        {
            printf("O quociente dos números %d e %d é %f.\n", num1, num2, divide(num1, num2));
        }
    }
        printf("\n\n\nDigite qualquer tecla para continuar ou digite s para sair do programa\n");
        getchar();
        scanf("%c",&fim);

    }while(fim!='s');

}

#endif // ex01



#ifdef ex02
/*2 - Escreva um programa que receba um numero N via teclado. Escreva uma funcao
    que retorne a soma dos algarismos do resultado de N!. O resultado deve ser
    mostrado na funcao main().

    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos e´ 2 + 4 = 6.*/

#include <stdio.h>
#include <locale.h>

long int fatorial (long int auxn)
{

    long int cont, produto=1, soma=0, uni=0;

    for (cont=1; cont<=auxn; cont++)
    {
        produto=cont*produto;
    }

    printf("O resutltado de %ld! é %ld", auxn, produto);

    do
    {
        soma=(produto%10)+soma;
        produto=produto/10;

    }
    while(produto>0);


    return soma;


}

long int main()
{

    long int n;
    char fim;
    setlocale(LC_ALL, "");

    do
    {
        system("cls");
        printf("Digite um número via teclado:\n");
        scanf("%ld", &n);

        printf("\nA soma dos algarismos de %ld! é %ld.\n ",n,fatorial(n));

        printf("\nDigite s para sair do programa:\n");
        getchar();
        scanf("%c", &fim);
    }
    while (fim!='s');
}

#endif // ex02



#ifdef ex03
/*3 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima os 4 resultados no video na funcao main().*/


#include<stdio.h>
#include<locale.h>

int soma(int n1, int n2)
{
    int soma;
    soma=n1+n2;
    return soma;
}

int subtracao(int n1, int n2)
{
    int sub;
    sub=n1-n2;
    return sub;
}
int multiplica (int n1, int n2)
{
    int mult;
    mult=n1*n2;
    return mult;
}
float divide (int n1, int n2)
{
    float div;
    div=(float)n1/(float)n2;
    return div;
}

int main()
{
    setlocale(LC_ALL,"");
    int n1,n2;
    char fim;
    do
    {

        system("cls");
        printf("Digite o primeiro número\n ");
        scanf("%d", &n1);
        printf("Digite o segundo número\n");
        scanf("%d", &n2);

        printf("\nA soma de %d e %d é %d ", n1, n2, soma(n1,n2));
        printf("\nA subtração de %d e %d é %d ", n1, n2, subtracao(n1,n2));
        printf("\nA multiplicação de %d e %d é %d ", n1, n2, multiplica(n1,n2));
        printf("\nA divisão de %d e %d é %.1f ", n1, n2, divide(n1,n2));

        printf("\n\nAperte s para sair ou qualquer tecla para continuar:\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex03



#ifdef ex04
/*4 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.*/

#include<stdio.h>
#include<locale.h>

int n[3];

int soma(int auxcont)
{
    int cont, soma=0;
    for(cont=0; cont<=auxcont; cont++)
    {
        soma=soma+n[cont];
    }
    return soma;
}

int subtracao(int auxcont)
{
    int cont, sub=n[0];
    for(cont=1; cont<=auxcont; cont++)
    {
        sub=sub-n[cont];
    }
    return sub;
}
int multiplica (int auxcont)
{
    int cont, mult=1;
    for(cont=0; cont<=auxcont; cont++)
    {
        mult=mult*n[cont];
    }
    return mult;
}
float divide (int auxcont)
{
    int cont;
    float div=n[0];
    for(cont=1; cont<=auxcont; cont++)
    {
        div=div/(float)n[cont];
    }
    return div;
}

int main()
{
    setlocale(LC_ALL,"");
    int cont, sair;
    char fim;
    do
    {
        for(cont=0; ; cont++)
        {
            printf("Digite o %d° número:\n", cont+1);
            scanf("%d", &n[cont]);

            printf("Digite 1 caso deseje continuar.\n");
            scanf("%d", &sair);
            if(sair!=1)
            {
                break;
            }
            system("cls");

        }

        printf("\nA soma dos números digitados é %d", soma(cont));
        printf("\nA subtração dos números digitados é %d", subtracao(cont));
        printf("\nA multiplicação dos números digitados é %d", multiplica(cont));
        printf("\nA divisão dos números digitados é %.3f ", divide(cont));

        printf("\n\nAperte s para sair ou qualquer tecla para continuar:\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex04



#ifdef ex05
/*5 - Escreva um programa que receba n valores inteiros via teclado na funcao main().
    Faca uma calculadora com as 4 operacoes aritmeticas.(utilize o comando switch).
    As operacoes aritmeticas devem ser funcoes. O resultado acumulado deve ser
    mostrado na funcao main().*/

#include<locale.h>
#include<stdio.h>

int n[3];

int soma(int auxcont)
{
    int cont, soma=0;
    for(cont=0; cont<=auxcont; cont++)
    {
        soma=soma+n[cont];
    }
    return soma;
}

int subtracao(int auxcont)
{
    int cont, sub=n[0];
    for(cont=1; cont<=auxcont; cont++)
    {
        sub=sub-n[cont];
    }
    return sub;
}
int multiplica (int auxcont)
{
    int cont, mult=1;
    for(cont=0; cont<=auxcont; cont++)
    {
        mult=mult*n[cont];
    }
    return mult;
}
float divide (int auxcont)
{
    int cont;
    float div=n[0];
    for(cont=1; cont<=auxcont; cont++)
    {
        div=div/(float)n[cont];
    }
    return div;
}

int main()
{
    setlocale(LC_ALL,"");
    int cont, sair, s;
    char fim, op ;


    do
    {
        system("cls");
        printf("Escolha a operação que deseja:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
        scanf("%d",&s);
        system("cls");

        switch (s)
        {
        case 1:
        {
            printf("\nA soma dos números digitados é %d", soma(cont));
            break;
        }
        case 2:
        {
            printf("\nA subtração dos números digitados é %d", subtracao(cont));
            break;
        }
        case 3:
        {
            printf("\nA multiplicação dos números digitados é %d", multiplica(cont));
            break;
        }
        case 4:
        {
            printf("\nA divisão dos números digitados é %.3f ", divide(cont));
            break;
        }
        default:
            printf("Opção inválida, tente novamente!\n\n");
            goto inicio;
            break;
        }
         for(cont=0; ; cont++)
        {
            printf("Digite o %d° número:\n", cont+1);
            scanf("%d", &n[cont]);

            printf("Deseja continuar? s/n.\n");
            getchar();
            scanf("%c", &op);
            if(op!='s')
            {
                break;
            }
            system("cls");

        }
        inicio:
        printf("\n\nAperte s para sair ou qualquer tecla para continuar:\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex05

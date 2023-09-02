#define ex04

#ifdef ex01
/*1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.*/

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");

    char fim;
    int num1, num2;

    do
    {   system("cls");

printf("Insira o 1° número:\n");
scanf("%d", &num1);

printf("Insira o 2° número:\n");
scanf("%d", &num2);

printf("O 1° número digitado é %d\n", num1);
printf("O 2° número digitado é %d\n", num2);
printf("A adição de %d e %d é %d\n", num1, num2, num1+num2);
printf("A subtração de %d e %d é %d\n", num1, num2, num1-num2);
printf("A multiplicação de %d e %d é %d\n", num1, num2, num1*num2);
printf("A divisão de %d e %d é %f\n", num1, num2, (float)num1/(float)num2);


        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');

}
#endif // ex01

#ifdef ex02
/*2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.*/

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");

    char fim;
    int num1, num2;

    do
    {   system("cls");

printf("Insira o 1° número:\n");
scanf("%d", &num1);

printf("Insira o 2° número:\n");
scanf("%d", &num2);

system("cls");

printf("O 1° número digitado é %d\n", num1);
printf("O 2° número digitado é %d\n", num2);

num1+=num2;
printf("A adição dos números digitados é %d\n", num1);

num1-=2*num2;
printf("A subtração dos números digitados é %d\n", num1);

num1+=num2;
num1*=num2;
printf("A multiplicação dos números digitados é %d\n", num1);

num1/=num2;
printf("A divisão dos números digitados é %f\n", (float)num1/(float)num2);

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex02

#ifdef ex03
/*3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.*/

#include<stdio.h>
#include<locale.h>

int dias (int mes, int ano)
{
    if (mes==4 || mes==6 || mes==9 || mes==1)
        {
            return 30;
        }
        else
        {
            if (mes==2)
            {
                if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                {
                    return 29;
                }
                else
                {
                    return 28;
                }
            } else
            {
                return 31;
            }
        }
}



int main()
{
    setlocale(LC_ALL,"");
    int ano, dia, mes, anoi, diai, mesi, anof, diaf, mesf, dias_mes;
    char fim;

    do
    {
        printf("\nDigite o ano do seu nascimento: ");
        scanf("%d", &anoi);

        printf("\nDigite o mês do seu nascimento: ");
        scanf("%d", &mesi);

        printf("\nDigite o dia do seu nascimento: ");
        scanf("%d", &diai);

        printf("\nDigite o ano atual: ");
        scanf("%d", &anof);

        printf("\nDigite o mês atual: ");
        scanf("%d", &mesf);

        printf("\nDigite o dia atual: ");
        scanf("%d", &diaf);

        system("cls");

        ano = anof-anoi;
        mes = mesf-mesi;
        if (mes<0){
            ano = ano-1;
            mes = 12+mes;
        }

        dia = diaf-diai;
            if (dia<0){
                mes=mes-1;
            dia = diaf + dias(mesf, anof) - diai;
            }

        printf("Você está vivo a %d dias, %d meses e %d anos.", dia, mes, ano);

            printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
            getchar();
            scanf("%c", &fim);
        }
        while(fim!='s');

    }
#endif // ex03

#ifdef ex04
/*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    char fim;
    int num1, num2;

    do
    {
        system("cls");
        printf("\nDigite o primeiro número: ");
        scanf("%d", &num1);
        printf("\nDigite o segundo número: ");
        scanf("%d", &num2);

        printf("Com o operador lógico AND:\n");
        printf("Decimal: %d\n", num1&num2);
        printf("Hexadecimal: %x\n", num1&num2);

        printf("Com o operador lógico OR:\n");
        printf("Decimal: %d\n", num1 | num2);
        printf("Hexadecimal: %x\n", num1 | num2);

        printf("Com o operador lógico XOR:\n");
        printf("Decimal: %d\n", num1 ^ num2);
        printf("Hexadecimal: %x\n", num1 ^ num2);

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');

}
#endif // ex04

#ifdef ex05
/*5 - Escreva um programa que receba via teclado uma data (dia, mes, e ano).
    Determine o dia da semana desta data.*/

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int dia, mes, ano, aux;
    char fim;

    do
    {   system("cls");

        printf("\nDigite o dia: ");
        scanf("%d", &dia);

        printf("\nDigite o mês: ");
        scanf("%d", &mes);

        printf("\nDigite o ano:");
        scanf("%d", &ano);

        aux=(dia + (13*(mes+1)/5) + (ano % 100) + ((ano % 100)/4) + ((ano / 100)/4) - 2*(ano / 100)) % 7;

        if(aux==0){
            printf("%d/%d/%d corresponde a um sábado.", dia, mes, ano);
        } else {
            if(aux==1){
            printf("%d/%d/%d corresponde a um domingo.", dia, mes, ano);
        } else {
            if(aux==2){
            printf("%d/%d/%d corresponde a uma segunda-feira.", dia, mes, ano);
        } else {
            if(aux==3){
            printf("%d/%d/%d corresponde a uma terça-feira.", dia, mes, ano);
        } else {
            if(aux==4){
            printf("%d/%d/%d corresponde a uma quarta-feira.", dia, mes, ano);
        } else {
            if(aux==5){
            printf("%d/%d/%d corresponde a uma quinta-feira.", dia, mes, ano);
        } else {
            printf("%d/%d/%d corresponde a uma sexta-feira.", dia, mes, ano);
        }}}}}}

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        scanf("%c", &fim);
        getchar();

    } while(fim!='s');

}
#endif // ex05

#define ex02


#ifdef ex01
/*1 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/

#include<stdio.h>
#include<locale.h>

main ()
{
    int tempo;
    setlocale(LC_ALL,"");
    printf("Digite o tempo em segundos:\n");
    scanf("%d", &tempo);
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.", tempo, (tempo/60)/60, (tempo/60)%60, tempo%60);
}
#endif // ex01


#ifdef ex02
/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/

#include <stdio.h>
#include <locale.h>

main ()
{
    short curto;
    long longo;
    int inteiro;
    float flutuante;
    double dobro;
    char caracter;
    setlocale(LC_ALL,"");

    printf("Insira uma variável do tipo short:\n");
    scanf("%hd", &curto);
    printf("Insira uma variável do tipo long:\n");
    scanf("%ld", &longo);
    printf("Insira uma variável do tipo inteira:\n");
    scanf("%d", &inteiro);
    printf("Insira uma variável do tipo float:\n");
    scanf("%f", &flutuante);
    printf("Insira uma variável do tipo double:\n");
    scanf("%lf", &dobro);
    getchar();
    printf("Insira uma variável do tipo char:\n");
    scanf("%c", &caracter);

    printf("       10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    %hd                 %ld                 %d\n" , curto, longo, inteiro);
    printf("              %f                  %e                  %c" , flutuante, dobro, caracter);
}
#endif // ex02


#ifdef ex03
/*3 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/

#include<stdio.h>
#include<locale.h>

main ()
{

    int num, lim, cont;

    setlocale(LC_ALL,"");

    printf("Insira um número inteiro: \n");
    scanf("%d", &num);

    printf("Insira um limite: \n");
    scanf("%d", &lim);

    for(cont=lim+1; ; cont++)
    {
        if (cont%num==0)
        {
            printf("O menor múltiplo de %d, partindo do número %d, é %d", num, lim, cont);
            break;
        }
    }
}
#endif // ex03


#ifdef ex04
/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/

#include<stdio.h>
#include<locale.h>

    main()
    {
        int num1, num2;
        setlocale(LC_ALL, "");

        printf("Digite o primeiro número \n");
        scanf("%d", &num1);
        printf("Digite o segundo numero \n");
        scanf("%d", &num2);
        printf("\nANTES DA PERMUTAÇÃO:\nA primeira variável é %d \nA segunda variável é %d \n\n\n", num1, num2);

        num1 = num1+num2;
        num2 = num1-num2;
        num1 = num1-num2;

        printf("APÓS A PERMUTAÇÃO:\nA primeira variável será %d \nA segunda variável será %d\n", num1, num2);
    }
#endif // ex4


#ifdef ex05
/*5 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/

#include <stdio.h>
#include <locale.h>

main ()
{
    int num, uni, dez, cen;
    setlocale(LC_ALL,"");
    do
    {
        printf("Digite um número positivo de três algarismos: \n");
        scanf("%d", &num);
        if(num<0 || num>999)
        {
            printf("Número inválido!\n");
        }
    }
    while(num<0 || num>999);

    cen = num/100;
    dez = (num%100)/10;
    uni = ((num%100)%10);
    printf("O número digitado é %d \n",num);
    printf("O número gerado é %d%d%d \n", uni, dez, cen);
}

#endif // ex05

#define ex01

#ifdef ex01
/*1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
    funcao para compara-las e retorne como resultado se são IGUAIS 1 ou se
    DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
    (Declare os vetores como variavel global)*/

#include <stdio.h>
#include<locale.h>

char cadeia1[11], cadeia2[11];

int verifica () {
    int cont;
    for (cont=0; cont<11; cont++) {
    if (cadeia1[cont]!=cadeia2[cont]){
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
    
    if (teste==1) {
        printf("As strings digitadas são iguais.");
    } else {
        printf("As strings digitadas não são iguais.");

    }

    printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
    scanf("%c", &fim);
    getchar();
    }
    while(fim!='s');
}

#endif // ex01

#ifdef ex02
/*2 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os 5 vetores como variaveis
    globais)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3*/

#include <stdio.h>
#include<locale.h>

char nome1[8], nome2[8], nome3[8], nome4[8], nome5[8];

int main()
{
    setlocale(LC_ALL,"");

    char fim;
    

    do
    {   system("cls");

    printf("Digite o primeiro nome:\n");
    gets(nome1);
    printf("Digite o segundo nome:\n");
    gets(nome2);
    printf("Digite o terceiro nome:\n");
    gets(nome3);
    printf("Digite o quarto nome:\n");
    gets(nome4);
    printf("Digite o quinto nome:\n");
    gets(nome5);
    
    
    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("  %s                                   %s\n", nome1, nome5);
    printf("            %s               %s\n", nome2, nome4);
    printf("                      %s\n", nome3);


        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        scanf("%c", &fim);
        getchar();
    }
    while(fim!='s');

}
#endif // ex02

#ifdef ex03
/*3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.*/

#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"");
    char cadeia[10];
    char fim;
    int cont;

    do
    {   
    system("cls");

    printf("Digite a string:\n");
    gets(cadeia);
    system("cls");
    printf("A cadeia de caracteres digita é: %s\n", cadeia);

    for(cont=0; cont<10; cont++) {
        cadeia[cont] = toupper(cadeia[cont]);
    }

    printf("A cadeia de caracteres escrita em letras maiúsculas é: %s", cadeia);


        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        scanf("%c", &fim);
        getchar();
    }
    while(fim!='s');
}
#endif // ex03

#ifdef ex04
/*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.*/
    
#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"");
    char cadeia[10];
    char fim;
    int cont;

    do
    {   
    system("cls");

    printf("Digite a string:\n");
    gets(cadeia);
    system("cls");
    printf("A cadeia de caracteres digita é: %s\n", cadeia);

    for(cont=0; cont<10; cont++) {
        cadeia[cont] = tolower(cadeia[cont]);
    }

    printf("A cadeia de caracteres escrita em letras minúsculas é: %s", cadeia);


        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        scanf("%c", &fim);
        getchar();
    }
    while(fim!='s');
}
#endif // ex04

#ifdef ex05
/*5 - Escreva um programa que receba uma string na funcao main(). Faca uma funcao que
    calcula o comprimento de uma string recebida via teclado. Mostre o valor do
    comprimento na funcao main().
    (Declare o vetor como variavel global)*/

#include <stdio.h>
#include<locale.h>

char cadeia[]; 

int tamanho () {
    int cont;
    for (cont=0; ; cont++) {
        if (cadeia[cont] == '\0'){
            return cont+1;
        }
    }
}

int main()
{
    setlocale(LC_ALL,"");
    char fim;

    do
    {   
    system("cls");
    
    printf("Digite a string:\n");
    gets(cadeia);
    system("cls");
    printf("A string digitada é: %s\n", cadeia);
    printf("A string tem %d posições, incluindo o caracter nulo\n", tamanho());


        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        scanf("%c", &fim);
        getchar();
    }
    while(fim!='s');
}
#endif // ex05

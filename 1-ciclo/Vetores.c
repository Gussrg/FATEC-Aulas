#define ex0

#ifdef ex0
#include<stdio.h>
#include<locale.h>
int main()
{
    int A[6], cont, soma=0;
    setlocale(LC_ALL,"");
    for(cont=0; cont<6; cont++){
        printf("Digite um n�mero qualquer\n");
        scanf("%d", &A[cont]);
        soma=soma+A[cont];
    }
    system("cls");
    for(cont=0; cont<6; cont++){
        printf("A[%d] = %d\n", cont ,A [cont]);
    }
    printf("A soma de todos os n�meros armazenados no vetor � %d ", soma);

    return 0;
}
#endif // ex0

#ifdef ex1
/*1. Leia quinze elementos de um vetor. Ap�s a alimenta��o mostre todos os elementos armazenados no vetor.*/

#include<stdio.h>
#include<locale.h>
int main()
{
    int A[15], cont;
    setlocale(LC_ALL,"");
    for(cont=0; cont<15; cont++){
        printf("Digite um n�mero qualquer\n");
        scanf("%d", &A[cont]);
    }
    system("cls");
    for(cont=0; cont<15; cont++){
        printf("A[%d] = %d\n", cont ,A [cont]);
    }
    return 0;
}
#endif // ex1

#ifdef ex2
/*2. Receba doze n�meros positivos e armazene no vetor A. Ap�s a alimenta��o
de todos os n�meros mostre apenas os n�meros maiores que 121 que est�o armazenados no vetor.*/

#include<stdio.h>
#include<locale.h>
int main()
{
    int A[12], cont;
    setlocale(LC_ALL,"");
    for(cont=0; cont<12; cont++){
        printf("Digite um n�mero qualquer\n");
        scanf("%d", &A[cont]);
        while (A[cont]<0){
        printf("Valor inv�lido. Digite novamente.\n");
        scanf("%d", &A[cont]);
        }
    }
    system("cls");
    for(cont=0; cont<12; cont++){
        if (A[cont]>121){
        printf("A[%d] = %d\n", cont ,A[cont]);
        }
    }
    return 0;
}
#endif // ex2


#ifdef ex3
/*3. Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimens�o com os elementos do vetor A multiplicados por 3.
 Apresente o conte�do dos dois vetores*/

#include<stdio.h>
#include<locale.h>
int main()
{
    int A[8],B[8],cont;
    setlocale(LC_ALL,"");
    for(cont=0; cont<8; cont++){
        printf("Digite um n�mero qualquer\n");
        scanf("%d", &A[cont]);
        B[cont]=A[cont]*3;
    }
    system("cls");
    for(cont=0; cont<8; cont++){
                printf("A[%d] = %d\t, B[%d] = %d\n", cont ,A[cont],cont, B[cont]);
        }
    return 0;
}
#endif // ex3


#ifdef ex4
/*4. Fa�a um programa que armazene num vetor 6 n�meros negativos. Calcule a soma dos seus quadrados;
se a soma for inferior a 1000 solicite novos dados. Mostre somente a soma que satisfaz a condi��o.*/

#include<stdio.h>
#include<locale.h>
int main()
{
    int A[8],B[8],cont;
    setlocale(LC_ALL,"");
    for(cont=0; cont<8; cont++){
        printf("Digite um n�mero qualquer\n");
        scanf("%d", &A[cont]);
        B[cont]=A[cont]*3;
    }
    system("cls");
    for(cont=0; cont<8; cont++){
                printf("A[%d] = %d\t, B[%d] = %d\n", cont ,A[cont],cont, B[cont]);
        }
    return 0;
}
#endif // ex4


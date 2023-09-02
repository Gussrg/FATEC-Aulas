#define ex04

#ifdef ex01

/*1 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera´ as componentes de ordem impar
    e o outro tera´ as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}. */

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetor[10], impar[5], par[5], cont, n=0, q=0;
    char fim;

    do
    {
        system("cls");

        for(cont=0; cont<10; cont++)
        {
            printf("\nDigite o númedo da posição %d: ",cont);
            scanf("%d",&vetor[cont]);
        }

        system("cls");

        for(cont=0; cont<10; cont++)
        {
            printf("vetor[%d] = %d\n", cont, vetor[cont]);

            if(cont%2==0)
            {
                par[n]=vetor[cont];
                n++;
            }
            else
            {
                impar[q]=vetor[cont];
                q++;
            }
        }
        for(cont=0; cont<5; cont++)
        {
            printf("A posição %d do vetor par é %d\n", cont, par[cont]);
        }

        for(cont=0; cont<5; cont++)
        {
            printf("A posição %d do vetor ímpar é %d\n", cont, impar[cont]);
        }




        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');

}

#endif // ex1

#ifdef ex02


/*2 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera´ as componentes de valor impar
    e o outro tera´ as componentes de valor par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}.*/

#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    int cont, p=0, i=0, v[10], par[10], impar[10];
    char fim;

    do
    {
        for (cont=0; cont<10; cont++)
        {
            printf("Insira o %d° elemento do vetor v:", cont+1);
            scanf("%d", &v[cont]);
        }
        system("cls");

        for (cont=0; cont<10; cont++)
        {
            if (v[cont]%2==0)
            {
                par[p]=v[cont];
                p++;
            }
            else
            {
                impar[i]=v[cont];
                i++;
            }
            system("cls");
        }

        printf("\nElementos do vetor v:\n");
        for (cont=0; cont<10; cont++)
        {
            printf("Elemento %d: %d \n", cont+1, v[cont]);
        }

        printf("\nElementos do vetor par:\n");

        if(p==0)
        {
            printf("Não há elementos no vetor par.\n");
        }

        for (cont=0; cont<p; cont++)
        {
            printf("Elemento %d: %d \n", cont+1, par[cont]);
        }

        printf("\nElementos do vetor ímpar:\n");
        if(i==0)
        {
            printf("Não há Elementos no vetor ímpar.\n");
        }

        for (cont=0; cont<i; cont++)
        {
            printf("Elemento %d: %d \n", cont+1, impar[cont]);
        }

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex02

#ifdef ex03
/*3 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    adicao "+", some os elementos de mesmo indice dos 2 vetores e guarde o
    resultado em um 3. vetor. Imprima na tela o indice, os valores e o resultado
    dos 6 elementos dos vetores.*/

#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "");
    int cont1, cont2, vet1[2][3], vet2[2][3], vet3[2][3];
    char fim;

    do
    {
        for (cont1=0; cont1<2; cont1++)
        {
            for (cont2=0; cont2<3; cont2++)
            {
                printf("Insira o elemento da linha %d e coluna %d da 1ª matriz:\n", cont1+1, cont2+1);
                scanf("%d", &vet1[cont1][cont2]);
            }
        }

        system("cls");

        for (cont1=0; cont1<2; cont1++)
        {
            for (cont2=0; cont2<3; cont2++)
            {
                printf("Insira o elemento da linha %d e coluna %d da 2ª matriz:\n", cont1+1, cont2+1);
                scanf("%d", &vet2[cont1][cont2]);
            }
        }

        system("cls");

        for (cont1=0; cont1<2; cont1++)
        {
            for (cont2=0; cont2<3; cont2++)
            {
                vet3[cont1][cont2]=vet1[cont1][cont2]+vet2[cont1][cont2];
            }
        }

        printf("\nMatriz 1:\n");
        for (cont1=0; cont1<2; cont1++)
        {
            for (cont2=0; cont2<3; cont2++)
            {
                printf("Índice %d%d: %d\n", cont1, cont2, vet1[cont1][cont2]);
            }
        }

        printf("\nMatriz 2:\n");
        for (cont1=0; cont1<2; cont1++)
        {
            for (cont2=0; cont2<3; cont2++)
            {
                printf("Índice %d%d: %d\n", cont1, cont2, vet2[cont1][cont2]);
            }
        }

        printf("\nMatriz 3:\n");
        for (cont1=0; cont1<2; cont1++)
        {
            for (cont2=0; cont2<3; cont2++)
            {
                printf("Índice %d%d: %d\n", cont1, cont2, vet3[cont1][cont2]);
            }
        }
        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}

#endif // ex03

#ifdef ex04

/*4 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double */

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    int cont, inteiro[3];
    float flutuante[3];
    long longo[3];
    double dobro[3];
    unsigned int positivo[3];

    for (cont=0; cont<3; cont++)
    {
        printf("Digite a %dª variável inteira:\n", cont+1);
        scanf("%d", &inteiro[cont]);

        printf("Digite a %dª variável do tipo float:\n", cont+1);
        scanf("%f", &flutuante[cont]);

        printf("Digite a %dª variável do tipo long:\n", cont+1);
        scanf("%ld", &longo[cont]);

        printf("Digite a %dª variável do tipo double:\n", cont+1);
        scanf("%lf", &dobro[cont]);

        printf("Digite a %dª variável do tipo unsigned:\n", cont+1);
        scanf("%u", &positivo[cont]);

        system("cls");
    }

    printf("    10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    for (cont=0; cont<3; cont++)
    {
        printf("   %d                 %ld                 %u\n", inteiro[cont], longo[cont], dobro[cont]);
        printf("            %f                  %lf\n", flutuante[cont], dobro[cont]);
    }
}


#endif // ex04

#ifdef ex05
/*5 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores
    ordenados.*/

#include<stdio.h>
#include<locale.h>

int main () {
    
    setlocale(LC_ALL, "");
    int vetor[10], cont1, cont2, aux;
    
    for (cont1=0; cont1<10; cont1++) {
        printf("Digite a %dª variável inteira:\n", cont1+1);
        scanf("%d", &vetor[cont1]);
        
        for (cont2=cont1; cont2>0; cont2--) {
            if (vetor[cont2] < vetor[cont2 - 1]) 
            {
                aux = vetor[cont2];
                vetor[cont2]=vetor[cont2-1];
                vetor[cont2-1]=aux;
            } else {
                break;
            }
        }
    }
    
    printf("Valores organizados em ordem crescente:\n");
    for (cont1=0; cont1<10; cont1++) {
        printf("%d\n", vetor[cont1]);
    }
    
}

#endif //ex05

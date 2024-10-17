//Gustavo Rebelo Godoy

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

#define ex04

#ifdef ex01

/*1.	Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero,
o terceiro deve ser a soma dos dois primeiros e o quarto é o produto dos três números anteriores.
Calcule e exiba a soma dos quadrados de cada um dos quatro números. Caso o resultado seja menor que 50000, solicite novos dados. */

int main()
{
    setlocale(LC_ALL,"");

    int num1, num2, num3, num4, quad;
    char sair;
    do
    {
     system("cls");
        do
        {
            do
            {
                printf("Insira um número maior que 10 e menor que 25:");
                scanf("%d",&num1);
                system("cls");
            }
            while(num1<10||num1>25);

            do
            {
                printf("Insira um número igual ou maior que 0:");
                scanf("%d",&num2);
                system("cls");
            }
            while(num1<0);

            num3 = num1+num2;
            num4 = num1*num2*num3;
            quad = num1*num1 + num2*num2 + num3*num3 + num4*num4;
            if(quad<5000)
            {
                printf("O resultado deu menor que 5000, insira novos dados\n");
            }
        }
        while(quad<5000);

        printf("Os números inseridos são: %d e %d \nA soma dos dois é: %d \nO produto dos três números anteriores é %d: \nA soma do quadrado de todos os números é: %d ", num1, num2, num3, num4, quad);

        printf("\n\n\nDeseja encerrar o programa? s/n: ");
        getchar();
        scanf("%c",&sair);

    }
    while(sair!='s');

}

#endif // ex01

#ifdef ex02

/* */
int main()
{
    setlocale(LC_ALL,"");

    int id;
    float n1, n2, n3, me, ma;
    char con = 'A', sair;
    char* sit = "Aprovado";

    //me = média dos exercicios
    //ma = média de aproveitamento

    do
    {
        system("cls");
        printf("Entre com o número de identificação do aluno: ");
        scanf("%d",&id);
        system("cls");
        do
        {
            printf("Entre com a primeira nota entre 0 e 10: ");
            scanf("%f", &n1);
            system("cls");
        }
        while(n1<0 || n1>10);
        do
        {
            printf("Entre com a segunda nota entre 0 e 10: ");
            scanf("%f", &n2);
            system("cls");
        }
        while(n2<0 || n2>10);
        do
        {
            printf("Entre com a terceira nota entre 0 e 10: ");
            scanf("%f", &n3);
            system("cls");
        }
        while(n3<0 || n3>10);
        do
        {
            printf("Entre com a nota média dos exercicios entre 0 e 10: ");
            scanf("%f", &me);
            system("cls");
        }
        while(me<0 || me>10);

        //MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7

        ma = (n1+me+(2*n2 + 3*n3))/7;
        if (ma >= 9)
        {
            con = 'A';
            sit = "Aprovado";
        }
        else if (ma >= 7.5)
        {
            con = 'B';
            sit = "Aprovado";
        }
        else if (ma >= 6)
        {
            con = 'C';
            sit = "Aprovado";
        }
        else if (ma >= 4)
        {
            con = 'D';
            sit = "Reprovado";
        }
        else
        {
            con = 'E';
            sit = "Reprovado";
        }
        printf("*******************************************\n");
        printf(" Aluno %d\n", id);
        printf(" Nota 1                  - %.1f\n", n1);
        printf(" Nota 2                  - %.1f\n", n2);
        printf(" Nota 3                  - %.1f\n", n3);
        printf(" Média dos exercicios    - %.1f\n", me);
        printf(" Média de aproveitamento - %.1f\n", ma);
        printf(" Conceito                - %c\n", con);
        printf(" Situação final          - %s\n", sit);
        printf("*******************************************\n");

        printf("\n\n\nDeseja encerrar o programa? s/n: ");
        getchar();
        scanf("%c",&sair);

    }
    while(sair!='s');
    return 0;
}

#endif // ex02

#ifdef ex03

/* */
int main()
{
    setlocale(LC_ALL, "");

    int n1, n2, n3;
    char sair;
    do{
        system("cls");
        do{
            printf("Digite um número:");
            scanf("%d", &n1);
            printf("Digite o segundo número:");
            scanf("%d", &n2);
            printf("Digite o terceiro número:");
            scanf("%d",&n3);
            system("cls");

            if(n1==n2 && n1==n3){
                printf("****************************\n");
                printf("** Entre com novos dados! **\n");
                printf("****************************\n\n");
            }
        }
        while(n1==n2 && n1==n3);
        if(n1>n2 || n1>n3){
            printf("O maior número é: %d ", n1);
        }else if(n2>n1 || n2>n3){
            printf("O maior número é: %d ", n2);
        } else{
            printf("O maior número é: %d ", n3);
        }
        printf("\n\n\nDeseja encerrar o programa? s/n: ");
        getchar();
        scanf("%c",&sair);

    }
    while(sair!='s');


}

#endif // ex03

#ifdef ex04

/* */
int main(){
    setlocale(LC_ALL, "");

        int n1, n2, n3;
        char sair;

        do{
            system("cls");
            do{
                printf("Digite o tamanho de um lado de um triângulo:");
                scanf("%d", &n1);
                printf("Digite o segundo lado de um triângulo:");
                scanf("%d", &n2);
                printf("Digite o terceiro lado de um triângulo:");
                scanf("%d",&n3);
                system("cls");
                if(n1>n2+n3 || n2>n1+n3 || n3>n2+n1){
                    printf("Um dos lados não pode ser maior que a soma dos outros dois, insira novos dados!\n\n");
                }
            }while(n1>n2+n3 || n2>n1+n3 || n3>n2+n1);
            if(n1==n2 && n2==n3){
                printf("É um triângulo equilátero!\n");

            } else if(n1==n2 || n1==n3 || n2==n3){
                printf("O triângulo é isóceles!\n");

            }else{
                printf("O triângulo é escaleno!\n");
            }
        printf("\n\n\nDeseja encerrar o programa? s/n: ");
        getchar();
        scanf("%c",&sair);

    }
    while(sair!='s');


}

#endif // ex04

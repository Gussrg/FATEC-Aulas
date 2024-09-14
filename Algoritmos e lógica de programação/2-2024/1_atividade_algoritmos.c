#include<stdio.h>
#include<locale.h>

#define ex01

#ifdef ex01

/*1.	Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero,
o terceiro deve ser a soma dos dois primeiros e o quarto é o produto dos três números anteriores.
Calcule e exiba a soma dos quadrados de cada um dos quatro números. Caso o resultado seja menor que 50000, solicite novos dados. */

int main()
{
    setlocale(LC_ALL,"");

    int num1, num2, num3, num4, quad;
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


}

#endif // ex01

#ifdef ex02

/* */
int main(){
    setlocale("",LC_ALL);



}

#endif // ex02

#ifdef ex03

/* */
int main(){
    setlocale("",LC_ALL);



}

#endif // ex03

#ifdef ex04

/* */
int main(){
    setlocale("",LC_ALL);



}

#endif // ex04

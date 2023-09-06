#define ex1

#include<stdio.h>
#include<locale.h>


#ifdef ex1
//1. Ler um número inteiro e imprimir seu sucessor e seu antecessor.

int main(void)
{
    setlocale(LC_ALL, "");
    int num;

        printf("Digite um número!\n");
        scanf("%d",&num);
        printf("\nO antececessor de %d é o número %d, sendo seu sucessor é %d \n", num, num-1, num+1);
    return 0;
}
#endif // ex1

#ifdef ex2

//2. Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

int main()
{

    return 0;
}

#endif // ex2

#ifdef ex3

//3. Informar um preço de um produto e calcular novo preço com desconto de 9%
int main()
{

    return 0;
}
#endif // ex3

#ifdef ex4

//4. Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.

int main()
{

    return 0;
}
#endif // ex4

#ifdef ex5

/* 5. O custo ao consumidor de um carro novo é a soma do preço da fábrica com o
*   percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça
*   um programa que receba o preço de fábrica de um veículo, o percentual de lucro do
*   distribuidor e o percentual de impostos. Calcule e mostre:
*   a. O valor correspondente ao lucro do distribuidor
*   b. O valor correspondente aos impostos
*   c. O preço final do veículo
*/

int main()
{

    return 0;
}

#endif // ex5

#define ex3

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
    setlocale(LC_ALL,"");

    float num;

    printf("Insira um número\n");
    scanf("%f",&num);
    system("cls");
    printf("O valor reajustado de %.2f é %.2f\n", num,num+(num/10));

    return 0;
}

#endif // ex2

#ifdef ex3

//3. Informar um preço de um produto e calcular novo preço com desconto de 9%

int main()
{
    setlocale(LC_ALL,"");

    float preco;

    do
    {
        printf("Insira o preço de um produto.\n");
        scanf("%f",&preco);
        if (preco<=0)
        {
            printf("Valor não pode ser negativo\n");
        }
    }
    while (preco<=0);
    system("cls");
    printf("O preço do produto passou de: %.2f para o novo preço de %.2f\n", preco, preco*0.91);

    return 0;
}
#endif // ex3

#ifdef ex4

//4. Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.

int main()
{
    setlocale(LC_ALL,"");

    float hora, inss;
    int aula;

    do
    {
        printf("Insira o valor da hora/aula:\n");
        scanf("%f",&hora);
        if (hora<=0)
        {
            printf("Valor da hora/aula não pode ser igual ou menor a 0\n\nVerifique e insira um valor válido\n\n");
            system("pause");
            system("cls");
        }
    }
    while (hora<=0);

    do
    {
        printf("Insira o quantidade de aulas dadas:\n");
        scanf("%d",&aula);
        if (aula<=0)
        {
            printf("A quantidade de aulas não pode ser igual ou inferior a 0\n\nVerifique e insira um valor válido.\n\n");
            system("pause");
            system("cls");
        }
    }
    while (aula<=0);

    do
    {
        printf("Insira o valor percentual de desconto do inss:\n");
        scanf("%f",&inss);
        if(inss<0)
        {
            printf("O desconto do INSS não pode ser inferior a 0\n\nVerifique e insira um valor válido.\n\n");
            system("pause");
            system("cls");
        }
    }
    while (inss<0);

    printf("O salário líquido será de %2.f\n", (hora*aula)-(hora*aula*(inss/100)));


    return 0;
}
#endif // ex4

#ifdef ex5
//Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.

#endif // ex5

#ifdef ex6
6.	Faça um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre:
a.	A idade dessa pessoa
b.	Quantos anos essa pessoa terá em no ano atual.
c.	Quantos dias ela viverá até o ano atual.

#endif // ex6

#ifdef ex7

/* 7. O custo ao consumidor de um carro novo é a soma do preço da fábrica com o
*   percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça
*   um programa que receba o preço de fábrica de um veículo, o percentual de lucro do
*   distribuidor e o percentual de impostos. Calcule e mostre:
*   a. O valor correspondente ao lucro do distribuidor
*   b. O valor correspondente aos impostos
*   c. O preço final do veículo
*/

int main()
{
    setlocale(LC_ALL,"");

    float preco, lucro, imposto;


    do
    {
        printf("Insira o valor do veículo.\nR$");
        scanf("%f", &preco);
        if (preco<=0)
        {
            system("cls");
            printf("O valor do veículo não pode ser inferior ou menor a R$0,00\n\n");
            system("pause");
        }
    }
    while(preco<=0);
    system("cls");
    do
    {
        printf("Insira o valor percentual de lucro do veículo.\n");
        scanf("%f",&lucro);
        if(lucro<0)
        {
            system("cls");
            printf("Valor do percentual d0 lucro não pode ser inferior a 0\n\n");
            system("pause");
        }
    }
    while(lucro<0);
    system("cls");

    do
    {
        printf("Insira o valor percentual de impostos\n");
        scanf("%f",&imposto);
        if(imposto<0)
        {
            system("cls");
            printf("Valor percentual do imposto não pode ser inferior a 0\n\n");
            system("pause");
        }
    }
    while(imposto<0);
    system("cls");
    printf("O valor do veículo é de:R$%2.f\nO lucro do distribuidor é de:R$%2.f\nO valor dos impostos é:R$ %2.f\nO valor final do veículo é de:R$%2.f",preco, preco*(lucro/100), preco*(imposto/100), preco+(preco*(lucro/100))+(preco*(imposto/100)));

    return 0;
}

#endif // ex7

#ifdef ex8
8.	Elabore um programa que receba o salário de um funcionário e calcule o reajuste desse salário.
Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%.
Ao final do programa deve apresentar o valor antigo e o novo salário.
#endif // ex8

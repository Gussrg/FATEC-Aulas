#define ex3

#include<stdio.h>
#include<locale.h>


#ifdef ex1
//1. Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor.

int main(void)
{
    setlocale(LC_ALL, "");
    int num;

        printf("Digite um n�mero!\n");
        scanf("%d",&num);
        printf("\nO antececessor de %d � o n�mero %d, sendo seu sucessor � %d \n", num, num-1, num+1);
    return 0;
}
#endif // ex1

#ifdef ex2

//2. Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

int main()
{
    setlocale(LC_ALL,"");

    float num;

    printf("Insira um n�mero\n");
    scanf("%f",&num);
    system("cls");
    printf("O valor reajustado de %.2f � %.2f\n", num,num+(num/10));

    return 0;
}

#endif // ex2

#ifdef ex3

//3. Informar um pre�o de um produto e calcular novo pre�o com desconto de 9%

int main()
{
    setlocale(LC_ALL,"");

    float preco;

    do
    {
        printf("Insira o pre�o de um produto.\n");
        scanf("%f",&preco);
        if (preco<=0)
        {
            printf("Valor n�o pode ser negativo\n");
        }
    }
    while (preco<=0);
    system("cls");
    printf("O pre�o do produto passou de: %.2f para o novo pre�o de %.2f\n", preco, preco*0.91);

    return 0;
}
#endif // ex3

#ifdef ex4

//4. C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos valor da hora aula, n�mero de aulas dadas e o % de desconto do INSS.

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
            printf("Valor da hora/aula n�o pode ser igual ou menor a 0\n\nVerifique e insira um valor v�lido\n\n");
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
            printf("A quantidade de aulas n�o pode ser igual ou inferior a 0\n\nVerifique e insira um valor v�lido.\n\n");
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
            printf("O desconto do INSS n�o pode ser inferior a 0\n\nVerifique e insira um valor v�lido.\n\n");
            system("pause");
            system("cls");
        }
    }
    while (inss<0);

    printf("O sal�rio l�quido ser� de %2.f\n", (hora*aula)-(hora*aula*(inss/100)));


    return 0;
}
#endif // ex4

#ifdef ex5
//Ler uma temperatura em graus Celsius e transform�-la em graus Fahrenheit.

#endif // ex5

#ifdef ex6
6.	Fa�a um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre:
a.	A idade dessa pessoa
b.	Quantos anos essa pessoa ter� em no ano atual.
c.	Quantos dias ela viver� at� o ano atual.

#endif // ex6

#ifdef ex7

/* 7. O custo ao consumidor de um carro novo � a soma do pre�o da f�brica com o
*   percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a
*   um programa que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do
*   distribuidor e o percentual de impostos. Calcule e mostre:
*   a. O valor correspondente ao lucro do distribuidor
*   b. O valor correspondente aos impostos
*   c. O pre�o final do ve�culo
*/

int main()
{
    setlocale(LC_ALL,"");

    float preco, lucro, imposto;


    do
    {
        printf("Insira o valor do ve�culo.\nR$");
        scanf("%f", &preco);
        if (preco<=0)
        {
            system("cls");
            printf("O valor do ve�culo n�o pode ser inferior ou menor a R$0,00\n\n");
            system("pause");
        }
    }
    while(preco<=0);
    system("cls");
    do
    {
        printf("Insira o valor percentual de lucro do ve�culo.\n");
        scanf("%f",&lucro);
        if(lucro<0)
        {
            system("cls");
            printf("Valor do percentual d0 lucro n�o pode ser inferior a 0\n\n");
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
            printf("Valor percentual do imposto n�o pode ser inferior a 0\n\n");
            system("pause");
        }
    }
    while(imposto<0);
    system("cls");
    printf("O valor do ve�culo � de:R$%2.f\nO lucro do distribuidor � de:R$%2.f\nO valor dos impostos �:R$ %2.f\nO valor final do ve�culo � de:R$%2.f",preco, preco*(lucro/100), preco*(imposto/100), preco+(preco*(lucro/100))+(preco*(imposto/100)));

    return 0;
}

#endif // ex7

#ifdef ex8
8.	Elabore um programa que receba o sal�rio de um funcion�rio e calcule o reajuste desse sal�rio.
Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais.
Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%.
Ao final do programa deve apresentar o valor antigo e o novo sal�rio.
#endif // ex8

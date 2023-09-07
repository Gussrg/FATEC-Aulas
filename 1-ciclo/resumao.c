#define ex4

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

    printf("Insira o preço de um produto.\n");
    scanf("%f",&preco);
    system("cls");
    printf("O preço do produto passou de: %.2f para o novo preço de %.2f\n", preco, preco*1.09);

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

        printf("Insira o valor da hora/aula:\n");
        scanf("%f",&hora);
        printf("Insira o quantidade de aulas dadas:\n");
        scanf("%d",&aula);
        printf("Insira o valor percentual de desconto do inss:\n");
        scanf("%f",&inss);
        printf("O salário líquido será de %2.f\n", (hora*aula)-(hora*aula*(inss/100)));


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
    setlocale(LC_ALL,"");

    float preco, lucro, imposto;

    printf("Insira o valor do veículo.\n");
    scanf("%f", &preco);
    system("cls");
    printf("Insira o valor percentual de lucro do veículo.\n");
    scanf("%f",&lucro);
    system("cls");
    printf("Insira o valor percentual de impostos\n");
    scanf("%f",&imposto);
    system("cls");
    printf("O valor do veículo é de: %2.f\nO lucro do distribuidor é de: %2.f\nO valor dos impostos é: %2.f\nO valor final do veículo é %2.f",preco, preco*(lucro/100), preco*(imposto/100), preco+(preco*(lucro/100))+(preco*(imposto/100)));

    return 0;
}

#endif // ex5

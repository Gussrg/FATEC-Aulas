#define ex10

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
        if(inss<0 || inss>=100)
        {
            printf("O desconto do INSS não pode ser inferior a 0\n\nVerifique e insira um valor válido.\n\n");
            system("pause");
            system("cls");
        }
    }
    while (inss<0 || inss>=100);

    printf("O salário líquido será de %2.f\n", (hora*aula)-(hora*aula*(inss/100)));


    return 0;
}
#endif // ex4

#ifdef ex5
//Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.

int main ()
{
    setlocale(LC_ALL,"");

    float graus;

    printf("Digite o a temperatura em graus celsius:\n");
    scanf("%f",&graus);
    printf("A temperatura em graus celsius de: %.f°C será de: %.f°F Fahrenheit.\n", graus, (graus*1.8)+32);

    return (0);
}

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
/*8.	Elabore um programa que receba o salário de um funcionário e calcule o reajuste desse salário.
Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%.
Ao final do programa deve apresentar o valor antigo e o novo salário.*/

int main()
{
    setlocale(LC_ALL,"");

    float salario=0;

volta:
    system("cls");
    printf("Insira o valor do salário atual.\n");
    scanf("%f",&salario);
    if(salario>0 && salario<800)
    {
        printf("Seu salário de:R$%2.f com reajuste de 15%% será de:R$%2.f\n", salario, salario*1.15);
    }
    if (salario>=800 && salario<=1000)
    {
        printf("Seu salário de:R$%2.f com reajuste de 10%% será de:R$%2.f\n", salario, salario*1.10);
    }
    if(salario>1000)
    {
        printf("Seu salário de:R$%2.f com reajuste de 5%% será de:R$%2.f\n", salario, salario*1.05);
    }
    if(salario<=0)
    {
        printf("Valor invalido\n");
        system("pause");
        goto volta;
    }
}
#endif // ex8

#ifdef ex9
/*9.	Leia quatro valores referentes às notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a média for maior ou igual a 6.
Caso contrário informe que ele está reprovado. Apresente junto à mensagem o valor da média obtida pelo aluno independente de ter sido aprovado ou não.
As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez.*/

int main()
{
    setlocale(LC_ALL,"");
    int cont=1;
    float nota=0, soma=0, media=0;

    do
    {
        printf("Insira a %d nota\n", cont);
        scanf("%f",&nota);
        do
        {
            if(nota<0 || nota>10)
            {
                printf("Nota inválida, verifique e insira novamente:\n\n");
                scanf("%f",&nota);
            }
        }
        while(nota<0 || nota>10);
        cont++;
        soma=nota+soma;
    }
    while(cont<5);
    media=soma/4;
    if (media >=6)
    {
        printf("Parabéns, aluno aprovado com média de:%.1f",media);
    }
    else
    {
        printf("Aluno reprovado com média de:%.1f", media);
    }
}

#endif // ex9

#ifdef ex10
/*10.	Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero,
o terceiro deve ser a soma dos dois primeiros e o quarto é o produto dos três números anteriores.
Calcule e exiba a soma dos quadrados de cada um dos quatro números. Caso o resultado seja menor que 50000, solicite novos dados.*/

int main()
{
    setlocale(LC_ALL,"");

    int num1,num2,soma;

    printf("Insira um número entre 10 e 25\n\n");
    scanf("%d",&num1);
    do
    {
        if(num1<=10 || num1>=25)
        {
            printf("Número inválido, entre com um número entre 10 e 25\n");
            scanf("%d",&num1);
        }
    }
    while (num1<=10 || num1>=25);
    printf("Insira um número maior que 0\n");
    scanf("%d",&num2);
    do
    {
        if(num2<0)
        {
            printf("Número invalido, insira um número maior que 0\n");
            scanf("%d",&num2);
        }
    }
    while(num2<0);

    soma=num1+num2;
    if( (num1*num1)+(num2*num2)+(soma*soma)>5000)
    {
        printf("%d, %d, %d", num1*num1, num2*num2, soma*soma);
        printf("Insira novos dados.\n");
    }


}

#endif // ex10

#ifdef ex99

int sucessor(void)
{
    //1. Ler um número inteiro e imprimir seu sucessor e seu antecessor.

    int num;

    printf("Digite um número!\n");
    scanf("%d",&num);
    printf("\nO antececessor de %d é o número %d, sendo seu sucessor é %d \n\n", num, num-1, num+1);
    system("pause");
    system("cls");

}

float reajustar()
{
    //2. Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

    float num;

    printf("Insira um número\n");
    scanf("%f",&num);
    system("cls");
    printf("O valor reajustado de %.2f é %.2f\n", num,num+(num/10));
    system("pause");
    system("cls");

}

float desconto()
{
    //3. Informar um preço de um produto e calcular novo preço com desconto de 9%

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
    system("pause");
    system("cls");

}

float salario()
{
    //4. Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.

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
        if(inss<0 || inss>=100)
        {
            printf("O desconto do INSS não pode ser inferior a 0\n\nVerifique e insira um valor válido.\n\n");
            system("pause");
            system("cls");
        }
    }
    while (inss<0 || inss>=100);

    printf("O salário líquido será de %2.f\n", (hora*aula)-(hora*aula*(inss/100)));
    system("pause");
    system("cls");

}



float graus()
{
    //5.Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.;

    float graus;

    printf("Digite o a temperatura em graus celsius:\n");
    scanf("%f",&graus);
    printf("A temperatura em graus celsius de: %.f°C será de: %.f°F Fahrenheit.\n", graus, (graus*1.8)+32);
    system("pause");
    system("cls");

}

int Lucro_Veiculo()
{

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
    system("pause");
    system("cls");

}

int reajuste_salario()
{

    float salario=0;

volta:
    system("cls");
    printf("Insira o valor do salário atual.\n");
    scanf("%f",&salario);
    if(salario>0 && salario<800)
    {
        printf("Seu salário de:R$%2.f com reajuste de 15%% será de:R$%2.f\n", salario, salario*1.15);
    }
    if (salario>=800 && salario<=1000)
    {
        printf("Seu salário de:R$%2.f com reajuste de 10%% será de:R$%2.f\n", salario, salario*1.10);
    }
    if(salario>1000)
    {
        printf("Seu salário de:R$%2.f com reajuste de 5%% será de:R$%2.f\n", salario, salario*1.05);
    }
    if(salario<=0)
    {
        printf("Valor invalido\n");
        system("pause");
        goto volta;
    }
    system("pause");
    system("cls");
}

int media_nota()
{
    setlocale(LC_ALL,"");
    int cont=1;
    float nota=0, soma=0, media=0;

    do
    {
        printf("Insira a %d nota\n", cont);
        scanf("%f",&nota);
        do
        {
            if(nota<0 || nota>10)
            {
                printf("Nota inválida, verifique e insira novamente:\n\n");
                scanf("%f",&nota);
            }
        }
        while(nota<0 || nota>10);
        cont++;
        soma=nota+soma;
    }
    while(cont<5);
    media=soma/4;
    if (media >=6)
    {
        printf("Parabéns, aluno aprovado com média de:%.1f\n\n",media);
    }
    else
    {
        printf("Aluno reprovado com média de:%.1f\n\n", media);
    }
    system("pause");
    system("cls");
}

int main (void)
{
    setlocale(LC_ALL, "");
    int escolha;

    do
    {
        printf("- Escolha a opção que deseja:\n\n");
        printf("1 - Informar o sucessor e antecessor\n");
        printf("2 - Reajustar 10%%\n");
        printf("3 - Desconto de 9%%\n");
        printf("4 - Calcular salário e INSS\n");
        printf("5 - Converter Celsius para Fahrenheit\n");
        printf("7 - Calcular lucro de um veículo\n");
        printf("8 - Reajustar salário\n");
        printf("9 - Calcular média das notas\n");
        scanf("%d",&escolha);
        system("cls");

        switch(escolha)
        {
        case 1:
            sucessor();
            break;
        case 2:
            reajustar();
            break;
        case 3:
            desconto();
            break;
        case 4:
            salario();
            break;
        case 5:
            graus();
            break;
        case 7:
            Lucro_Veiculo();
            break;
        case 8:
            reajuste_salario();
        case 9:
            media_nota();
        default:
            printf("\nOpção inválida\n");
            break;
        }

    }
    while(escolha!=6);
}
#endif // ex99

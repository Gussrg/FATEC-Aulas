#define ex10

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
        if(inss<0 || inss>=100)
        {
            printf("O desconto do INSS n�o pode ser inferior a 0\n\nVerifique e insira um valor v�lido.\n\n");
            system("pause");
            system("cls");
        }
    }
    while (inss<0 || inss>=100);

    printf("O sal�rio l�quido ser� de %2.f\n", (hora*aula)-(hora*aula*(inss/100)));


    return 0;
}
#endif // ex4

#ifdef ex5
//Ler uma temperatura em graus Celsius e transform�-la em graus Fahrenheit.

int main ()
{
    setlocale(LC_ALL,"");

    float graus;

    printf("Digite o a temperatura em graus celsius:\n");
    scanf("%f",&graus);
    printf("A temperatura em graus celsius de: %.f�C ser� de: %.f�F Fahrenheit.\n", graus, (graus*1.8)+32);

    return (0);
}

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
/*8.	Elabore um programa que receba o sal�rio de um funcion�rio e calcule o reajuste desse sal�rio.
Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais.
Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%.
Ao final do programa deve apresentar o valor antigo e o novo sal�rio.*/

int main()
{
    setlocale(LC_ALL,"");

    float salario=0;

volta:
    system("cls");
    printf("Insira o valor do sal�rio atual.\n");
    scanf("%f",&salario);
    if(salario>0 && salario<800)
    {
        printf("Seu sal�rio de:R$%2.f com reajuste de 15%% ser� de:R$%2.f\n", salario, salario*1.15);
    }
    if (salario>=800 && salario<=1000)
    {
        printf("Seu sal�rio de:R$%2.f com reajuste de 10%% ser� de:R$%2.f\n", salario, salario*1.10);
    }
    if(salario>1000)
    {
        printf("Seu sal�rio de:R$%2.f com reajuste de 5%% ser� de:R$%2.f\n", salario, salario*1.05);
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
/*9.	Leia quatro valores referentes �s notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a m�dia for maior ou igual a 6.
Caso contr�rio informe que ele est� reprovado. Apresente junto � mensagem o valor da m�dia obtida pelo aluno independente de ter sido aprovado ou n�o.
As notas dever�o ser maiores ou iguais a zero e menores ou iguais a dez.*/

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
                printf("Nota inv�lida, verifique e insira novamente:\n\n");
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
        printf("Parab�ns, aluno aprovado com m�dia de:%.1f",media);
    }
    else
    {
        printf("Aluno reprovado com m�dia de:%.1f", media);
    }
}

#endif // ex9

#ifdef ex10
/*10.	Receba dois n�meros, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero,
o terceiro deve ser a soma dos dois primeiros e o quarto � o produto dos tr�s n�meros anteriores.
Calcule e exiba a soma dos quadrados de cada um dos quatro n�meros. Caso o resultado seja menor que 50000, solicite novos dados.*/

int main()
{
    setlocale(LC_ALL,"");

    int num1,num2,soma;

    printf("Insira um n�mero entre 10 e 25\n\n");
    scanf("%d",&num1);
    do
    {
        if(num1<=10 || num1>=25)
        {
            printf("N�mero inv�lido, entre com um n�mero entre 10 e 25\n");
            scanf("%d",&num1);
        }
    }
    while (num1<=10 || num1>=25);
    printf("Insira um n�mero maior que 0\n");
    scanf("%d",&num2);
    do
    {
        if(num2<0)
        {
            printf("N�mero invalido, insira um n�mero maior que 0\n");
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
    //1. Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor.

    int num;

    printf("Digite um n�mero!\n");
    scanf("%d",&num);
    printf("\nO antececessor de %d � o n�mero %d, sendo seu sucessor � %d \n\n", num, num-1, num+1);
    system("pause");
    system("cls");

}

float reajustar()
{
    //2. Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

    float num;

    printf("Insira um n�mero\n");
    scanf("%f",&num);
    system("cls");
    printf("O valor reajustado de %.2f � %.2f\n", num,num+(num/10));
    system("pause");
    system("cls");

}

float desconto()
{
    //3. Informar um pre�o de um produto e calcular novo pre�o com desconto de 9%

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
    system("pause");
    system("cls");

}

float salario()
{
    //4. C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos valor da hora aula, n�mero de aulas dadas e o % de desconto do INSS.

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
        if(inss<0 || inss>=100)
        {
            printf("O desconto do INSS n�o pode ser inferior a 0\n\nVerifique e insira um valor v�lido.\n\n");
            system("pause");
            system("cls");
        }
    }
    while (inss<0 || inss>=100);

    printf("O sal�rio l�quido ser� de %2.f\n", (hora*aula)-(hora*aula*(inss/100)));
    system("pause");
    system("cls");

}



float graus()
{
    //5.Ler uma temperatura em graus Celsius e transform�-la em graus Fahrenheit.;

    float graus;

    printf("Digite o a temperatura em graus celsius:\n");
    scanf("%f",&graus);
    printf("A temperatura em graus celsius de: %.f�C ser� de: %.f�F Fahrenheit.\n", graus, (graus*1.8)+32);
    system("pause");
    system("cls");

}

int Lucro_Veiculo()
{

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
    system("pause");
    system("cls");

}

int reajuste_salario()
{

    float salario=0;

volta:
    system("cls");
    printf("Insira o valor do sal�rio atual.\n");
    scanf("%f",&salario);
    if(salario>0 && salario<800)
    {
        printf("Seu sal�rio de:R$%2.f com reajuste de 15%% ser� de:R$%2.f\n", salario, salario*1.15);
    }
    if (salario>=800 && salario<=1000)
    {
        printf("Seu sal�rio de:R$%2.f com reajuste de 10%% ser� de:R$%2.f\n", salario, salario*1.10);
    }
    if(salario>1000)
    {
        printf("Seu sal�rio de:R$%2.f com reajuste de 5%% ser� de:R$%2.f\n", salario, salario*1.05);
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
                printf("Nota inv�lida, verifique e insira novamente:\n\n");
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
        printf("Parab�ns, aluno aprovado com m�dia de:%.1f\n\n",media);
    }
    else
    {
        printf("Aluno reprovado com m�dia de:%.1f\n\n", media);
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
        printf("- Escolha a op��o que deseja:\n\n");
        printf("1 - Informar o sucessor e antecessor\n");
        printf("2 - Reajustar 10%%\n");
        printf("3 - Desconto de 9%%\n");
        printf("4 - Calcular sal�rio e INSS\n");
        printf("5 - Converter Celsius para Fahrenheit\n");
        printf("7 - Calcular lucro de um ve�culo\n");
        printf("8 - Reajustar sal�rio\n");
        printf("9 - Calcular m�dia das notas\n");
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
            printf("\nOp��o inv�lida\n");
            break;
        }

    }
    while(escolha!=6);
}
#endif // ex99

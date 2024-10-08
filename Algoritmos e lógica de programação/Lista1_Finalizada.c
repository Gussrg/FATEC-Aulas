#define ex9

#include<stdio.h>
#include<locale.h>
#include<math.h>


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
    return 0;
}

#endif // ex9

#ifdef ex10
/*10.	Receba dois n�meros, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero,
o terceiro deve ser a soma dos dois primeiros e o quarto � o produto dos tr�s n�meros anteriores.
Calcule e exiba a soma dos quadrados de cada um dos quatro n�meros. Caso o resultado seja menor que 50000, solicite novos dados.*/

int main()
{
    setlocale(LC_ALL,"");

    int num1,num2,num3, num4;


    volta:
    system("cls");
    printf("Insira um n�mero entre 10 e 25\n\n");
    scanf("%d",&num1);
    do
    {
        if(num1<10 || num1>25)
        {
            printf("N�mero inv�lido, entre com um n�mero entre 10 e 25\n");
            scanf("%d",&num1);
        }
    }
    while (num1<10 || num1>25);
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

    num3=num1+num2;
    num4=num1*num2*num3;


    if( (num1*num1+num2*num2+num3*num3+num4*num4)<50000)
    {

        printf("Valor final menor que 50.000, insira novos dados.\n\n");
        system("pause");

        goto volta;
    }

    printf("Primeiro numero:%.d\nSegundo n�mero:%.d\nTerceiro n�mero:%.d\nQuarto n�mero:%.d\nSoma dos quadrados:%.d\n",num1,num2,num3,num4, num1*num1+num2*num2+num3*num3+num4*num4);
    printf("Quadrado 1, %d\nQuadrado 2, %d\nQuadrado 3, %d\nQuadrado 4, %d\n", num1*num1,num2*num2, num3*num3,num4*num4);
}

#endif // ex10

#ifdef ex11
//11.	Escrever um algoritmo que receba dois n�meros e informe ao usu�rio se eles s�o iguais ou se s�o distintos.
//Se forem distintos informe qual � o maior.

int main()
{
    setlocale(LC_ALL,"");

    int num1, num2;
    char fim;

    do
    {
        printf("Insira o primeiro n�mero:\n");
        scanf("%d",&num1);
        printf("Insira o segundo n�mero\n");
        scanf("%d",&num2);
        if(num1!=num2)
        {
            if(num1>num2)
            {
                printf("N�meros distintos, o maior n�mero �:%d\n", num1);
                system("pause");
            }
            else if(num1<num2)
            {
                printf("N�meros disttintos, o maior n�mero �:%d\n", num2);
                system("pause");
            }
        }
        else
        {
            printf("Os n�meros s�o iguais.\n\n\n");
        }
        printf("Deseja encerrar o programa? tecle 's' para sair ou qualquer tecla para sair...\n\n");
        getchar();
        scanf("%c",&fim);
    }
    while (fim!='s');
}

#endif // ex11

#ifdef ex12
//12.	Escrever um algoritmo que leia tr�s n�meros quaisquer e informe qual � o maior e
//se eles forem todos igual informe ao usu�rio e solicite novos dados.

int main()
{
    setlocale(LC_ALL,"");
    int num1, num2, num3;

    do
    {
        printf("Insira o primeiro n�mero:\n");
        scanf("%d",&num1);
        printf("Insira o segundo n�mero:\n");
        scanf("%d",&num2);
        printf("Insira o terceiro n�mero:\n");
        scanf("%d",&num3);
        if (num1==num2 && num1==num3)
        {
            system("cls");
            printf("N�meros iguais, digite novos n�meros\n");
        }
        else if (num1>num2 && num1>num3)
        {
            printf("O maior n�mero �:%d\n",num1);
        }
        else if(num2>num1 && num2>num3)
        {
            printf("O maior n�mero �:%d\n",num2);
        }
        else
        {
            printf("O maior n�mero �:%d\n",num3);
        }
    }
    while(num1==num2 && num1==num3);
}

#endif // ex12

#ifdef ex13
//13.	Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.

int main()
{
    setlocale(LC_ALL,"");
    int num;

    printf("Digite um n�mero\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("O n�mero � par\n\n");
    } else {

    printf("O n�mero � impar\n");
    }
}

#endif // ex13

#ifdef ex14
/* 14.Receba tr�s n�meros que representam os lados de um tri�ngulo e garantam a exist�ncia
de um tri�ngulo. Informe ao usu�rio se o tri�ngulo � is�sceles, equil�tero ou escaleno.
Observa��es:
a. Garantir que cada lado � menor que a soma dos outros dois lados.
b. O tri�ngulo � equil�tero quando todos os lados s�o iguais.
c. O tri�ngulo � is�sceles quando apenas dois lados s�o iguais.
d. O tri�ngulo � escaleno quando todos os lados s�o diferentes. */

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float a, b, c, d=1;
    setlocale(LC_ALL,"");

    while (d==1){
        do{
            do{
                printf("Informe a medida do primeiro lado:\n");
                scanf("%f", &a);
                if (a<=0){
                    printf("Valor inv�lido: os lados de um tri�ngulo devem ser positivos.\n\n");
                }
            }
            while (a<=0);
            do{
                printf("Informe a medida do segundo lado:\n");
                scanf("%f", &b);
                if (b<=0){
                    printf("Valor inv�lido: os lados de um tri�ngulo devem ser positivos.\n\n");
                }
            }
            while (b<=0);
            do{
                printf("Informe a medida do terceiro lado:\n");
                scanf("%f", &c);
                if (c<=0){
                    printf("Valor inv�lido: os lados de um tri�ngulo devem ser positivos.\n\n");
                }
            }
            while (c<=0);

            if (a+b<c || b+c<a || a+c<b){
                printf("Os lados informados n�o formam um tri�ngulo. Insira os dados novamente.\n\n");
            }
        }
        while (a+b<c || b+c<a || a+c<b);

        if (a==b && b==c){
            printf("O tri�ngulo � equil�tero.\n");
        } else {
            if (a==b || b==c || a==c){
            printf("O tri�ngulo � is�sceles.\n");
            }else{
            printf("O tri�ngulo � escaleno.\n");
            }
        }
    printf ("Deseja fazer um novo c�lculo? Pressione 1 para continuar ou qualquer outro n�mero para encerrar o programa.\n");
    scanf ("%f",&d);
    }
    return 0;
}
#endif ex14

#ifdef ex15
/*Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo.
Calcule e mostre o sal�rio a receber seguindo as regras abaixo:
a) a hora trabalhada vale a metade do sal�rio m�nimo:
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada:
c) o imposto equivale a 3% do sal�rio bruto:
d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.*/

int main(void)
{
    setlocale(LC_ALL,"");
    float minimo, horas;
    char fim;

    do
    {
salario:
        system("cls");
        printf("Entre com o valor atual do sal�rio minimo\n");
        scanf("%f",&minimo);
        if(minimo<=0)
        {
            printf("\nValor inv�lido, confira o valor...\n");
            system("pause");
            system("cls");
            goto salario;
        }
hora:
        printf("\nDigite a quantidade de horas trabalhadas\n");
        scanf("%f",&horas);
        if(horas<=0)
        {
            printf("\nValor inv�lido, confira o valor...\n");
            system("pause");
            system("cls");
            goto hora;
        }

        printf("O salario a receber � de: %2.f", (horas*(minimo/2))*0.97);

        printf("\nTecle 's' para encerrar o programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c",&fim);
    }
    while (fim!='s');
}



#endif // ex15

#ifdef ex16


int main()
{
    /*Cada degrau de uma escada tem X de altura.
    Fa�a um programa que receba essa altura e a altura que o usu�rio deseja subindo a escada.
    Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio.*/

    setlocale(LC_ALL,"");
    float degrau, h;
    char fim;

    do
    {
        printf("Entre com a altura do degrau em centimetros.\n");
        scanf("%f",&degrau);
        printf("Entre com a altura que deseja subir em metros.\n");
        scanf("%f",&h);
        printf("A quantidade de degraus que ser� necess�ria � de %.f\n", h/(degrau/100));

        printf("\nTecle 's' para encerrar o programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c",&fim);
    }
    while (fim!='s');
}
#endif // ex16

#ifdef ex17
int Peso_ideal(void)
{
 /*17.	Fa�a um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes f�rmulas:
a.	Para homens (72 * h) � 58
b.	Para mulheres (62,1* h) � 44.7*/
}

#endif // ex17

#ifdef ex18
/*18.O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de para
dar uma indica��o sobre a condi��o de peso de uma pessoa adulta.
A f�rmula � IMC = peso / (altura)^2.
Elabore um algoritmo que leia o peso e a altura de um adulto e mostre
sua condi��o de acordo com as condi��es abaixo:*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float peso, altura, d=1;
    setlocale(LC_ALL,"");

    while (d==1)
    {
        do
        {
            printf("Informe seu peso em quilos:\n");
            scanf("%f", &peso);
            if (peso<=0)
            {
                printf( "O peso deve ser positivo.\n\n" );
            }
        }
        while (peso<=0);

        do
        {
            printf("Informe sua altura em metros:\n");
            scanf("%f", &altura);
            if (altura<=0)
            {
                printf( "A altura deve ser positiva.\n\n" );
            }
        }
        while (altura<=0);

        printf("Seu IMC � igual a:%.2f\n\n", peso/(altura*altura));

        if ((peso/(altura*altura))<17)
        {
            printf("Voc� est� muito abaixo do peso.\n\n");
        }
        else if (peso/(altura*altura)>=17 && peso/(altura*altura)<=18.49)
        {
            printf("Voc� est� abaixo do peso.\n\n");
        }
        else if ((peso/(altura*altura))>=18.5 && (peso/(altura*altura))<=24.99)
        {
            printf("Voc� est� no peso normal.\n\n");
        }
        else if ((peso/(altura*altura))>=25 && (peso/(altura*altura))<=29.99)
        {
            printf("Voc� est� acima do peso.\n\n");
        }
        else if ((peso/(altura*altura))>=30 && (peso/(altura*altura))<=34.99)
        {
            printf("Voc� est� com obesidade tipo I.\n\n");
        }
        else if ((peso/(altura*altura))>=35 && (peso/(altura*altura))<=39.99)
        {
            printf("Voc� est�com obesidade tipo II.\n\n");
        }
        else
        {
            printf("Voc� est� com obesidade tipo III.");
        }
        printf ("Deseja fazer um novo c�lculo? Pressione 1 para continuar ou qualquer outro n�mero para encerrar o programa.\n");
        scanf ("%f",&d);

    }
    return 0;
}
#endif ex18


#ifdef ex20
/*20.Fa�a um algoritmo que receba o a idade, o sexo (1 para masculino e 2 para feminino) e
sal�rio fixo de um funcion�rio. Mostre o sexo, a idade e o sal�rio obtido ap�s o acr�scimo de abono:*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "");
    float salario;
    int idade;
    char sexo, fim;

    do
    {
        do
        {
            printf ("Digite a idade:\n");
            scanf ("%d", &idade);
            if (idade<=0)
            {
                printf ("A idade deve ser positiva\n");
            }
        }
        while (idade<=0);

        do
        {
            printf ("Digite o sal�rio:\n");
            scanf ("%f", &salario);
            if (salario<=0)
            {
                printf ("O sal�rio deve ser positivo.\n");
            }
        }
        while (salario<=0);

        printf ("Digite M se voc� for do sexo masculino e F se voc� for do sexo feminino.\n");
        scanf ("%c", &sexo);
        sexo=getchar();

        if (sexo=='M' || sexo=='m'&& idade>=30)
        {
            printf ("Sexo: masculino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+200);
        }
        else if (sexo=='M' || sexo=='m' && idade<30)
        {
            printf ("Sexo: masculino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+120);
        }
        else if (sexo=='F' || sexo=='f' && idade>=30)
        {
            printf ("Sexo: feminino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+220);
        }
        else if (sexo=='F' || sexo=='f' && idade<30)
        {
            printf ("Sexo: feminino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+130);
        }
        printf ("Deseja fazer um novo c�lculo? tecle S para continuar ou qualquer outra tecla para encerrar o programa.\n");
        getchar();
        scanf ("%c",&fim);
    }
    while (fim=='s');
    return 0;
}
#endif ex20


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

int soma_quadrados()
{


    int num1,num2,num3, num4;


    volta:
    system("cls");
    printf("Insira um n�mero entre 10 e 25\n\n");
    scanf("%d",&num1);
    do
    {
        if(num1<10 || num1>25)
        {
            printf("N�mero inv�lido, entre com um n�mero entre 10 e 25\n");
            scanf("%d",&num1);
        }
    }
    while (num1<10 || num1>25);
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

    num3=num1+num2;
    num4=num1*num2*num3;


    if( (num1*num1+num2*num2+num3*num3+num4*num4)<50000)
    {

        printf("Valor final menor que 50.000, insira novos dados.\n\n");
        system("pause");

        goto volta;
    }

    printf("Primeiro numero:%.d\nSegundo n�mero:%.d\nTerceiro n�mero:%.d\nQuarto n�mero:%.d\nSoma dos quadrados:%.d\n",num1,num2,num3,num4, num1*num1+num2*num2+num3*num3+num4*num4);
    printf("Quadrado 1, %d\nQuadrado 2, %d\nQuadrado 3, %d\nQuadrado 4, %d\n\n", num1*num1,num2*num2, num3*num3,num4*num4);
    system("pause");
    system("cls");
}

int numero_diferente()
{
    setlocale(LC_ALL,"");

    int num1, num2;
    char fim;

    do
    {
        printf("Insira o primeiro n�mero:\n");
        scanf("%d",&num1);
        printf("Insira o segundo n�mero\n");
        scanf("%d",&num2);
        if(num1!=num2)
        {
            if(num1>num2)
            {
                printf("N�meros distintos, o maior n�mero �:%d\n", num1);
                system("pause");
            }
            else if(num1<num2)
            {
                printf("N�meros disttintos, o maior n�mero �:%d\n", num2);
                system("pause");
            }
        }
        else
        {
            printf("Os n�meros s�o iguais.\n\n\n");
        }
        printf("Deseja encerrar o programa? tecle 's' para sair ou qualquer tecla para sair...\n\n");
        getchar();
        scanf("%c",&fim);
    }
    while (fim!='s');
}

int Numeros_diferentes()
{
    setlocale(LC_ALL,"");
    int num1, num2, num3;

    do
    {
        printf("Insira o primeiro n�mero:\n");
        scanf("%d",&num1);
        printf("Insira o segundo n�mero:\n");
        scanf("%d",&num2);
        printf("Insira o terceiro n�mero:\n");
        scanf("%d",&num3);
        if (num1==num2 && num1==num3)
        {
            system("cls");
            printf("N�meros iguais, digite novos n�meros\n");
        }
        else if (num1>num2 && num1>num3)
        {
            system("cls");
            printf("O maior n�mero �:%d\n",num1);
        }
        else if(num2>num1 && num2>num3)
        {
            system("cls");
            printf("O maior n�mero �:%d\n",num2);
        }
        else
        {
            system("cls");
            printf("O maior n�mero �:%d\n",num3);
        }
    }
    while(num1==num2 && num1==num3);
    system("pause");
    system("cls");
}
int Par_Impar()
{
    setlocale(LC_ALL,"");
    int num;

    printf("Digite um n�mero\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("O n�mero � par\n\n");
    } else {

    printf("O n�mero � impar\n");
    }
    system("pause");
    system("cls");
}

int triangulo()
{
    float a, b, c, d=1;

    while (d==1){
        do{
            do{
                printf("Informe a medida do primeiro lado:\n");
                scanf("%f", &a);
                if (a<=0){
                    printf("Valor inv�lido: os lados de um tri�ngulo devem ser positivos.\n\n");
                }
            }
            while (a<=0);
            do{
                printf("Informe a medida do segundo lado:\n");
                scanf("%f", &b);
                if (b<=0){
                    printf("Valor inv�lido: os lados de um tri�ngulo devem ser positivos.\n\n");
                }
            }
            while (b<=0);
            do{
                printf("Informe a medida do terceiro lado:\n");
                scanf("%f", &c);
                if (c<=0){
                    printf("Valor inv�lido: os lados de um tri�ngulo devem ser positivos.\n\n");
                }
            }
            while (c<=0);

            if (a+b<c || b+c<a || a+c<b){
                printf("Os lados informados n�o formam um tri�ngulo. Insira os dados novamente.\n\n");
            }
        }
        while (a+b<c || b+c<a || a+c<b);

        if (a==b && b==c){
            printf("O tri�ngulo � equil�tero.\n");
        } else {
            if (a==b || b==c || a==c){
            printf("O tri�ngulo � is�sceles.\n");
            }else{
            printf("O tri�ngulo � escaleno.\n");
            }
        }
    printf ("Deseja fazer um novo c�lculo? Pressione 1 para continuar ou qualquer outro n�mero para encerrar o programa.\n");
    scanf ("%f",&d);
    }
    return 0;
}

int salario_bruto(void)
{
    setlocale(LC_ALL,"");
    float minimo, horas;
    char fim;

    do
    {
salario:
        system("cls");
        printf("Entre com o valor atual do sal�rio minimo\n");
        scanf("%f",&minimo);
        if(minimo<=0)
        {
            printf("\nValor inv�lido, confira o valor...\n");
            system("pause");
            system("cls");
            goto salario;
        }
hora:
        printf("\nDigite a quantidade de horas trabalhadas\n");
        scanf("%f",&horas);
        if(horas<=0)
        {
            printf("\nValor inv�lido, confira o valor...\n");
            system("pause");
            system("cls");
            goto hora;
        }

        printf("O salario a receber � de: %2.f", (horas*(minimo/2))*0.97);

        printf("\nTecle 's' para encerrar o programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c",&fim);
    }
    while (fim!='s');
}

int degrau()
{
    /*Cada degrau de uma escada tem X de altura.
    Fa�a um programa que receba essa altura e a altura que o usu�rio deseja subindo a escada.
    Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio.*/

    setlocale(LC_ALL,"");
    float degrau, h;
    char fim;

    do
    {
        printf("Entre com a altura do degrau em centimetros.\n");
        scanf("%f",&degrau);
        printf("Entre com a altura que deseja subir em metros.\n");
        scanf("%f",&h);
        printf("A quantidade de degraus que ser� necess�ria � de %.f\n", h/(degrau/100));

        printf("\nTecle 's' para encerrar o programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c",&fim);
    }
    while (fim!='s');
}

int Peso_ideal(void)
{
 /*17.	Fa�a um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes f�rmulas:
a.	Para homens (72 * h) � 58
b.	Para mulheres (62,1* h) � 44.7*/

float h, homem, mulher;

printf("Entre com sua altura em metros:");
scanf("%f",&h);

homem=72*h -58;
mulher=62.1*h-44.7;
printf("O peso ideal � de %.1f se for homem ou de %.1f se for mulher \n", homem ,mulher );

return 0;
}


int imc (void)
{
    float peso, altura, d=1;
    setlocale(LC_ALL,"");

    while (d==1)
    {
        do
        {
            printf("Informe seu peso em quilos:\n");
            scanf("%f", &peso);
            if (peso<=0)
            {
                printf( "O peso deve ser positivo.\n\n" );
            }
        }
        while (peso<=0);

        do
        {
            printf("Informe sua altura em metros:\n");
            scanf("%f", &altura);
            if (altura<=0)
            {
                printf( "A altura deve ser positiva.\n\n" );
            }
        }
        while (altura<=0);

        printf("Seu IMC � igual a:%.2f\n\n", peso/(altura*altura));

        if ((peso/(altura*altura))<17)
        {
            printf("Voc� est� muito abaixo do peso.\n\n");
        }
        else if (peso/(altura*altura)>=17 && peso/(altura*altura)<=18.49)
        {
            printf("Voc� est� abaixo do peso.\n\n");
        }
        else if ((peso/(altura*altura))>=18.5 && (peso/(altura*altura))<=24.99)
        {
            printf("Voc� est� no peso normal.\n\n");
        }
        else if ((peso/(altura*altura))>=25 && (peso/(altura*altura))<=29.99)
        {
            printf("Voc� est� acima do peso.\n\n");
        }
        else if ((peso/(altura*altura))>=30 && (peso/(altura*altura))<=34.99)
        {
            printf("Voc� est� com obesidade tipo I.\n\n");
        }
        else if ((peso/(altura*altura))>=35 && (peso/(altura*altura))<=39.99)
        {
            printf("Voc� est�com obesidade tipo II.\n\n");
        }
        else
        {
            printf("Voc� est� com obesidade tipo III.");
        }
        printf ("Deseja fazer um novo c�lculo? Pressione 1 para continuar ou qualquer outro n�mero para encerrar o programa.\n");
        scanf ("%f",&d);

    }
    return 0;
}

int abono(void)
{
    /*19.Fa�a um algoritmo que receba o a idade, o sexo (1 para masculino e 2 para feminino) e
sal�rio fixo de um funcion�rio. Mostre o sexo, a idade e o sal�rio obtido ap�s o acr�scimo de abono:*/

    setlocale(LC_ALL, "");
    float salario;
    int idade;
    char sexo, fim;

    do
    {
        do
        {
            printf ("Digite a idade:\n");
            scanf ("%d", &idade);
            if (idade<=0)
            {
                printf ("A idade deve ser positiva\n");
            }
        }
        while (idade<=0);

        do
        {
            printf ("Digite o sal�rio:\n");
            scanf ("%f", &salario);
            if (salario<=0)
            {
                printf ("O sal�rio deve ser positivo.\n");
            }
        }
        while (salario<=0);

        printf ("Digite M se voc� for do sexo masculino e F se voc� for do sexo feminino.\n");
        scanf ("%c", &sexo);
        sexo=getchar();

        if (sexo=='M' || sexo=='m'&& idade>=30)
        {
            printf ("Sexo: masculino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+200);
        }
        else if (sexo=='M' || sexo=='m' && idade<30)
        {
            printf ("Sexo: masculino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+120);
        }
        else if (sexo=='F' || sexo=='f' && idade>=30)
        {
            printf ("Sexo: feminino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+220);
        }
        else if (sexo=='F' || sexo=='f' && idade<30)
        {
            printf ("Sexo: feminino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+130);
        }
        printf ("Deseja fazer um novo c�lculo? tecle S para continuar ou qualquer outra tecla para encerrar o programa.\n");
        getchar();
        scanf ("%c",&fim);
    }
    while (fim=='s');
    return 0;
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
        printf("10 - Soma dos quadrados\n");
        printf("11 - Informar se  2 n�meros s�o distintos\n");
        printf("12 - Informar se os 3 n�meros s�o distintos\n");
        printf("13 - Informar se o n�mero � par\n");
        printf("14 - Informar se o n�mero � par ou impar\n");
        printf("15 - Calcular sal�rio com desconto de imposto\n");
        printf("16 - Calcular quantidaded de degraus\n");
        printf("17 - informar peso ideal\n");
        printf("18 - Calcular IMC\n");
        printf("19 - Calcular abono sal�rial\n");
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
        case 10:
            soma_quadrados();
            break;
        case 11:
            numero_diferente();
            break;
        case 12:
            Numeros_diferentes();
            break;
        case 13:
            Par_Impar();
            break;
        case 14:
            triangulo();
            break;
        case 15:
            salario_bruto();
            break;
        case 16:
            degrau();
            break;
        case 17:
            Peso_ideal();
            break;
        case 18:
            imc();
            break;
        case 19:
            abono();
            break;
        default:
            printf("\nOp��o inv�lida\n");
            break;
        }

    }
    while(escolha!=6);
}
#endif // ex99

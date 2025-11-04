//Projeto relembra ads
#define e14

#include<stdio.h>
#include<locale.h>
#include<string.h>

#ifdef e01
/*1.	Receba via teclado um n�mero inteiro e exiba o seu sucessor e seu antecessor */

int main(void)
{
    setlocale(LC_ALL,"");

    int numero;

    printf("Entre com o valor inteiro: ");
    scanf("%d",&numero);
    printf("O antecessor de %d é %d e seu sucessor é %d", numero, numero-1, numero+1);

    return 0;
}

#endif // e01

#ifdef e02
/*2.	Receba via teclado um  n�mero positivo e exiba esse valor com reajuste de 10%.*/

int main(void){
    setlocale(LC_ALL,"");

    float num;

    printf("Digite um n�mero: ");
    scanf("%f", &num);
    printf("O número %.2f reajustado em 10%% �: %.2f ", num, num*1.1);

    return 0;
}

#endif // e02

#ifdef e03
/*3.	Solicite ao usu�rio o pre�o de um e calcular novo pre�o com desconto de 9%.*/

int main(void){
    setlocale(LC_ALL,"");

    float preco;

    printf("Digite o valor atual: ");
    scanf("%f",&preco);
    printf("O novo valor com 9%% de acr�scimo � de: %.2f ", preco*1.09);

    return 0;
}

#endif // e03

#ifdef e04


int main(void){
/*C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos via teclado o valor da hora aula,  o n�mero de aulas dadas e o  desconto do INSS.*/

    setlocale(LC_ALL,"");

    float salario, hora_aula, desconto;
    int num_aula;


    printf("Entre com o valor da hora aula: ");
    scanf("%f", &hora_aula);
    printf("Entre com a quantidade de aulas dadas: ");
    scanf("%d", &num_aula);
    printf("Entre com valor percentual de desconto do INSS: ");
    scanf("%f", &desconto);

    salario = (num_aula*hora_aula)*((100 - desconto)/100);

    printf("O sal�rio reajustado �: %.2f ",salario);

    return 0;
}
#endif // e04

#ifdef e05
/*O custo ao consumidor de um carro novo � a soma do pre�o da f�brica com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba via teclado:
O pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
a.	O valor correspondente ao lucro do distribuidor
b.	O valor correspondente aos impostos
c.	O pre�o final do ve�culo
*/

int main(void)
{
    setlocale(LC_ALL,"");

    float preco_fab, lucro, imposto, lucro_calc, imposto_calc, preco_final;

    do
    {
        printf("Entre com o pre�o de f�brica do ve�culo: ");
        scanf("%f", &preco_fab);
        if(preco_fab < 0)
        {
            system("cls");
            printf("Valor inv�lido, digite um n�mero positivo!\n");
        }

    }
    while(preco_fab < 0);


    do
    {
        system("cls");
        printf("Entre com o valor percentual de lucro do distribuidor: ");
        scanf("%f", &lucro);
        if(lucro < 0)
        {
            system("cls");
            printf("Valor inv�lido, digite um n�mero positivo!\n");
        }
    }
    while(lucro < 0);

    do
    {
        system("cls");
        printf("Entre com valor percentual de impostos: ");
        scanf("%f", &imposto);
        if(imposto < 0)
        {
            system("cls");
            printf("Valor inv�lido, digite um n�mero positivo\n");
        }
    }
    while(imposto < 0);
    system("cls");
    lucro_calc = preco_fab *(lucro/100);
    imposto_calc = preco_fab*(imposto/100);
    preco_final = preco_fab + lucro_calc + imposto_calc;
    printf("O valor do ve�culo de %.2f", preco_fab);
    printf("\nO valor do lucro do distribuidor �: %.2f", lucro_calc);
    printf("\nO valor dos impostos �: %.2f", imposto_calc);
    printf("\nO valor final do ve�culo � %.2f", preco_final);

    return 0;

}
#endif // e05

#ifdef e06
/*6.	Elabore um programa que receba o sal�rio de um funcion�rio e calcule o reajuste desse sal�rio.
Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais. Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %;
caso seja maior que 1000, o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo sal�rio.*/

int main(void)
{
    setlocale(LC_ALL,"");

    float salarioIni, salarioNovo;

    do
    {
        printf("Entre com valor em do seu sal�rio: R$");
        scanf("%f", &salarioIni);
        if(salarioIni < 0){
            system("cls");
            printf("Digite um valor de sal�rio positivo!\n");
        }
    }
    while(salarioIni < 0);

    if(salarioIni < 800)
    {
        salarioNovo = salarioIni*1.15;
        printf("\nO sal�rio reajustado ficou em R$%.2f\n", salarioNovo);
    }
    else if(salarioIni >= 800 && salarioIni <=1000)
    {
        salarioNovo = salarioIni*1.10;
        printf("\nO sal�rio reajustado ficou em R$%.2f\n", salarioNovo);

    }
    else
    {
        salarioNovo = salarioIni*1.05;
        printf("\nO sal�rio reajustado ficou em R$%.2f\n", salarioNovo);

    }

    return 0;
}


#endif // e06

#ifdef e07
/*7.	Leia quatro valores referentes �s notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a m�dia for maior ou igual a 6.
Caso contr�rio informe que ele est� reprovado.
Apresente junto � mensagem o valor da m�dia obtida pelo aluno independente de ter sido aprovado ou n�o. As notas dever�o ser maiores ou iguais a zero e menores ou iguais a dez.*/

int main(void)
{
    setlocale(LC_ALL,"");

    float nota1, nota2, nota3, nota4, media;

    do
    {
        printf("Entre a primeira nota do aluno: ");
        scanf("%f", &nota1);
        if(nota1 < 0 || nota1 > 10)
        {
            system("cls");
            printf("Digite uma nota entre 0 e 10:\n");
        }

    }while(nota1 < 0 || nota1 > 10);

    do
    {
        printf("Entre a segunda nota do aluno: ");
        scanf("%f", &nota2);
        if(nota2 < 0 || nota2 > 10)
        {
            system("cls");
            printf("Digite uma nota entre 0 e 10:\n");
        }

    }while(nota2 < 0 || nota2 > 10);

    do
    {
        printf("Entre a terceira nota do aluno: ");
        scanf("%f", &nota3);
        if(nota3 < 0 || nota3 > 10)
        {
            system("cls");
            printf("Digite uma nota entre 0 e 10:\n");
        }

    }while(nota3 < 0 || nota3 > 10);

        do
    {
        printf("Entre a quarta nota do aluno: ");
        scanf("%f", &nota4);
        if(nota4 < 0 || nota4 > 10)
        {
            system("cls");
            printf("Digite uma nota entre 0 e 10:\n");
        }

    }while(nota4 < 0 || nota4 > 10);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("\nA m�dia ficou %.1f\n", media);
    if(media<6)
    {
        printf("Aluno reprovado! =(\n ");
    }else
    {
        printf("Parab�ns!!! Aluno aprovado!!!\n");
    }

    return 0;
}

#endif // e07

#ifdef e08
/*8.	Receba dois n�meros, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero, o terceiro deve ser a soma dos dois primeiros
e o quarto � o produto dos tr�s n�meros anteriores.
Calcule e exiba a soma dos quadrados de cada um dos quatro n�meros. Caso o resultado seja menor que 50000, solicite novos dados. */

int main(void)
{
    setlocale(LC_ALL,"");
    float num1, num2, num3, num4, somaQuadrado;

    do
    {

        do
        {
            printf("Digite o primeiro n�mero com valor entre 10 e 25: ");
            scanf("%f",&num1);
            if(num1 < 10 || num1 >25)
            {
                printf("N�mero inv�lido, digite novamente:\n");
            }
        }while(num1 < 10 || num1 > 25);

        do
        {
            printf("Digite o segundo n�mero, maior ou igual a zero:");
            scanf("%f", &num2);
            if(num2 < 0)
            {
                printf("n�mero inv�lido!\n");
            }
        }while(num2<0);

        num3 = num1 + num2;
        num4 = num1*num2*num3;
        somaQuadrado = (num1*num1)+(num2*num2)+(num3*num3)+(num4*num4);

        printf("\nO quadrado de %.2f � %.2f", num1, num1*num1);
        printf("\nO quadrado de %.2f � %.2f", num2, num2*num2);
        printf("\nO quadrado de %.2f � %.2f", num3, num3*num3);
        printf("\nO quadrado de %.2f � %.2f", num4, num4*num4);
        printf("\nA soma dos quadrados �: %.2f", somaQuadrado);
        if(somaQuadrado < 50000)
        {
            printf("\n\nResultado insuficiente. Digite novos valores!\n\n");
        }
    }while(somaQuadrado < 50000);

    return 0;
}
#endif // e08

#ifdef e09

/*9.	Leia dois valores a e b e os escreve com a mensagem: "S�o m�ltiplos" ou "N�o s�o m�ltiplos*/

int main(void)
{
    setlocale(LC_ALL,"");

    int valor_a = 0, valor_b = 0;
    char continua;

    do{
    system("cls");
    printf("Entre com o valor de a: ");
    scanf("%d", &valor_a);
    printf("Entre com o valor de b: ");
    scanf("%d", &valor_b);

    if(valor_a == 0 || valor_b == 0)
        {
          printf("N�o � poss�vel verificar com valor 0!\n\n");

        }
    else if(valor_a % valor_b == 0 || valor_b % valor_a == 0)
        {
            printf("Os n�meros s�o multiplos!\n\n");

        }else{
            printf("os numeros n�o s�o multiplos!\n\n");
        }

        printf("Deseja comparar outros n�meros? s/n: ");
        //fflush(stdin);  n�o � padr�o da biblioteca
        scanf(" %c", &continua); //espa�o antes do %c para limpar o buffer do teclado
        //getchar();  Desnecess�rio com o espa�o antes do %c

    }while(continua == 's' || continua == 'S');
    return 0;
}
#endif // e09

#ifdef e10
/*10.	Leia o pre�o de um produto e inflaciona esse pre�o em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. */

int main(void)
{
    setlocale(LC_ALL,"");
    float preco, novo_preco;
    char continua;

    do{
        do
        {
            printf("Entre com o valor do produto:R$ ");
            scanf("%f", &preco);
            if(preco<0)
            {
                printf("O valor não pode ser negativo, insira novamente!\n\n");
            }
        }
        while(preco<0);

        if(preco < 100)
        {
            novo_preco = preco*1.10;
        }
        else
        {
            novo_preco = preco*1.20;
        }
        printf("O valor de R$%.2f foi reajustado para R$%.2f\n\n ", preco, novo_preco);
        printf("\nDeseja verificar outro valor?S/N");
        scanf(" %c", &continua);

    }while(continua == 's' || continua == 'S');
    return 0;
}
#endif // e10

#ifdef e11
/*11.	Leia dois números inteiros e mostre o maior deles.*/



int main(void)
{
    setlocale(LC_ALL,"");

    int num1, num2;
    char continua;

    do{
        system("cls");
        printf("Entre com o primeiro número: ");
        scanf("%d", &num1);
        printf("Entre com o segundo número:");
        scanf("%d",&num2);
        if(num1 > num2)
        {
            printf("O primeiro número %d é maior que o segundo número %d\n", num1, num2);

        }else if(num2 > num1)
        {
            printf("O segundo número %d é maior que o primeiro número %d\n", num2, num1);

        } else
        {
            printf("Os números informados são iguais!\n");
        }
        printf("Deseja comparar outro número? (s/n):");
        scanf(" %c", &continua);
    }while(continua == 's' || continua == 'S');

    return 0;
}
#endif // e11

#ifdef e12
/*12.	Leia o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem
parte da avaliação. Calcular a média de aproveitamento, usando a fórmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7
A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento	Conceito
9,0	A
7,5 e < 9,0	B
6,0 e < 7,5	C
4,0 e < 6,0	D
< 4,0	E
O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento,
o conceito correspondente e a mensagem: APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E.
*/


int main(void)
{
    setlocale(LC_ALL,"");

    char id[30], aprova[10];
    float nota1=0, nota2=0, nota3=0, media_exercicio=0, ma=0;
    char continua, conceito;

    do
    {
        system("cls");
        printf("Entre com o nome do aluno: ");
        scanf("%s", id);
        getchar();
        system("cls");

        do
        {
            printf("Entre com a primeira nota de %s: ",id);
            scanf("%f", &nota1);
        }
        while(nota1 < 0 || nota1 > 10);
        do
        {
            printf("Entre com a segunda nota de %s: ",id);
            scanf("%f", &nota2);
        }
        while(nota2 < 0 || nota2 > 10);
        do
        {
            printf("Entre com a terceira nota de %s: ",id);
            scanf("%f", &nota3);
        }
        while(nota3 < 0 || nota3 > 10);

        do
        {
            printf("Entre com a média de exercicios de %s: ",id);
            scanf("%f", &media_exercicio);
        }
        while(media_exercicio < 0 || media_exercicio > 10);

        ma = (nota1 + (nota2 * 2) + (nota3 * 3) + media_exercicio)/7;

        if(ma>=9)
        {
            conceito = 'A';
        }
        else if(ma>= 7.5 && ma < 9)
        {
            conceito = 'B';
        }
        else if(ma>= 6 && ma<7.5)
        {
            conceito = 'C';
        }
        else if(ma>=4 && ma<6)
        {
            conceito = 'D';
        }
        else
        {
            conceito = 'E';
        }
        if(conceito == 'E' || conceito == 'D')
        {
            strcpy(aprova, "Reprovado");
        }
        else
        {
            strcpy(aprova, "Aprovado");
        }
        system("cls");
        printf("O aluno: %s obteve as notas:\n", id);
        printf("Nota 1: %.2f\n", nota1);
        printf("Nota 2: %.2f\n", nota2);
        printf("Nota 3: %.2f\n", nota3);
        printf("Média dos exercicios: %.2f\n", media_exercicio);
        printf("Obtendo a média de aproveitamento de: %.2f e atingindo o conceito %c\n", ma, conceito);
        printf("Situação: %s\n", aprova);

        printf("\n\nDeseja verificar outro aluno?(s/n) ");
        scanf(" %c", &continua);
    }
    while(continua == 's' || continua == 'S');

    return 0;

}

#endif // e12

#ifdef e13
/*13.	Receba via teclado um número inteiro qualquer e exiba se ele é positivo ou negativo ou zero.*/

int main()
{
    setlocale(LC_ALL,"");

    int numero;
    char continua;

    do{
        system("cls");
        printf("Entre com um número qualquer: ");
        scanf("%d", &numero);
        if(numero == 0)
        {
            printf("O número digitado é zero!");

        }else if(numero < 0)
        {
            printf("O número é negativo!");
        } else{
            printf("O número é positivo");
        }
        printf("\n\nDeseja verificar outro número? (s/n) ");
        scanf(" %c", &continua);
    }while(continua == 's' || continua == 'S');
}

#endif // e13

#ifdef e14
/*14.	Calcule a média aritmética das quatro notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado",
caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário.*/

int main(void)
{
    setlocale(LC_ALL,"");

    float nota1, nota2, nota3, nota4, media;
    char situacao[12];

    do{
    printf("Entre com a primeira nota do aluno: ");
    scanf("%f", &nota1);
    }while(nota1 < 0 || nota1 > 10);

    do{
     printf("Entre com a segunda nota do aluno: ");
    scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);

    do{
     printf("Entre com a terceira nota do aluno: ");
    scanf("%f", &nota3);
    }while(nota3 < 0 || nota3 > 10);

    do{
     printf("Entre com a quarta nota do aluno: ");
    scanf("%f", &nota4);
    }while(nota4 < 0 || nota4 > 10);

    media = (nota1 + nota2 + nota3 + nota4)/4;
    if(media >= 6)
    {
        strcpy(situacao, "Aprovado!");
    }else
    {
        strcpy(situacao, "Reprovado!");
    }

    printf("A média do aluno foi %.2f e seu status é: %s ", media, situacao);
}
#endif // e14

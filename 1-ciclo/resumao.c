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

    printf("Insira o pre�o de um produto.\n");
    scanf("%f",&preco);
    system("cls");
    printf("O pre�o do produto passou de: %.2f para o novo pre�o de %.2f\n", preco, preco*1.09);

    return 0;
}
#endif // ex3

#ifdef ex4

//4. C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos valor da hora aula, n�mero de aulas dadas e o % de desconto do INSS.

int main()
{

    return 0;
}
#endif // ex4

#ifdef ex5

/* 5. O custo ao consumidor de um carro novo � a soma do pre�o da f�brica com o
*   percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a
*   um programa que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do
*   distribuidor e o percentual de impostos. Calcule e mostre:
*   a. O valor correspondente ao lucro do distribuidor
*   b. O valor correspondente aos impostos
*   c. O pre�o final do ve�culo
*/

int main()
{

    return 0;
}

#endif // ex5

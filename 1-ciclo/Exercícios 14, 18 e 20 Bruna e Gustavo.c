#define ex20

#ifdef ex09
/*Leia quatro valores referentes �s notas escolares de um aluno e exiba uma mensagem
dizendo que ele foi aprovado se a m�dia for maior ou igual a 6. Caso contr�rio informe
que ele est� reprovado. Apresente junto � mensagem o valor da m�dia obtida pelo aluno
independente de ter sido aprovado ou n�o. As notas dever�o ser maiores ou iguais a zero
e menores ou iguais a dez. */
#include <stdio.h>
#include <locale.h>

int main (void)
{
    float n1, n2, n3, n4;
    int d=1;
    setlocale(LC_ALL,"");

     //while (d==1){
        do{
            printf("Insira a primeira nota. \n");
            scanf("%f",&n1);
                if(n1<0 || n1>10) {
                    printf("Nota inv�lida, digite valor entre 0 e 10 \n");
                    }
            }while(n1<0 || n1>10);

        do{
            printf("Insira a segunda nota. \n");
            scanf("%f",&n2);
            if(n2<0 || n2>10){
                    printf("Nota inv�lida, digite valor entre 0 e 10 \n");
                    }
           }while(n2<0 || n2>10);

            do{
            printf("Insira a terceira nota. \n");
            scanf("%f",&n3);
            if(n3<0 || n3>10){
                printf("Nota inv�lida, digite valor entre 0 e 10 \n");
            }
           }while(n3<0 || n3>10);
           do{
            printf("Insira a quarta nota. \n");
            scanf("%f",&n4);
                if(n4<0 || n4>10){
                printf("Nota inv�lida, digite valor entre 0 e 10 \n");
                }
           }while(n4<0 || n4>10);

           printf("Sua m�dia � %f \n",(n1+n2+n3+n4)/4 );
            if(((n1+n2+n3+n4)/4)>6)
                printf("Parab�ns voc� foi aprovado! =)");
                    else
                        printf("Infelizmente voc� n�o foi aprovado =(");



        }



#endif ex09


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

    while (d==1){
    do{
        printf("Informe seu peso em quilos:\n");
        scanf("%f", &peso);
        if (peso<=0){
            printf( "O peso deve ser positivo.\n\n" );
        }
    }
    while (peso<=0);

    do{
        printf("Informe sua altura em metros:\n");
        scanf("%f", &altura);
        if (altura<=0){
            printf( "A altura deve ser positiva.\n\n" );
        }
    }
    while (altura<=0);

        printf("Seu IMC � igual a:%.2f\n\n", peso/(altura*altura));

    if ((peso/(altura*altura))<17){
        printf("Voc� est� muito abaixo do peso.\n\n");
    } else if (peso/(altura*altura)>=17 && peso/(altura*altura)<=18.49){
            printf("Voc� est� abaixo do peso.\n\n");
        } else if ((peso/(altura*altura))>=18.5 && (peso/(altura*altura))<=24.99){
                printf("Voc� est� no peso normal.\n\n");
            } else if ((peso/(altura*altura))>=25 && (peso/(altura*altura))<=29.99){
                    printf("Voc� est� acima do peso.\n\n");
                } else if ((peso/(altura*altura))>=30 && (peso/(altura*altura))<=34.99){
                        printf("Voc� est� com obesidade tipo I.\n\n");
                    } else if ((peso/(altura*altura))>=35 && (peso/(altura*altura))<=39.99){
                            printf("Voc� est�com obesidade tipo II.\n\n");
                        } else{
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

int main(void){
setlocale(LC_ALL, "");
float salario;
int idade, d=1;
char sexo;

    while (d==1){
        do{
            printf ("Digite a idade:\n");
            scanf ("%d", &idade);
            if (idade<=0){
                printf ("A idade deve ser positiva\n");
            }
        }while (idade<=0);

        do{
            printf ("Digite o sal�rio:\n");
            scanf ("%f", &salario);
            if (salario<=0){
                printf ("O sal�rio deve ser positivo.\n");
            }
        } while (salario<=0);

        printf ("Digite M se voc� for do sexo masculino e F se voc� for do sexo feminino.\n");
        scanf ("%c", &sexo);
        sexo=getchar();

        if (sexo=='M' && idade>=30){
            printf ("Sexo: masculino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+200);
        } else if (sexo=='M' && idade<30){
                printf ("Sexo: masculino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+120);
            } else if (sexo=='F' && idade>=30){
                    printf ("Sexo: feminino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+220);
                } else if (sexo=='F' && idade<30){
                    printf ("Sexo: feminino.\nIdade: %i.\nSal�rio com abono: %.2f.\n", idade, salario+130);
                }
            printf ("Deseja fazer um novo c�lculo? Pressione 1 para continuar ou qualquer outro n�mero para encerrar o programa.\n");
            scanf ("%d",&d);
    }
    return 0;
}
#endif ex20

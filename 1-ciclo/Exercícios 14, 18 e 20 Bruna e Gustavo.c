#define ex20

#ifdef ex09
/*Leia quatro valores referentes às notas escolares de um aluno e exiba uma mensagem
dizendo que ele foi aprovado se a média for maior ou igual a 6. Caso contrário informe
que ele está reprovado. Apresente junto à mensagem o valor da média obtida pelo aluno
independente de ter sido aprovado ou não. As notas deverão ser maiores ou iguais a zero
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
                    printf("Nota inválida, digite valor entre 0 e 10 \n");
                    }
            }while(n1<0 || n1>10);

        do{
            printf("Insira a segunda nota. \n");
            scanf("%f",&n2);
            if(n2<0 || n2>10){
                    printf("Nota inválida, digite valor entre 0 e 10 \n");
                    }
           }while(n2<0 || n2>10);

            do{
            printf("Insira a terceira nota. \n");
            scanf("%f",&n3);
            if(n3<0 || n3>10){
                printf("Nota inválida, digite valor entre 0 e 10 \n");
            }
           }while(n3<0 || n3>10);
           do{
            printf("Insira a quarta nota. \n");
            scanf("%f",&n4);
                if(n4<0 || n4>10){
                printf("Nota inválida, digite valor entre 0 e 10 \n");
                }
           }while(n4<0 || n4>10);

           printf("Sua média é %f \n",(n1+n2+n3+n4)/4 );
            if(((n1+n2+n3+n4)/4)>6)
                printf("Parabéns você foi aprovado! =)");
                    else
                        printf("Infelizmente você não foi aprovado =(");



        }



#endif ex09


#ifdef ex14
/* 14.Receba três números que representam os lados de um triângulo e garantam a existência
de um triângulo. Informe ao usuário se o triângulo é isósceles, equilátero ou escaleno.
Observações:
a. Garantir que cada lado é menor que a soma dos outros dois lados.
b. O triângulo é equilátero quando todos os lados são iguais.
c. O triângulo é isósceles quando apenas dois lados são iguais.
d. O triângulo é escaleno quando todos os lados são diferentes. */

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
                    printf("Valor inválido: os lados de um triângulo devem ser positivos.\n\n");
                }
            }
            while (a<=0);
            do{
                printf("Informe a medida do segundo lado:\n");
                scanf("%f", &b);
                if (b<=0){
                    printf("Valor inválido: os lados de um triângulo devem ser positivos.\n\n");
                }
            }
            while (b<=0);
            do{
                printf("Informe a medida do terceiro lado:\n");
                scanf("%f", &c);
                if (c<=0){
                    printf("Valor inválido: os lados de um triângulo devem ser positivos.\n\n");
                }
            }
            while (c<=0);

            if (a+b<c || b+c<a || a+c<b){
                printf("Os lados informados não formam um triângulo. Insira os dados novamente.\n\n");
            }
        }
        while (a+b<c || b+c<a || a+c<b);

        if (a==b && b==c){
            printf("O triângulo é equilátero.\n");
        } else {
            if (a==b || b==c || a==c){
            printf("O triângulo é isósceles.\n");
            }else{
            printf("O triângulo é escaleno.\n");
            }
        }
    printf ("Deseja fazer um novo cálculo? Pressione 1 para continuar ou qualquer outro número para encerrar o programa.\n");
    scanf ("%f",&d);
    }
    return 0;
}
#endif ex14

#ifdef ex18
/*18.O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para
dar uma indicação sobre a condição de peso de uma pessoa adulta.
A fórmula é IMC = peso / (altura)^2.
Elabore um algoritmo que leia o peso e a altura de um adulto e mostre
sua condição de acordo com as condições abaixo:*/

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

        printf("Seu IMC é igual a:%.2f\n\n", peso/(altura*altura));

    if ((peso/(altura*altura))<17){
        printf("Você está muito abaixo do peso.\n\n");
    } else if (peso/(altura*altura)>=17 && peso/(altura*altura)<=18.49){
            printf("Você está abaixo do peso.\n\n");
        } else if ((peso/(altura*altura))>=18.5 && (peso/(altura*altura))<=24.99){
                printf("Você está no peso normal.\n\n");
            } else if ((peso/(altura*altura))>=25 && (peso/(altura*altura))<=29.99){
                    printf("Você está acima do peso.\n\n");
                } else if ((peso/(altura*altura))>=30 && (peso/(altura*altura))<=34.99){
                        printf("Você está com obesidade tipo I.\n\n");
                    } else if ((peso/(altura*altura))>=35 && (peso/(altura*altura))<=39.99){
                            printf("Você estácom obesidade tipo II.\n\n");
                        } else{
                                printf("Você está com obesidade tipo III.");
                            }
    printf ("Deseja fazer um novo cálculo? Pressione 1 para continuar ou qualquer outro número para encerrar o programa.\n");
    scanf ("%f",&d);

    }
    return 0;
}
#endif ex18


#ifdef ex20
/*20.Faça um algoritmo que receba o a idade, o sexo (1 para masculino e 2 para feminino) e
salário fixo de um funcionário. Mostre o sexo, a idade e o salário obtido após o acréscimo de abono:*/

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
            printf ("Digite o salário:\n");
            scanf ("%f", &salario);
            if (salario<=0){
                printf ("O salário deve ser positivo.\n");
            }
        } while (salario<=0);

        printf ("Digite M se você for do sexo masculino e F se você for do sexo feminino.\n");
        scanf ("%c", &sexo);
        sexo=getchar();

        if (sexo=='M' && idade>=30){
            printf ("Sexo: masculino.\nIdade: %i.\nSalário com abono: %.2f.\n", idade, salario+200);
        } else if (sexo=='M' && idade<30){
                printf ("Sexo: masculino.\nIdade: %i.\nSalário com abono: %.2f.\n", idade, salario+120);
            } else if (sexo=='F' && idade>=30){
                    printf ("Sexo: feminino.\nIdade: %i.\nSalário com abono: %.2f.\n", idade, salario+220);
                } else if (sexo=='F' && idade<30){
                    printf ("Sexo: feminino.\nIdade: %i.\nSalário com abono: %.2f.\n", idade, salario+130);
                }
            printf ("Deseja fazer um novo cálculo? Pressione 1 para continuar ou qualquer outro número para encerrar o programa.\n");
            scanf ("%d",&d);
    }
    return 0;
}
#endif ex20

#include<stdio.h>
#include<conio.h>
#define ex3
#ifdef ex1
main()
{/*Receba tr�s n�meros diferentes e exiba o maior*/
    int a,b,c,maior;
    do
    {
        printf("Digite tres numeros diferentes\n");
        scanf("%i %i %i",&a,&b,&c);
        if(a==b || a==c ||b==c)
        {
            printf("Digite novos numeros\n");
        }
    }while(a==b || a==c ||b==c);
    if(a>b)
        maior=a;
    else
        maior=b;
    if(c>maior)
        maior=c;
    printf("O maior numero digitado =%i\n",maior);
}
#endif ex1
#ifdef ex2
main()
{
    int a,b,c,maior,op;
    do{
    do
    {
        printf("Digite tres numeros diferentes\n");
        scanf("%i %i %i",&a,&b,&c);
        if(a==b || a==c ||b==c)
        {
            printf("Digite novos numeros\n");
        }
    }while(a==b || a==c ||b==c);
    if(a>b)
        maior=a;
    else
        maior=b;
    if(c>maior)
        maior=c;
    printf("O maior numero digitado =%i\n",maior);
    printf("Deseja executar novamente?\n");
    printf("Digite 1 para excutar outra vez e qualquer outro numero para encerrar\n");
    scanf("%d",&op);
    system("cls");
}while(op==1);
}
#endif ex2
#ifdef ex3
/*Receba dois n�meros, o primeiro deve ser maior que 10 e menor que 20, o segundo deve ser maior que zero.
O terceiro deve ser a soma dos dois primeiros e o quarto � o produto dos tr�s n�meros anteriores. Calcule e exiba a soma dos quadrados de cada um dos quatro n�meros.
 Caso o resultado seja menor que 1000, solicite novos dados */
main()
{int a,b,c,d,s;
    do
   {

    do
    {
        printf("Digite um numero >10 e <20\n");
        scanf("%i",&a);
        if(a<=0 ||a>=20)
        {
            printf("Numero invalido\n");
        }
    }
    while(a<=0 ||a>=20);
    do
    {
        printf("Digite um numero >0 \n");
        scanf("%i",&b);
        if(b<=0)
        {
            printf("Numero invalido\n");
        }
    }
    while(b<=0);
    c=a+b;
    d=a*b*c;
    s=a+b+c+d;
    if(s<1000)
    {
        printf("Digite novos dados\n");
    }
}while (s<1000);
printf("A soma= %i\n",s);
}


#endif // ex3
#ifdef ex4
/*	Receba tr�s n�meros que garantam a exist�ncia de uma equa��o do 2� grau.
 Se houver ra�zes reais exiba-as, caso contr�rio informe ao usu�rio.*/
 main()
 {/*Uso do while*/
     float a,b,c,d,x1,x2;
     do
     {
         printf("Digite um numero diferente de zero\n");
         scanf("%f",&a);
         if(a==0)
         {
             printf("Esta variavel deve ser diferente de zero\n");
         }
     }while(a==0);
         printf("Digite dois numeros quaisquer\n");
         scanf("%f %f",&b,&c);
         d=pow(b,2)-4*a*c;
         if (d<0)
         {
             printf("Nao h� raizes reais\n");
         }
         else
            if(d>0)
         {
              x1=(-b-sqrt(d))/(2*a);
              x2=(-b+sqrt(d))/(2*a);
              printf("As raizes s�o diferentes %.2f e %.2f\n",x1,x2);
         }
         else
         {x1=-b/(2*a);
          printf("As raizes sao iguais %.2f  %.2f\n",x1,x1);
         }

     }
#endif ex4
#ifdef ex5
/*	Receba tr�s n�meros que garantam a exist�ncia de uma equa��o do 2� grau.
 Se houver ra�zes reais exiba-as, caso contr�rio informe ao usu�rio.*/
 main()
 {/*Uso  while*/
     float a=0,b,c,d,x1,x2;
    while (a==0)
     {
         printf("Digite um numero diferente de zero\n");
         scanf("%f",&a);
         if(a==0)
         {
             printf("Esta variavel deve ser diferente de zero\n");
         }
     }
         printf("Digite dois numeros quaisquer\n");
         scanf("%f %f",&b,&c);
         d=pow(b,2)-4*a*c;
         if (d<0)
         {
             printf("Nao h� raizes reais\n");
         }
         else
            if(d>0)
         {
              x1=(-b-sqrt(d))/(2*a);
              x2=(-b+sqrt(d))/(2*a);
              printf("As raizes s�o diferentes %.2f e %.2f\n",x1,x2);
         }
         else
         {x1=-b/(2*a);
          printf("As raizes sao iguais %.2f  %.2f\n",x1,x1);
         }

     }
#endif ex5



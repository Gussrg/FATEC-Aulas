#include<stdio.h>
#include<locale.h>
#define ex02

#ifdef ex01

//1. Ler um número inteiro e imprimir seu sucessor e seu antecessor
main()
{
int n,sucessor,antecessor;
printf("Ler um numero inteiro e imprimir seu sucessor e seu antecessor.\n");
printf("Digite o numero:\n");
scanf("%d",&n);
sucessor=n+1;
antecessor=n-1;
printf("Sucessor: %d \n ",sucessor);
printf("Antecessor:%d \n ",antecessor);

}
#endif //ex1

#ifdef ex02
//2. Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

main()
{
setlocale(LC_ALL,"");
float valor,reaj;

{
 printf("Digite um valor a ser reajustado \n");
 scanf ("%f", &valor);
 reaj=valor+3;
 printf("O valor reajustado é:%d \n ",reaj);
}
}
#endif //ex02

#ifdef ex06
main()
{
    float salarioantigo,salarionovo;
    setlocale(LC_ALL,"");
    do
    {
        printf("Digite um salário >0\n");
        scanf("%f",&salarioantigo);
        if (salarioantigo<=0)
        {printf("Salario invalido\n");}

    }while(salarioantigo<=0);
     if (salarioantigo<800)
      salarionovo=salarioantigo+salarioantigo*0.15;
   else
      if(salarioantigo<1000)
         salarionovo=salarioantigo+salarioantigo*0.10;
      else
         salarionovo=salarioantigo+salarioantigo*0.05;

   printf("O salario antigo e%.2f\n",salarioantigo);
   printf("O salario novo e %.2f\n",salarionovo);
return 0;
}
#endif // ex06

#ifdef ex14
main()
{
    float l1,l2,l3;
    setlocale(LC_ALL,"");
    do
    {
        printf("Digite o valor de um dos lados >0\n");
        scanf("%f",&l1);
        if (l1<=0)
            {printf("medida invalida\n");}
    }while(l1<=0);
    do
   {
    printf("Digite o valor do segundo lado >0\n");
        scanf("%f",&l2);
        if (l2<=0)
            {printf("medida invalida\n");}
    }while(12<=0);
    do
   {
    printf("Digite o valor do ultimo lado >0\n");
        scanf("%f",&l3);
        if (l3<=0)
            {printf("medida invalida\n");}
    }while(l3<=0);

    if(l1>=(l2+l3)||l2>=(l1+l3)||l3>=(l1+l2))
            printf("Medidas invalidas para formar um triângulo!");
    else
        if(l1==l2 && l2==l3)
            printf("O triangulo é equilátero!");
    else
        if(l1==l2 || l2==l3 || l1==l3)
            printf("O triângulo é Isosceles!");
    else
        printf("O triângulo é Escaleno");

    return 0;

}
#endif // ex14

#ifdef ex18

main()
{
    float peso,h;
    setlocale(LC_ALL,"");
    do
    {
        printf("Digite o seu peso em Quilogramas >0\n");
        scanf("%f",&peso);
            if(peso<=0)
                printf("Peso invalido, digite um valor positivo >0\n");
        }while(peso<=0);
}

#endif // ex18


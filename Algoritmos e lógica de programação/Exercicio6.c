#include<stdio.h>
#include<locale.h>
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
#include<stdio.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"");
    float preco,lucro,PLucro,imp,PFin, lucrod, Vimp;
do
{

printf("Digite o valor do veiculo e tecle enter\n ");
   scanf("%f",&preco);
   if (preco<=0)
      {printf("Valor inv�lido, digite um n�mero maior que 0\n");}
}
   while (preco<=0);

do
{


   printf("Digite o percentual de lucro deste ve�culo\n");
   scanf("%f",&lucro);
   if (lucro<0)
     { printf("Valor inv�lido, n�o � vi�vel desconto abaixo do custo do ve�culo!\n");
     }
}
    while (lucro<=0);

do
{

      printf("Digite o valor percentual dos impostos\n");
      scanf("%f",&imp);
      if (imp<0)
         printf("imposto n�o pode ser menor que 0%\n");
}
      while(imp<=0);

PLucro=(preco+((preco/100)*lucro));
PFin=(PLucro+((PLucro/100)*imp));
Vimp=PFin-PLucro;
lucrod=PLucro-preco;
printf ("-O valor do lucro � de: %.2f\n",(lucrod));
printf ("-O valor dos impostos � de: %.2f\n",(Vimp));
printf ("-O pre�o deste ve�culo � de: %.2f\n",(PFin));

return 0;
}

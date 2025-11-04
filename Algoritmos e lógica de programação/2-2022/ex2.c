#include<stdio.h>
#include<locale.h>

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

#include<stdio.h>
#include<locale.h>
#include "stdlib.h"

#define ex02
#ifdef ex01
 main()
 {
     int A,B,S;
     printf(" digite dois numeros quaisquer\n");
     scanf("%i%i", &A, &B);
     S=A+B;
     printf("Soma= %d",S);

 }
 #endif // ex01

 #ifdef ex02
  main()
 {
     setlocale(LC_ALL,"");
     float A,B,D;
     printf(" digite o primeiro numero\n");
     scanf("%f", &A);
     do
     {
        printf("Digite um numero diferente de zero\n");
        scanf("%f", &B);
        if(B==0)
        {
            printf("Vc digitou o valor zero\n");
            printf("Por favor digite um numero diferente de zero\n");
        }
     }while(B==0);
     D=A/B;
     printf("Soma= %f",D);

 }
 #endif // ex02

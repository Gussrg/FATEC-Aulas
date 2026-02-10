#ifdef ex01
#include<stdio.h>
#include<locale.h>

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
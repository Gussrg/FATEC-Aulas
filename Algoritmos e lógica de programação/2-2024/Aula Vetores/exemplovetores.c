#include<stdio.h>
#include<locale.h>
int main()
{int A[5],cont,soma=0;
/*Alimentar os numeros no vetor A*/
for(cont=0;cont<5;cont++)
{
     printf("Digite um n�mero qualquer\n");
     scanf("%d",&A[cont]);
     soma=soma+A[cont];

}printf("Exibi��o do conteudo do vetor\n");
for(cont=0;cont<5;cont++)
{
     printf("Posi��o%d= %i\n",cont,A[cont]);

}
printf("A soma dos n�meros contidos no vetor A %d\n",soma);
}



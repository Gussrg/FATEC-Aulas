/* Exercício feito por: Leticia Maso e Gustavo Rebelo.
Mostre na tela a soma e o produto dos K primeiros naturais.
OBS: K representa a quantidade de números naturais solicitado via teclado pelo usuário. Os números naturais deverão ser gerados pelo programador.
1, 2, 3, 4, 5, 6, .... */

#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "");
    int num, k, cont, soma, fim;
    double prod;
    num=0;
    prod=1;
    fim=0;
    soma=0;
    do
    {
        do
        {
            printf("Escolha o valor da contagem dos números naturais \n");
            scanf("%d", &k);

            if (k <= 0)
            {
                printf("Número inválido, por favor entre com um número positivo maior que zero");
            }
        }
        while (k <= 0);

        for (cont=0; cont<k; cont++)
        {
            num++;
            soma = soma+num;
            prod = prod*num;
            printf("Os numeros naturais são: %d \n", num);
        }
        printf("O valor de k é: %d.\nA soma dos primeiros números antes de k é: %d. \nO produto dos primeiros números antes de k é: %.0lf\n\n", k, soma, prod);
        
        printf("Deseja continuar? Aperte 1 para CONTINUAR 2 para SAIR\n");
        scanf(" %d", &fim);
    } while (fim == 1);
}
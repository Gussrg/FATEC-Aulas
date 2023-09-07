//Exerc�cios feitos por: Leticia Maso e Gustavo Rebelo.

#include <stdio.h>
#include <locale.h>
#define ex01

#ifdef ex01
int main (void)
{
    float n1, n2, n3, n4;
    int fim=1;
    setlocale(LC_ALL,"");

    do{
    do
    {
        printf("Insira a primeira nota. \n");
        scanf("%f",&n1);
        if(n1<0 || n1>10)
        {
            printf("Nota inv�lida, digite valor entre 0 e 10 \n");
        }
    }
    while(n1<0 || n1>10);

    do
    {
        printf("Insira a segunda nota. \n");
        scanf("%f",&n2);
        if(n2<0 || n2>10)
        {
            printf("Nota inv�lida, digite valor entre 0 e 10 \n");
        }
    }
    while(n2<0 || n2>10);

    do
    {
        printf("Insira a terceira nota. \n");
        scanf("%f",&n3);
        if(n3<0 || n3>10)
        {
            printf("Nota inv�lida, digite valor entre 0 e 10 \n");
        }
    }
    while(n3<0 || n3>10);
    do
    {
        printf("Insira a quarta nota. \n");
        scanf("%f",&n4);
        if(n4<0 || n4>10)
        {
            printf("Nota inv�lida, digite valor entre 0 e 10 \n");
        }
    }
    while(n4<0 || n4>10);

    printf("Sua m�dia � %f \n",(n1+n2+n3+n4)/4 );
    if(((n1+n2+n3+n4)/4)>6)
        printf("Parab�ns voc� foi aprovado! =)\n");
    else
        printf("Infelizmente voc� n�o foi aprovado =( \n");

printf("Aperte 1 para recome�ar.\n");
        scanf("%d", &fim);
        if (fim==1)
        {
            system("cls");

        }
        else
        {
            system("cls");
            printf("PROGRAMA ENCERRADO!");
        }

}while (fim==1);
}
#endif // ex01

#ifdef ex02
int main(void)
{
    setlocale(LC_ALL, "");

    int prog, numero, suc, ant, k, fim;
    float valor, porcento, soma=0, media=0, produto=1, cont=1, numerador=0, denominador=0;


    do
    {
        {
            printf("Digite o n�mero do programa que deseja executar: \n 1 - Mostrar o n�mero antecessor e seu sucessor. \n 2 - Calcular o desconto de um produto. \n 3 - Exibir m�dia, soma e produto de um n�mero. \n ");
            scanf("%d", &prog);

            switch(prog)
            {
            case 1:
                printf("Digite um n�mero inteiro para mostrar seu antecessor e seu sucessor. \n ");
                scanf("%d", &numero);
                ant=numero-1;
                suc=numero+1;
                printf("O antecessor do numero %i �: %i e seu sucessor �: %i",numero,ant, suc);
                break;

            case 2:
                do
                {
                    printf("Informe o valor do produto: ");
                    scanf("%f", &valor);
                    if(valor<=0)
                    {
                        printf("Valor do produto n�o pode ser menor que 0. \n");
                    }
                }
                while(valor<=0);
                do
                {
                    printf("Informe o valor do desconto em porcentagem ");
                    scanf("%f", &porcento);
                    if(porcento<=0)
                    {
                        printf("O valor do desconto n�o pode ser menor que 0. \n");
                    }
                }
                while(porcento<=0);

                printf("O valor do produto �: %0.2f. \nO desconto � de: %0.2f. \nO valor final � de: %0.2f. ", valor, (valor*(porcento/100)), valor-((valor*(porcento/100))));
                break;

            case 3:
                do
                {
                    printf("\nDigite a quantidade de termos da sequ�ncia a listar: ");
                    scanf("%d", &k);
                    if (k<0)
                    {
                        printf("N�mero inv�lido. Digite novamente.\n");
                    }
                }
                while (k<0);

                do
                {
                    numerador=numerador+2;
                    denominador=denominador+5;
                    printf("O %.0f� termo da sequ�ncia � %.0f/%.0f\n", cont, numerador, denominador);
                    soma = soma + numerador/denominador;
                    produto = produto*numerador/denominador;
                    media = media+(numerador/denominador)/k;
                    cont++;
                }
                while(cont<k+1);
                printf("A soma dos n�meros da sequ�ncia � aproximadamente %.6f.\n", soma);
                printf("O produto dos n�meros da sequ�ncia � aproximadamente %.6f.\n", produto);
                printf("A m�dia dos n�meros da sequ�ncia � aproximadamente %.6f.\n", media);

                break;
            default:
                printf("N�mero invalido");
                break;


            }

        }
        printf("Aperte 0 para recome�ar.\n");
        scanf("%d", &fim);
        if (fim==0)
        {
            system("cls");
            soma=0;
            media=0;
            produto=1;
            cont=1;
            numerador=0;
            denominador=0;
        }
        else
        {
            system("cls");
            printf("PROGRAMA ENCERRADO!");
        }
    }
    while (fim==0);

}

#endif //ex02



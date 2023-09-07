#define ex05

#ifdef ex01
/*1 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/

#include<stdio.h>
#include<locale.h>

main()
{
    int hi,mi,si,hf,mf,sf;
    char fim;
    setlocale(LC_ALL, "");
    do
    {
        {

            {
                system("cls");
                printf("Digite a hora inicial \n");
                scanf("%d", &hi);
                if(hi>23 || hi<0)
                {
                    printf("Hora inválida, digite novamente! \n");
                }
            }
            while(hi>23 || hi<0);
            do
            {
                printf("Digite o minuto inicial\n");
                scanf("%d", &mi);
                if(mi>59 || mi<0)
                {
                    printf("Minuto inválido, digite novamente! \n");
                }
            }
            while(mi>59 || mi<0);
            do
            {
                printf("Digite o segundo inicial\n");
                scanf("%d", &si);
                if(si>59 || si<0)
                {
                    printf("Segundo inválido, digite novamente!");
                }
            }
            while(si>59 || si<0);


            do
            {
                printf("Digite a hora final \n");
                scanf("%d", &hf);
                if(hf>23 || hf<0)
                {
                    printf("Hora inválida, digite novamente! \n");
                }
            }
            while(hf>23 || hf<0);
            do
            {
                printf("Digite o minuto final\n");
                scanf("%d", &mf);
                if(mf>59 || mf<0)
                {
                    printf("Minuto inválido, digite novamente! \n");
                }
            }
            while(mf>59 || mf<0);
            do
            {
                printf("Digite o segundo final\n");
                scanf("%d", &sf);
                if(sf>59 || sf<0)
                {
                    printf("Segundo inválido, digite novamente!");
                }
            }
            while(sf>59 || sf<0);

            printf("A ligação foi iniciada em %d:%d:%d e encerrada em %d:%d:%d.\n", hi,mi,si,hf,mf,sf);
            printf("O tempo em ligação é de %d:%d:%d.", (((hf*3600)+(mf*60)+sf)-((hi*3600)+(mi*60)+si))/3600, ((((hf*3600)+(mf*60)+sf) - ((hi*3600)+(mi*60)+si))%3600)/60,  ((((hf*3600)+(mf*60)+sf) - ((hi*3600)+(mi*60)+si))%3600)%60);
        }
        printf("\nDesesja encerrar o programa? tecle s para sair \n");
        getchar();
        scanf("%c",&fim);
    }
    while (fim!='s');

}
#endif // ex01

#ifdef ex02
/*2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.*/

#include<stdio.h>
#include<locale.h>

main()
{

    int maior = 99;
    int menor = 1;
    int media;
    char simbolo, fim;
    setlocale(LC_ALL,"");

    printf("Bem vindo ao programa de adivinhação.\n");
    printf("Pense em um número que esteja entre 1 e 99 e eu o adivinharei!\n");
    do{
            do
    {
        media = (maior+menor)/2;
        printf("O número que você pensou é >, < ou = que %d? ", media);
        scanf("%c", &simbolo);
        getchar();
        if (simbolo=='>')
        {
            menor = (maior + menor)/2;
        }
        else
        {
            if (simbolo=='<')
            {
                maior = (maior + menor)/2;
            }
        }
    }
    while (simbolo!='=');
    printf("Você pensou no número %d.", media);

    printf("\n\n\nDesesja encerrar o programa? tecle s para sair \n");
    getchar();
    scanf("%c",&fim);
    }while(fim!='s');

}
#endif // ex02

#ifdef ex03
/*3 - Reescreva o programa do exercicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/

#include<stdio.h>
#include<locale.h>

main()
{

    int maior = 99;
    int menor = 1;
    int media;
    char simbolo, fim;
    int tentativa=1;
    setlocale(LC_ALL,"");

    do
    {
        system("cls");
        printf("Bem vindo ao programa de adivinhação.\n");
        printf("Pense em um número que esteja entre 1 e 99 e eu o adivinharei!\n\n");

        do
        {
            media = (maior+menor)/2;
            printf("O número que você pensou é >, < ou = que %d? ", media);
            scanf("%c", &simbolo);
            getchar();
            switch (simbolo)
            {
            case '>':
            {
                menor = (maior + menor)/2;
                tentativa++;
                break;
            }

            case '<':
            {
                maior = (maior + menor)/2;
                tentativa++;
                break;
            }

            case '=':
            {
                printf("Você pensou no número %d.\n", media);
                printf("Foram necessárias %d tentativas para descobrir o seu número.", tentativa);
                break;
            }
            default:
            {
                printf ("\nA opção escolhida é inválida.\n");
            }
            }
        }
        while (simbolo!='=');

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex03

#ifdef ex04
/*4 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.*/

#include<stdio.h>
#include<locale.h>


main()
{
    float num=0, cont=0, media=0;
    char fim;
    setlocale(LC_ALL,"");

    do
    {
        do
        {
            printf("Digite um número positivo: \n");
            scanf("%f", &num);
            if(num>0)
            {
                media=media+num;
                cont++;

            }
            else
            {
                media=media/cont;
            }
        }
        while (num>=0);
        printf("A média dos números digitados é: %1.f", media);

        printf("\n\n\nAperte s para sair do programa ou qualquer tecla para continuar\n");
        getchar();
        scanf("%c", &fim);
    }
    while(fim!='s');
}
#endif // ex04

#ifdef ex05
/*5 - Receba via teclado a distancia em km e a quantidade de litros de gasolina         consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!
*/

#include<stdio.h>
#include<locale.h>


main()
{
    float litros, km, media;
    char fim;


    setlocale(LC_ALL,"");

    do
    {
        system("cls");
        printf("Digite, em litros, a quantidade de gasolina abastecido: \n");
        scanf("%f", &litros);
        printf("Digite em Km a distância percorrida: \n ");
        scanf("%f", &km);
        media = km/litros;

        if (media<8)
        {
            printf("O Consumo é de %2.fKm/l, venda o carro! \n ", media);

        }
        else

            if(media>14)

            {
                printf("O Consumo é de %2.fKm/l, super economico! \n", media);
            }else{

            printf("O Consumo é de %2.fKm/l, economico! \n", media);
        }
        printf("\nDesesja encerrar o programa? tecle s para sair \n");
        getchar();
        scanf("%c",&fim);

    }
    while (fim!='s');
}
#endif // ex05

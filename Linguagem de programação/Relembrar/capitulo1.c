//Projeto relembrar linguagem de programacao em C

#include<stdio.h>
#include<locale.h>

#define e01

#ifdef e01
/*1 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s. */

int main(void)
{
    int segundos_entrada = 0;
    char continua;
    do{
        do{
            printf("Entre com o tempo em segundos:");
            scanf("%d", &segundos_entrada);
            if(segundos_entrada < 0)
            {
                printf("Digite novamente um valor positivo!\n");
            }
        }while (segundos_entrada < 0);
        
        int horas = segundos_entrada/3600;
        int resto = segundos_entrada %3600;
        int minutos = resto/60;
        int segundos = resto %60;

        printf("A quantidade de segundos convertida ficou: %02dh:%02dm,%02ds\n", horas, minutos, segundos);
        printf("Desenja encerrar o programa? (s/n)\n");
        scanf(" %c", &continua);
    }while (continua !='s');
  

    return 0;

}
#endif //e01
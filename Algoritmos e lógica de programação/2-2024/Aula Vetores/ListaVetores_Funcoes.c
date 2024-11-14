#include<stdio.h>
#include<locale.h>

#define ex03

#ifdef ex01
/*Crie o programa dividido em fun��es:
a)	Fun��o Armazena: � utilizada para guardar dez n�meros quaisquer no vetor A.
b)	Fun��o Vetor_B: construa o vetor B de mesma dimens�o com os elementos do vetor A baseado nas seguintes condi��es:
se o �ndice for par soma dois ao conte�do do vetor, caso o �ndice seja �mpar some tr�s ao conte�do do vetor A.
c)	Exiba: exiba no interior desta fun��o o conte�do dos dois vetores.
*/

void Armazena(int A[])
{
    printf("Digite 10 n�meros para armazenar no vetor A:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &A[i]);
    }
}

void Vetor_B(int A[], int B[])
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            B[i] = A[i] + 2; // �ndice par, soma 2
        }
        else
        {
            B[i] = A[i] + 3; // �ndice �mpar, soma 3
        }
    }
}

void Exibe(int A[], int B[])
{
    printf("\nConte�do do vetor A:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nConte�do do vetor B:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL,"");
    int A[10], B[10];

    Armazena(A); // Preenche o vetor A com 10 n�meros do usu�rio
    Vetor_B(A, B); // Cria o vetor B com base nas condi��es
    Exibe(A, B); // Exibe os vetores A e B

    return 0;
}


#endif // ex01

#ifdef ex02
/*Crie o programa dividido em fun��es:
a)	Fun��o Armazena: � utilizada para guardar doze n�meros quaisquer no vetor A.
b)	Fun��o Quant_Positivos: calcule a quantidade de n�meros positivos contidos no vetor A.
c)	Exiba: mostre nesta fun��o em que posi��es aparecem os n�meros maiores que 121 que est�o armazenados no vetor A.
d)	Negativos: calcule e exiba no interior desta fun��o a m�dia dos n�meros negativos.
*/

int vetA[12];
int Armazena();
int Quant_Positivos();
int Exiba();
int Negativos();

int main()
{
    setlocale(LC_ALL,"");

    Armazena();
    Quant_Positivos();
    Exiba();

    return 0;
}

int Armazena()
{
    int cont = 0;
    for(cont=0; cont<12; cont++)
    {
        printf("Digite um n�mero qualquer\n");
        scanf("%d",&vetA[cont]);
    }
}
int Quant_Positivos()
{
    int contposi = 0, i;
    for(i=0; i<12; i++)
        if (vetA[i]>=0)
        {
            contposi++;
        }
    printf("A quantidade de n�meros positivos � %d",contposi);

    return contposi;

}
int Exiba(){
    int maiores = 0, i;
    for(i=0; i<12; i++)
    if(vetA[i]>121)
    {
        maiores++;
    }
    printf("Os n�meros maiores que 121 s�o: %d", maiores);

    return maiores;

}
int Negativos()
{
    int negativos = 0, i;
    for(i=0; i<12; i++)
    if(vetA[i]<0)
    {
        printf("%d", i);
        negativos++;
    }
    if(negativos == 0){
        printf("N�o h� numeros negativos!");
    }


    return 0;
}

#endif // ex02

#ifdef ex03
/*Crie o programa dividido em fun��es:
a)	Fun��o Armazena: � utilizada para guardar 7 n�meros positivos no vetor A.
b)	Fun��o MED_5: calcule a m�dia dos n�meros que s�o m�ltiplos de cinco. Exiba est� m�dia no interior da fun��o main.
c)	Fun��o INVERTE: armazene no vetor inverte_A os n�meros armazenados no vetor A em ordem inversa. Exiba separadamente o conte�do de cada vetor.
d)	Fun��o Menor_Num: verifique o menor n�mero encontrado no vetor A e exiba no interior da fun��o main.
*/




#endif // ex03



#ifdef ex04
/*Crie o programa dividido em fun��es:
a)	Fun��o Armazena: � utilizada para guardar no m�nimo 3 e no m�ximo 12 n�meros quaisquer no vetor X.
Essa quantidade � determinada pelo usu�rio e definida como uma vari�vel local � fun��o main chamada de quant.
b)	Fun��o Soma_7: calcule a soma apenas dos n�meros contidos no vetor X que s�o divis�veis por 7.
Exiba esta soma no interior desta fun��o.
c)	Fun��o Menor_Par: verifique o menor n�mero par contido no vetor X. Exiba no interior da fun��o main.
Caso n�o tenha nenhum n�mero par no interior do vetor X, informe ao usu�rio no interior da fun��o main.
d)	Fun��o ExibaMenor_Par: exiba em que posi��es o menor n�mero par apareceu no veotr X.
e)	Leia a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a m�dia geral.
As notas devem ser maiores ou iguais a zero e menores ou iguais a 10.
*/

#endif // ex04

#ifdef ex05
/*5.	Crie o programa dividido em fun��es:
a.	Fun��o Armazenas :armazena no vetor A  no m�nimo 7 e no m�ximo 18 n�meros quaisquer.
Essa quantidade �   determinada pelo usu�rio e definida como uma vari�vel local � fun��o main chamada de quant.
b.	Fun��o VetPositivos: armazene neste vetor apenas os n�meros maiores ou iguais azero contidos no vetor A.
Caso n�o tenha sido encontrado no vetorA  nenhum n�mero que satisfa�a essas condi��es informe ao usu�rio no interior da fun��o main.
c.	Fun��o Fatorial:crie uma fun��o que calcule o fatorial de cada n�mero do VetPositivos e o  seu fatorial no vetor FatorialVetPositivos.
*/
#endif // 05

#ifdef ex06
/*6.	Crie o programa dividido em fun��es:
a)	Fun��o Dados :armazena no vetor A  no m�nimo 5 e no m�ximo 20 n�meros  pares .
Essa quantidade �   determinada pelo usu�rio e definida como uma vari�vel local � fun��o main chamada de quant.
b)	Fun��o Pares: est� fun��o deve garantir que apenas  n�meros pares devem ser armazenados no vetor A.
c)	Fun��o MaiorMult7e11: verifique o maior  n�mero  que � m�ltiplo de 7 e 11 ao mesmo tempo contido no vetor A.
Exiba no interior da fun��o ExibaMultiplo7e11. Caso n�o tenha nenhum m�ltiplo de 7 e 11 ao mesmo tempo contido no vetor A
informe ao usu�rio tamb�m no interior da fun��o ExibaMultiplo7e11.
d)	Fun��o ExibaMaior Mult7e11: armazene no vetor Mult7e11 apenas os n�meros que  est�o contidos no vetor A que s�o m�ltiplos de 7 e 11.
Exiba  o maior m�ltiplo de 7 e 11 contido no vetor A e se n�o houver nenhum m�ltiplo de 7 e 11 ao usu�rio. Exiba se existir o conte�do do vetor Mult7e11.
*/
#endif // ex06

#ifdef sl01
/*Crie um programa dividido em fun��es
Armazena: guardr no vetor A cinco numeros quaisquer
SOma: somar todos os n�meros armazenados no vetor. Exiba o resultado obtido na fun��o main*/
void Armazena(void){

    int cont;
    for(cont=0;cont<10;cont++)
    {
        printf("Digite um n�mero qualquer\n");
        scanf("%d",&A[cont]);
    }
}
int Quant_Positivos(){

}
int Exiba(void){

}
int Negativos(void){

}
int main(void){
    setlocale(LC_ALL,"");
    Armazena();

}

#endif // sl01

#ifdef sl02
/*Crie um programa dividido em fun��es
a)Armazena: guarde no vetor A no minimo 3 e no m�ximo 10 numeros quaisquer.
Essa quantidade � definida por uma vari�vel local a fun��o main chamada quant
b)Media: Calcule e exiba no interior desta fun��o a media dos numeros positivos contidos no vetor A
c)MaiorNum: Exiba no interior da func��o main o maior numero encontrado no vetor
d)QuantMaiorNum: verifique no interior da fun��o main quantas vezes o maior numero apareceu*/

int A[10];
Armazena(int x);
Media(int x);
int MaiorNum(int quant);
int Quant_Maior(int x,int maior);
main()
{
    setlocale(LC_ALL,"");
    int quant,maior,contmaior;
    do
    {
        printf("Digite a quantidade que deve ser >=3 e <=10\n");
        scanf("%d",&quant);
        if(quant<3 || quant>10)
        {
            printf("Quantidade Inv�lida\n");
        }
    }
    while(quant<3 || quant>10);
    Armazena(quant);
    Media(quant);
    maior=MaiorNum(quant);
    printf("O maior n�mero encontrado no vetorA foi %d\n",maior);
    contmaior=Quant_Maior(quant,maior);
    printf("A quantidade de vezes que o maior n�mero apareceu foi %d\n",contmaior);
}
Armazena(int x)
{
    int cont;
    for(cont=0; cont<x; cont++)
    {
        printf("Digite um n�mero qualquer\n");
        scanf("%d",&A[cont]);
    }
}
Media(int x)
{
    int cont,contp=0;/*contp=contador de n�meros positivos*/
    float media=0;
    for(cont=0; cont<x; cont++)
    {
        if (A[cont]>0)
        {
            contp++;/*contp=contp+1;*/
            media=media+A[cont];
        }
    }
    if (contp!=0)
    {
        printf("A m�dia dos n�meros positivos=%.2f\n",media/contp);
    }
    else
    {
        printf("N�o foi digitado nenhum positivo no vetor A\n");
    }
}
int MaiorNum(int quant)
{
    int cont,maior;
    for(cont=0; cont<quant; cont++)
    {
        if(cont==0)
        {
            maior=A[cont];
        }
        else if(A[cont]>maior)
        {
            maior=A[cont];
        }
    }
    return maior;
}
int Quant_Maior(int x,int maior)
{
    int cont, contmaior=0;
    for(cont=0; cont<x; cont++)
    {
        if(A[cont]==maior)
        {
            contmaior++;
        }
    }
    return contmaior;
}

#endif // sl02

#ifdef sl03
int main(){
    setlocale(LC_ALL,"");
    int A[10], menores[10],contmenor,cont, quant;
    do{
        printf("Digite a quantidade no minimo 3 e no m�ximo10\n");
        scanf("%d",&quant)
        if(quant<3 || quant>10)
        {
            printf("Quantidade invalida\n");
        }while(quant<3 || quant>10)
        for(cont=0,cont<quant;cont++)
        {
            printf("Posi��o [%d]=%d", cont)
        }
        for(cont=0,cont<quant;cont++)
        {
            if(A[cont]<maior)
            {   menores[contmenor]=A[cont];
                contmenor++

            }


        }
        printf("Maior numero � %d\n", maior);
        printf("A quantidade de vezes que o maior n�mero apareceu � %d",contmaior);
        printf()
    }

}

#endif // sl03

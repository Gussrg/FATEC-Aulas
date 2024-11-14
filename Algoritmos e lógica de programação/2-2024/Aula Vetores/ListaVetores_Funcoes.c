#include<stdio.h>
#include<locale.h>

#define ex03

#ifdef ex01
/*Crie o programa dividido em funções:
a)	Função Armazena: é utilizada para guardar dez números quaisquer no vetor A.
b)	Função Vetor_B: construa o vetor B de mesma dimensão com os elementos do vetor A baseado nas seguintes condições:
se o índice for par soma dois ao conteúdo do vetor, caso o índice seja ímpar some três ao conteúdo do vetor A.
c)	Exiba: exiba no interior desta função o conteúdo dos dois vetores.
*/

void Armazena(int A[])
{
    printf("Digite 10 números para armazenar no vetor A:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &A[i]);
    }
}

void Vetor_B(int A[], int B[])
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            B[i] = A[i] + 2; // Índice par, soma 2
        }
        else
        {
            B[i] = A[i] + 3; // Índice ímpar, soma 3
        }
    }
}

void Exibe(int A[], int B[])
{
    printf("\nConteúdo do vetor A:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nConteúdo do vetor B:\n");
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

    Armazena(A); // Preenche o vetor A com 10 números do usuário
    Vetor_B(A, B); // Cria o vetor B com base nas condições
    Exibe(A, B); // Exibe os vetores A e B

    return 0;
}


#endif // ex01

#ifdef ex02
/*Crie o programa dividido em funções:
a)	Função Armazena: é utilizada para guardar doze números quaisquer no vetor A.
b)	Função Quant_Positivos: calcule a quantidade de números positivos contidos no vetor A.
c)	Exiba: mostre nesta função em que posições aparecem os números maiores que 121 que estão armazenados no vetor A.
d)	Negativos: calcule e exiba no interior desta função a média dos números negativos.
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
        printf("Digite um número qualquer\n");
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
    printf("A quantidade de números positivos é %d",contposi);

    return contposi;

}
int Exiba(){
    int maiores = 0, i;
    for(i=0; i<12; i++)
    if(vetA[i]>121)
    {
        maiores++;
    }
    printf("Os números maiores que 121 são: %d", maiores);

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
        printf("Não há numeros negativos!");
    }


    return 0;
}

#endif // ex02

#ifdef ex03
/*Crie o programa dividido em funções:
a)	Função Armazena: é utilizada para guardar 7 números positivos no vetor A.
b)	Função MED_5: calcule a média dos números que são múltiplos de cinco. Exiba está média no interior da função main.
c)	Função INVERTE: armazene no vetor inverte_A os números armazenados no vetor A em ordem inversa. Exiba separadamente o conteúdo de cada vetor.
d)	Função Menor_Num: verifique o menor número encontrado no vetor A e exiba no interior da função main.
*/




#endif // ex03



#ifdef ex04
/*Crie o programa dividido em funções:
a)	Função Armazena: é utilizada para guardar no mínimo 3 e no máximo 12 números quaisquer no vetor X.
Essa quantidade é determinada pelo usuário e definida como uma variável local à função main chamada de quant.
b)	Função Soma_7: calcule a soma apenas dos números contidos no vetor X que são divisíveis por 7.
Exiba esta soma no interior desta função.
c)	Função Menor_Par: verifique o menor número par contido no vetor X. Exiba no interior da função main.
Caso não tenha nenhum número par no interior do vetor X, informe ao usuário no interior da função main.
d)	Função ExibaMenor_Par: exiba em que posições o menor número par apareceu no veotr X.
e)	Leia a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
As notas devem ser maiores ou iguais a zero e menores ou iguais a 10.
*/

#endif // ex04

#ifdef ex05
/*5.	Crie o programa dividido em funções:
a.	Função Armazenas :armazena no vetor A  no mínimo 7 e no máximo 18 números quaisquer.
Essa quantidade é   determinada pelo usuário e definida como uma variável local à função main chamada de quant.
b.	Função VetPositivos: armazene neste vetor apenas os números maiores ou iguais azero contidos no vetor A.
Caso não tenha sido encontrado no vetorA  nenhum número que satisfaça essas condições informe ao usuário no interior da função main.
c.	Função Fatorial:crie uma função que calcule o fatorial de cada número do VetPositivos e o  seu fatorial no vetor FatorialVetPositivos.
*/
#endif // 05

#ifdef ex06
/*6.	Crie o programa dividido em funções:
a)	Função Dados :armazena no vetor A  no mínimo 5 e no máximo 20 números  pares .
Essa quantidade é   determinada pelo usuário e definida como uma variável local à função main chamada de quant.
b)	Função Pares: está função deve garantir que apenas  números pares devem ser armazenados no vetor A.
c)	Função MaiorMult7e11: verifique o maior  número  que é múltiplo de 7 e 11 ao mesmo tempo contido no vetor A.
Exiba no interior da função ExibaMultiplo7e11. Caso não tenha nenhum múltiplo de 7 e 11 ao mesmo tempo contido no vetor A
informe ao usuário também no interior da função ExibaMultiplo7e11.
d)	Função ExibaMaior Mult7e11: armazene no vetor Mult7e11 apenas os números que  estão contidos no vetor A que são múltiplos de 7 e 11.
Exiba  o maior múltiplo de 7 e 11 contido no vetor A e se não houver nenhum múltiplo de 7 e 11 ao usuário. Exiba se existir o conteúdo do vetor Mult7e11.
*/
#endif // ex06

#ifdef sl01
/*Crie um programa dividido em funções
Armazena: guardr no vetor A cinco numeros quaisquer
SOma: somar todos os números armazenados no vetor. Exiba o resultado obtido na função main*/
void Armazena(void){

    int cont;
    for(cont=0;cont<10;cont++)
    {
        printf("Digite um número qualquer\n");
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
/*Crie um programa dividido em funções
a)Armazena: guarde no vetor A no minimo 3 e no máximo 10 numeros quaisquer.
Essa quantidade é definida por uma variável local a função main chamada quant
b)Media: Calcule e exiba no interior desta função a media dos numeros positivos contidos no vetor A
c)MaiorNum: Exiba no interior da funcção main o maior numero encontrado no vetor
d)QuantMaiorNum: verifique no interior da função main quantas vezes o maior numero apareceu*/

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
            printf("Quantidade Inválida\n");
        }
    }
    while(quant<3 || quant>10);
    Armazena(quant);
    Media(quant);
    maior=MaiorNum(quant);
    printf("O maior número encontrado no vetorA foi %d\n",maior);
    contmaior=Quant_Maior(quant,maior);
    printf("A quantidade de vezes que o maior número apareceu foi %d\n",contmaior);
}
Armazena(int x)
{
    int cont;
    for(cont=0; cont<x; cont++)
    {
        printf("Digite um número qualquer\n");
        scanf("%d",&A[cont]);
    }
}
Media(int x)
{
    int cont,contp=0;/*contp=contador de números positivos*/
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
        printf("A média dos números positivos=%.2f\n",media/contp);
    }
    else
    {
        printf("Não foi digitado nenhum positivo no vetor A\n");
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
        printf("Digite a quantidade no minimo 3 e no máximo10\n");
        scanf("%d",&quant)
        if(quant<3 || quant>10)
        {
            printf("Quantidade invalida\n");
        }while(quant<3 || quant>10)
        for(cont=0,cont<quant;cont++)
        {
            printf("Posição [%d]=%d", cont)
        }
        for(cont=0,cont<quant;cont++)
        {
            if(A[cont]<maior)
            {   menores[contmenor]=A[cont];
                contmenor++

            }


        }
        printf("Maior numero é %d\n", maior);
        printf("A quantidade de vezes que o maior número apareceu é %d",contmaior);
        printf()
    }

}

#endif // sl03

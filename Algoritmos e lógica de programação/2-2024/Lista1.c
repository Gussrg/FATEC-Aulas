#include<stdio.h>
#include<locale.h>

#define ex07

#ifdef ex01
//1.	Receba via teclado um n�mero inteiro e exiba o seu sucessor e seu antecessor.

int main(void)
{
    setlocale(LC_ALL,"");

    int numero = 0;
    printf("Digite um n�mero inteiro\n");
    scanf("%d",&numero);
    printf("O n�mero anterior de %d �: %d e seu sucessor �: %d", numero, numero-1, numero+1);

    return 0;
}

#endif // ex01

#ifdef ex02
//Receba via teclado um  n�mero positivo e exiba esse valor com reajuste de 10%.
int main(){
setlocale(LC_ALL,"");

    float numero = 0;
    printf("Digite um n�mero positivo:");
    scanf("%f", &numero);
    if(numero<0){
        do{
        printf("O n�mero deve ser positivo, digite novamente: ");
        scanf("%f", &numero);
        }while (numero<0);
    }
    printf("O n�mero reajustado em 10%% � de %.2f", numero*1.1);
}
#endif // ex02

#ifdef ex03
//3.	Solicite ao usu�rio o pre�o de um e calcular novo pre�o com desconto de 9%.
main(){
setlocale(LC_ALL,"");

    float preco = 0;
    printf("Digite o pre�o:R$");
    scanf("%f", &preco);
    if(preco<0){
        do{
        printf("O pre�o inserido deve ser positivo, digite novamente: ");
        scanf("%f", &preco);
        }while (preco<0);
    }
    printf("O novo pre�o com desconto de 9%% � de:R$%.2f", preco*0.91);
}
#endif // ex03

#ifdef ex04
//C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos via teclado o valor da hora aula,  o n�mero de aulas dadas e o  desconto do INSS.
int main()
{
    setlocale(LC_ALL,"");
    int qtAulas;
    float vlAula, inss;

    do
    {
        printf("Digite a quantidade de aulas ministradas:");
        scanf("%d",&qtAulas);
        system("pause");
        system("cls");
    }while(qtAulas<0);
    do
    {
        printf("Digite agora valor da hora aula: ");
        scanf("%f", &vlAula);
        system("pause");
        system("cls");
    }while(vlAula<0);

    do{
        printf("Digite agora o a porcentagem de desconto do inss:'%%'");
        scanf("%f", &inss);
        system("pause");
        system("cls");
    }while(inss<0 || inss>100);

    system("cls");
     printf("O sal�rio liquido � de R$%.2f", (qtAulas*vlAula)*((100-inss)/100));

    return 0;

}

#endif // ex04

#ifdef ex05
/*O custo ao consumidor de um carro novo � a soma do pre�o da f�brica com o percentual de lucro do distribuidor
e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba via teclado: O pre�o de f�brica de um ve�culo,
o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
a.	O valor correspondente ao lucro do distribuidor
b.	O valor correspondente aos impostos
c.	O pre�o final do ve�culo*/

int main(){
    setlocale(LC_ALL,"");

    float preco, lucro, imposto;

    printf("Insira o valor de f�brica do ve�culo R$");
    scanf("%f", &preco);
    do{
        if(preco<0){
             printf("O valor inserido n�o pode ser negativo\n");
             printf("Insira o valor de f�brica do ve�culo R$");
             scanf("%f", &preco);
        }
    }while(preco<0);
    printf("Insira o valor percentual de lucro do distribuidor '%%'");
    scanf("%f", &lucro);
    do{
        if(lucro<0){
            printf("O valor inserido n�o pode ser negativo\n");
            printf("Insira o valor percentual de lucro do distribuidor '%%'");
            scanf("%f", &lucro);
        }
    }while(lucro<0);

    printf("Insira o valor percentual de lucro de imposto '%%'");
    scanf("%f", &imposto);
    do{
        if(imposto<0){
            printf("O valor inserido n�o pode ser negativo\n");
            printf("Insira o valor percentual de lucro de imposto '%%'");
            scanf("%f", &imposto);
        }
    }while(imposto<0);

    system("cls");
    printf("O valor do lucro do distribuidor � de R$%.2f \nO valor correspondente aos impostos � de R$%.2f \nO valor final do v�iculo � de R$%.2f",
            (preco*lucro/100), (preco+(preco*lucro/100))*imposto/100, preco+((preco*lucro/100) + (preco+(preco*lucro/100))*imposto/100) );

    return 0;
}
#endif // ex05

#ifdef ex06

/*6.	Elabore um programa que receba o sal�rio de um funcion�rio e calcule o reajuste desse sal�rio.
Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais.
Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %; caso seja maior que 1000,
o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo sal�rio.*/

int main()
{
    setlocale(LC_ALL,"");

    float salario;
    do
    {
        printf("Insira o valor do sal�rio atual, maior que zero \nR$");
        scanf("%f", &salario);
        }
    while(salario < 0);

        if(salario<800)
        {
            printf("O sal�rio anterior de R$%.2f foi reajustado para R$%2.f", salario, salario*1.15);

        }
        if(salario > 1000){
            printf("O sal�rio anterior de R$%.2f foi reajustado para R$%2.f", salario, salario*1.05);
        }
        else{
            printf("O sal�rio anterior de R$%.2f foi reajustado para R$%2.f", salario, salario*1.10);
        }

        return 0;

}


#endif // ex06

#ifdef ex07
/*7.	Leia quatro valores referentes �s notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado
se a m�dia for maior ou igual a 6. Caso contr�rio informe que ele est� reprovado.
Apresente junto � mensagem o valor da m�dia obtida pelo aluno independente de ter sido aprovado ou n�o.
As notas dever�o ser maiores ou iguais a zero e menores ou iguais a dez.*/

int main()
{
    setlocale("",LC_ALL);

    int cont=1;
    float nota=0, soma=0, media=0;

    do
    {
        printf("Insira a %d nota\n", cont);
        scanf("%f",&nota);
        do
        {
            if(nota<0 || nota>10)
            {
                printf("Nota inv�lida, verifique e insira novamente:\n\n");
                scanf("%f",&nota);
            }
        }
        while(nota<0 || nota>10);
        cont++;
        soma=nota+soma;
    }
    while(cont<5);
    media=soma/4;
    if (media >=6)
    {
        printf("Parab�ns, aluno aprovado com m�dia de:%.1f",media);
    }
    else
    {
        printf("Aluno reprovado com m�dia de:%.1f", media);
    }
    return 0;
}

#endif // ex07


#ifdef ex99

int sucessor(void)
{
    int numero = 0;
    printf("Digite um n�mero inteiro\n");
    scanf("%d",&numero);
    printf("O n�mero anterior de %d �: %d e seu sucessor �: %d", numero, numero-1, numero+1);

    return 0;
}
int reajuste()
{


    float numero = 0;
    printf("Digite um n�mero positivo:");
    scanf("%f", &numero);
    if(numero<0)
    {
        do
        {
            printf("O n�mero deve ser positivo, digite novamente: ");
            scanf("%f", &numero);
        }
        while (numero<0);
    }
    printf("O n�mero reajustado em 10%% � de %.2f", numero*1.1);

    return 0;
}
int desconto()
{
    setlocale(LC_ALL,"");

    float preco = 0;
    printf("Digite o pre�o:R$");
    scanf("%f", &preco);
    if(preco<0)
    {
        do
        {
            printf("O pre�o inserido deve ser positivo, digite novamente: ");
            scanf("%f", &preco);
        }
        while (preco<0);
    }
    printf("O novo pre�o com desconto de 9%% � de:R$%.2f", preco*0.91);
}

int salario_liquido()
{
    int qtAulas;
    float vlAula, inss;

    do
    {
        printf("Digite a quantidade de aulas ministradas:");
        scanf("%d",&qtAulas);
        system("pause");
        system("cls");
    }
    while(qtAulas<0);
    do
    {
        printf("Digite agora valor da hora aula: ");
        scanf("%f", &vlAula);
        system("pause");
        system("cls");
    }
    while(vlAula<0);

    do
    {
        printf("Digite agora o a porcentagem de desconto do inss:'%%'");
        scanf("%f", &inss);
        system("pause");
        system("cls");
    }
    while(inss<0 || inss>100);

    system("cls");
    printf("O sal�rio liquido � de R$%.2f", (qtAulas*vlAula)*((100-inss)/100));

    return 0;

}
int concessionaria(){

    float preco, lucro, imposto;

    printf("Insira o valor de f�brica do ve�culo R$");
    scanf("%f", &preco);
    do{
        if(preco<0){
             printf("O valor inserido n�o pode ser negativo\n");
             printf("Insira o valor de f�brica do ve�culo R$");
             scanf("%f", &preco);
        }
    }while(preco<0);
    printf("Insira o valor percentual de lucro do distribuidor '%%'");
    scanf("%f", &lucro);
    do{
        if(lucro<0){
            printf("O valor inserido n�o pode ser negativo\n");
            printf("Insira o valor percentual de lucro do distribuidor '%%'");
            scanf("%f", &lucro);
        }
    }while(lucro<0);

    printf("Insira o valor percentual de lucro de imposto '%%'");
    scanf("%f", &imposto);
    do{
        if(imposto<0){
            printf("O valor inserido n�o pode ser negativo\n");
            printf("Insira o valor percentual de lucro de imposto '%%'");
            scanf("%f", &imposto);
        }
    }while(imposto<0);

    system("cls");
    printf("O valor do lucro do distribuidor � de R$%.2f \nO valor correspondente aos impostos � de R$%.2f \nO valor final do v�iculo � de R$%.2f",
            (preco*lucro/100), (preco+(preco*lucro/100))*imposto/100, preco+((preco*lucro/100) + (preco+(preco*lucro/100))*imposto/100) );

    return 0;
}

main()
{
    setlocale(LC_ALL,"");

    int escolha;

    do
    {
        printf("  ****************************************\n");
        printf("  *       Escolha um programa!           *\n");
        printf("  ****************************************\n");
        printf("  **      1-Sucessor/antecessor         **\n");
        printf("  **      2-Rejuste em 10'%%'            **\n");
        printf("  **      3-Desconto em 9'%%'            **\n");
        printf("  **      4-Sal�rio l�quido             **\n");
        printf("  **      5-lucro e imposto veicular    **\n");
        printf("  **      0-Encerrar programa           **\n");
        printf("  ****************************************\n");
        scanf("%d", &escolha);
        system("cls");

        switch(escolha)
        {
        case 1:
            sucessor();
            break;
        case 2:
            reajuste();
            break;
        case 3:
            desconto();
            break;
        case 4:
            salario_liquido();
            break;
        case 5:
            concessionaria();
            break;
        default:
            printf("Op��o invalida");
        }
        printf("\n\n\n");
        system("pause");
        system("cls");
    }
    while(escolha!=0);

}
#endif // ex99

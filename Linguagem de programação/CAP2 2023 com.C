#define ex1
#include "stdio.h"
/******************************************************************************

                                COMANDOS

*******************************************************************************
Toda linguaguem de programacao para computador precisa oferecer um minimo de
tres formas basicas de controle:

1 - executar uma serie de instrucoes
2 - tomar decisoes para desviar a execucao do programa. (controle de fluxo)
3 - repetir uma sequencia de instrucoes ate que uma condicao seja satisfeita.
(controle de repeticao)

Os comandos de controle de fluxo sao aqueles que permitem ao programador alterar
a sequencia de execucao do programa. Os comandos sao: if e switch.

1- if

O comando "if" representa uma tomada de decisao do tipo "SE isto ENTAO aquilo".

Avalia-se uma "expressao" para tomada de decisao e se a expressao e'verdadeira
(== 1) executa a "declaracao", se falsa(== 0) nao executa a "declaracao". O
corpo do "if" pode ter uma unica declaracao ou varias declaracoes entre um abre
chave "{" e um fecha chave "}".

O formato geral quando se tem uma unica declaracao e':

-  if (expressao)

	declaracao;

O formato geral quando se tem mais de uma declaracao e':

-  if (expressao)
	{
	declaracao;
	declaracao;
	}

Observe que aqui tem que se usar o abre chave "{" e o fecha chave "}" para
agrupar as declaracoes. Isto vale para todos os comando da linguaguem C.

Exemplo: */

#ifdef ex1
main()
{
char ch;

printf("digite uma letra: ");
ch=getchar();

if(ch == 'r')
	printf("\nVoce digitou a tecla r");
printf("\n\nfim");
}
#endif

#ifdef ex2
main()
{
char ch;

printf("digite uma letra: ");
ch=getchar();

if(ch == 'r')
	{
	printf("\nVoce digitou a tecla r");
	printf("\nparabens voce acertou");
	}
printf("\n\nfim");
}
#endif

/*
2 - if - else

o comando "if-else" e' uma expansao do comando "if". No comando "if" so' se
executa a declaracao ou declaracoes se a expressao for verdadeira(== 1). O
comando "else" permite executar outra declaracao ou declaracoes se a expressao
for falsa(== 0). Resumindo, se a "expressao" for verdadeira(== 1) executa-se as
"declaracoes" antes do "else", se a "expressao" for falsa(== 0) executa-se as
"declaracoes" depois do "else".

O formato geral quando se tem uma unica declaracao e':

-  if (expressao)

  	declaracao1;

   else

	declaracao2;

O formato geral quando se tem mais de uma declaracao e':

-  if (expressao)
	{
	declaracao1;
	declaracao1;
	}
   else
	{
	declaracao2;
	declaracao2;
	}

Exemplo: */

#ifdef ex3
main()
{
char ch;

printf("digite uma letra: ");
ch=getchar();

if(ch == 'r')
	{
	printf("\nVoce digitou a tecla r");
	printf("\nparabens voce acertou");
	}
else
	{
	printf("\nVoce nao digitou a tecla r");
	printf("\nque azar voce errou");
	}
printf("\n\nfim");
}
#endif

/*
3 - if-else aninhados ou encadeados

Uma construcao comum em programacao e' o encadeamento ou aninhamento de
"if-else". As expressoes condicionais serao avaliadas de cima para baixo. Assim
que uma condicao verdadeira e' encontrada, o bloco de "declaracoes" associado a
ela sera' executado,e o resto do encadeamento e'ignorado. Se nenhuma das
condicoes for verdadeira, entao as "declaracoes" do "else" serao executadas.

O formato geral quando se tem uma unica declaracao e':

-  if (expressao 1)

  	if (expressao 2)

		declaracao1;

	else

		declaracao2;

   else
	if (expressao 3)

		declaracao3;

	else

		declaracao4;

O formato geral quando se tem mais de uma declaracao e':

-  if (expressao 1)
	if(expressao 2)
		{
		declaracao1;
		declaracao1;
		}
	else
		{
		declaracao2;
		declaracao2;
		}
   else
	if(expressao 3)
		{
		declaracao3;
		declaracao3;
		}
	else
		{
		declaracao4;
		declaracao4;
		}

Exemplo:*/

#ifdef ex4
main()
{
int opcao;
int valor;

printf ("Converte um numero de: \n");
printf ("1: decimal para hexadecimal\n");
printf ("2: hexadecimal para decimal\n");
printf ("\nInforme sua opcao: ");
scanf ("%d", &opcao);

if (opcao == 1)
	{
	printf ("\nInforme o valor em decimal: ");
	scanf ("%d", &valor);
	printf ("%d em hexadecimal e': %x", valor, valor);
	}
else
	if (opcao == 2)   /* if aninhado */
		{
		printf ("\nInforme o valor em hexadecimal: ");
		scanf ("%x", &valor);
		printf ("%x em decimal e': %d", valor, valor);
		}
        else
		{
		printf ("\nA opcao escolhida e' invalida.");
		}
printf("\n\nfim");
}
#endif

/*

4 - switch

Pode-se muitas vezes substituir o comando "if" por um comando "switch". Mas sem
duvida alguma, o comando mais importante dentre os dois e' o "if". Porem o
comando "switch" tem aplicacoes valiosas. Vale lembrar que devemos sempre
procurar usar o comando certo no lugar certo. Isto assegura um codigo limpo e de
facil entendimento.

No comando "switch", a variavel e' sucessivamente testada contra uma lista de
"inteiros" ou "constantes" do tipo caracter. Quando uma associacao e'
encontrada, o conjunto de "declaracoes" associada ao numero "inteiro" ou a
"constante" e' executado.

As "constantes" nao precisam estar em qualquer ordem especial.

O formato geral e':

switch (variavel)
	{
	case constante_1:
		declara��o_1;
		break;
	case constante_2:
		declara��o_2;
		break;
	.
	.
	.
	case constante_n:
		declara��o_n;
		break;
	default:
		declara��o_default;
	}

A declaracao "default" e' opcional e sera executada apenas se a "variavel", que
esta sendo testada, nao for igual a nenhuma das "constantes".

H� tr�s coisas importantes a saber sobre o comando "switch":

1) O comando �switch� difere do comando "if� porque �switch� so' pode testar
"igualdade", enquanto �if� pode avaliar uma "expressao" logica e/ou relacional;

2) Duas constantes �case� no mesmo �switch� n�o podem ter valores iguais.
Porem, um comando �switch� inclu�do em outro comando �switch� mais externo pode
ter as mesmas "constantes" no �case�.

3) Se "constantes" do tipo caracter s�o usadas no comando �swicth�, elas s�o
automaticamente convertidas para seus valores inteiros.

Na estrutura do comando "switch" usa-se o comando "break". Vejamos como ele
funciona.

5 - break

O comando �break� que voce viu logo apos a "declaracao" do �case�, e' chamado
de comando de "desvio", onde ele realiza um "desvio incondicional". O �case�
sera' executado ate' que o comando �break� ou o fim do �switch� seja alcan�ado.

Quando o comando �break� e' alcancado o programa salta para a declaracao
seguinte ao final do �switch� (o fecha chave "}"). Caso nao tivessemos inserido
o �break� o programa continuaria testando os demais �cases� e poderia causar um
erro de logica do programa.

O comando "break" tem uma segunda aplicacao. Ele tambem e' utilizado com os
comandos de "controle de repeticao" que veremos mais adiante.

Exemplo:*/

#ifdef ex5
main()
{
int opcao;
int valor;

printf ("Converte um numero de: \n");
printf ("1: decimal para hexadecimal\n");
printf ("2: hexadecimal para decimal\n");
printf ("\nInforme sua opcao: ");
scanf ("%d", &opcao);

switch(opcao)
	{
	case 1 :
		{
		printf ("\nInforme o valor em decimal: ");
		scanf ("%d", &valor);
		printf ("%d em hexadecimal e': %x", valor, valor);
		break;
		}
	case 2 :
		{
		printf ("\nInforme o valor em hexadecimal: ");
		scanf ("%x", &valor);
		printf ("%x em decimal e': %d", valor, valor);
		break;
		}
        default:
		{
		printf ("\nA opcao escolhida e' invalida.");
		}
	}
printf("\n\nfim");
}
#endif

/*
6 - goto

O comando "goto" e' o ultimo comando de "controle de fluxo". Ele pertence a uma
classe a parte, a dos comandos de salto incondicional. O comando "goto" realiza
um salto para um local especificado por um "label" ou "rotulo". O comando "goto"
deve ser utilizado com parcimonia (cuidado), pois o abuso no seu uso tende a
tornar o programa confuso. O comando "goto" nao e' um comando de uso comum na
linguaguem C, pois normalmente ele podendo ser substitu�do por outras estruturas
de controle. Por�m, em algumas situacoes muito especificas o comando "goto" pode
tornar o programa mais facil de se entender desde que seja bem empregado.

O formato geral e':

	label ou rotulo:

                   declaracao;

   	           goto label ou rotulo;
Exemplo: */

#ifdef ex6
main()
{
int conta = 1;

printf("imprime os numeros de 1 a 20\n\n");

volta:
	printf(" o numero e': %d \n", conta++);
	if (conta <= 20)
		goto volta;

printf("\n\nfim");
}
#endif

/******************************************************************************
Os comandos de "controle de repeticao" permitem que um conjunto de instrucoes
sejam executados ate' que uma "condicao limite" seja encontrada. Os comandos
sao:
	for, while e do - while.

7 - for

O comando "for" repete uma "declaracao" ou um "grupo de declaracoes", controlado
por uma variavel e executado por um numero finito de vezes. A sua sintaxe e'
declarada toda na mesma linha, o que facilita sua compreensao.

O formato geral quando se tem uma unica declaracao e':

	for (expressao 1 ; expressao 2 ; expressao 3)

        	declaracao;

O formato geral quando se tem mais de uma declaracao e':

	for (expressao 1 ; expressao 2 ; expressao 3)
		{
        	declaracao;
		declaracao;
		}

Na "expressao 1" incializa-se a variavel de controle o loop.

Na "expressao 2" testa-se a variavel de controle. Este teste pode ser um teste
logico ou um contador. Enquanto o teste da variavel de controle for verdade(==1)
o loop continua a ser executado. Quando o teste se torna falso(==0), o controle
do programa passa para a "declaracao" seguinte ao loop apos o fecha chave "}"
quando  este existir.

Na "expressao 3" controla-se o incremento ou decremento da variavel de controle
do loop.

O funcionamento do comando "for" comeca pela "expressao 1" onde a variavel de
controle do loop e' inicializada. A "expressao 1" e' executada uma unica vez no
inicio do loop. Entao executa-se as "declaracoes". Em seguida a "expressao 3",
incrementa ou decrementa da variavel de controle. Apos a execucao da
"expressao 3" e' testada a variavel de controle na "expressao 2".

Exemplo:*/

#ifdef ex7
main()
{
int i;

for (i = 0; i <= 20; i++)
	{
	printf ("Este e' o valor da variavel de controle i: %d ", i);
	printf (" e i ao quadrado e': %d\n", i * i);
	}
printf("\n\nfim");
}
#endif

/*
8 - Laco ou loop infinito

Um comando "for" sem a "expressao 2" ou seja, sem o teste logico, e' sempre
verdade. Isso caracteriza um "loop infinito". Normalmente o "loop infinito" nao
tem as 3 expressoes de controle no caso do comando "for".

O formato geral sem a expressao 2 e':

	for (expressao 1 ;; expressao 3)
                {
        	declaracao;
                }

O formato geral sem as 3 expressao e':

	for (;;)
                {
        	declaracao;
                }
Exemplo:*/

#ifdef ex8
main()
{

for ( ; ; )
   {
   printf ("Este laco sera' executado para sempre.\n");
   printf("Para interromper este loop infinito feche a janela \n");
   }
}
#endif

/*
9 - break
Ja' vimos o comanado "break" quando estudamos o comando "switch". Aqui temos
outra aplicacao do comando "break". Ele forca a saida incondicional de um laco.
Este laco pode ser infinito ou nao.

Exemplo:*/

#ifdef ex9
main()
{
char ch;
int cont = 0;

printf("digite a letra certa para sair do loop\n");
for ( ; ; )
	{
	ch = getchar(); //l� um caractere
	getchar();	//tira o "enter" do buffer de teclado
	if (ch == 'k' )
		break; //sai do la�o
	cont = cont + 1;
	}
printf ("\nVoce acertou que e'a letra 'k' depois de %d tentativas\n",cont+1);
}
#endif

/*
10 - while

Em muitos casos, os programas precisam repetir uma ou mais declaracoes ate' que
o laco atenda a uma condicao especifica que nao envolva necessariamente uma
contagem.

Um dos comandos utilizados para este fim e' o comando "while". Usa-se este
comando quando queremos que uma tarefa seja executada enquanto a "condicao
logica" for verdadeira(==1). Quando esta e'falsa (==0) pula-se para a
"declaracao" seguinte ao laco. O teste da "condicao logica" e' executado antes
de entrar no laco. Portanto se a condicao for falsa(==0) no primeiro teste a
"declaracao" ou "declaracoes" que estao dentro do laco nao serao executadas
nenhuma vez.

O formato geral quando se tem uma unica declaracao e':

	while (condicao)

        	declaracao;

O formato geral quando se tem mais de uma declaracao e':

	while (condicao)
		{
		declaracao;
		declaracao;
		}

Assim como no "for", o comando 'while" sem a condicao logica gera um "loop
infinito", pois este sera' sempre verdade.

O formato geral  e':

	while (1)
                {
        	declaracao;
                }
Exemplo:*/

#ifdef ex10
/* calcula a fatorial de um numero */

main()
{
double x,y;
double fat;

printf("digite um numero para calcular a fatorial: ");
scanf("%lf",&x);

fat = 1;
y = 1;

while (y < x)
	{
	y = y + 1;
	fat = fat * y;
	}

printf("O valor da fatorial e' = %g\n",fat);

}
#endif

/*
11 - do - while

Este comando e' semelhante ao anterior. A diferenca esta' na avaliacao da
"condicao logica" que acontece apos a execucao da "declaracao" ou "declaracoes"
pelo menos uma vez, pois a "condicao" esta' no final do loop(apos o while). Em
outras palavras, a "declaracao" ou "declaracoes" sao executadas pelo menos uma
vez e depois e' avaliada a "condicao logica". Se a "condicao" for verdadeira
(==1) a "declaracao" ou "declaracoes" sao executadas novamente. Se a "condicao
logica" for falsa(==0) a execucao do programa continua na "declaracao" seguinte
ao loop.

Para este comando e' necessario sempre se utiliza o abre chave "{" e o fecha
chave "}" entre o "do" e o "while".

Para este comando nao existe loop inifinito.

O formato geral que e' igual tanto para uma como para mais declaracoes e':

	do
		{
		declaracao;
		declaracao;
		}while (condicao);

Exemplo:*/

#ifdef ex11

main()
{
double y,x;
double fat;
char tecla;

do
	{
	printf("\ndigite um numero para calcular a fatorial: ");
	scanf("%lf",&x);
	getchar();      //tira o "enter" do buffer de teclado

	fat = 1;
	y = 1;

	while (y < x)
		{
		y = y + 1;
		fat = fat * y;
		}

	printf("O valor da fatorial e' = %g\n",fat);

	printf("\ndeseja continuar?(s/n) ");
	tecla = getchar();
	getchar();      //tira o "enter" do buffer de teclado
	}while ((tecla != 'n') && (tecla != 'N'));

printf("\n\nfim");
}
#endif

/*
12 - continue

O comando "continue" age de certa forma, ao contrario do comando "break". Ele
so'funciona dentro de um loop. Quando o comando "continue" e' encontrado, o
loop pula para a proxima iteracao, sem abandonar o loop, ao contrario do que
acontece no comando "break" que sai do loop.

Resumindo o comando "continue" funciona assim dentro dos comando de loop:

- no "while" e no "do-while" significa va' testar a condicao logica

- no "for" significa va' para a expressao 3 (incrementa ou decrementa
  a variavel de controle)

- no "switch" nao pode ser usado

Exemplos:*/

#ifdef ex12

main()
{
int x,y;
y=0;

do
	{
	printf("\nTentativa %d \n- digite um numero: ",y+1);
	scanf("%d",&x);
	y = y + 1;
	if (x % 2)
		continue;
	printf("\t\to numero %d e' par\n",x);
	}while(y < 5);
printf("\n\nfim");
}
#endif

#ifdef ex13

main()
{
int x,y;

for(y = 1;y < 6;y++)
	{
	printf("\ntentativa %d \n- digite um numero: ",y);
	scanf("%d",&x);
	if (!(x % 2))
		continue;
	printf("\t\to numero %d e' impar\n",x);
	}
printf("\n\nfim");
}
#endif

/*****************************************************************************

			EXERCICIOS

******************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - As ligacoes telefonicas s�o cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.

2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.

3 - Reescreva o programa do exercicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.

4 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.


5 - Receba via teclado a distancia em km e a quantidade de litros de gasolina         consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela 
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!
*/

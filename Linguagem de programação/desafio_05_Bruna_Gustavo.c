/*
PROGRAMA DESAFIO 1

1 – Pesquise as funções de biblioteca abaixo que manipulam arquivos.
 	fopen();
  	fclose();
	fwrite();    cuidado com esta função
	fread();    cuidado com esta função
    exit(0);

2 - Escreva um programa que tem 3 vetores unidimensionais livro[20] e 3 vetores  unidimensionais autor[20] declarados como variáveis globais.

Na função main()  faça um menu com as seguintes opções:

   1 – Entrada de dados.
   2 – Lista todos os dados na tela.
   3 – Pesquisa um livro com o nome completo e mostra na tela
   4 – Pesquisa autor pela 1. letra e mostra todos na tela.
   5 – Altera dados. Pesquisa pelo livro completo.
   6 – Exclui dados. Pesquisa pelo livro completo.
   7 - Saída

Os 6 vetores devem ser escritos e lidos em um arquivo.

Cada uma das opções do menu é uma função no programa.

Não pode usar nenhuma função de biblioteca a não ser as 6 da apostila e as funções de manipulação de arquivos pesquisadas.


Desafio entrega dia 18/04/2023
Assunto: DF01H
email: lingprog3f@gmail.com
Nome do arquivo: Cnumero do grupo e os nomes dos alunos

Exercícios entrega dia 18/04/2023
Assunto: EX01H
email: lingprog3f@gmail.com
Corpo do email: Cnumero do grupo e os nomes dos alunos
Nome dos arquivos: cap1.c, cap2.c, cap3.c, cap4.c, cap5.c, cap6.c */


/*fopen(): abre um arquivo especificado por um caminho e um modo de abertura.
Retorna um ponteiro para o arquivo aberto ou NULL se ocorrer um erro.

fclose(): fecha um arquivo aberto anteriormente. Retorna 0 em caso de sucesso ou EOF em caso de erro.

fwrite(): escreve um bloco de dados em um arquivo aberto.
Essa função pode sobrescrever dados existentes no arquivo.
Cuidado deve ser tomado ao usar essa função para garantir que dados indesejados não sejam perddos.
Retorna o número de elementos escritos com sucesso.

fread(): lê um bloco de dados de um arquivo aberto.
Essa função pode ler menos dados do que o solicitado, mesmo que o arquivo tenha mais dados disponíveis.
Cuidado deve ser tomado ao usar essa função para garantir que dados incompletos não sejam interpretados incorretamente.
Retorna o número de elementos lidos com sucesso.

É importante notar que a manipulação de arquivos é uma operação sensível e deve ser realizada com cuidado e
atenção adequados para garantir a integridade e segurança dos dados envolvidos.

Exemplos

//Abrir um arquivo
FILE *arquivo; // ponteiro para o arquivo
arquivo = fopen("caminho_do_arquivo.txt", "r"); // abrir o arquivo em modo leitura
if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.");
    exit(1);
}
// continuar manipulando o arquivo...

//Fechar um arquivo
if (fclose(arquivo) != 0) { // fechar o arquivo
    printf("Erro ao fechar o arquivo.");
    exit(1);
}

//Escrever dados em um arquivo
int dados[] = {1, 2, 3, 4, 5};
int n_elementos = sizeof(dados) / sizeof(int);
if (fwrite(dados, sizeof(int), n_elementos, arquivo) != n_elementos) {
    printf("Erro ao escrever no arquivo.");
    exit(1);
}

//Ler dados em um arquivo
int dados[5];
int n_elementos = sizeof(dados) / sizeof(int);
if (fread(dados, sizeof(int), n_elementos, arquivo) != n_elementos) {
    printf("Erro ao ler do arquivo.");
    exit(1);
}
// continuar manipulando os dados lidos...*/



#include<locale.h>
#include<stdio.h>

char livro_1[20], livro_2[20], livro_3[20], autor_1[20], autor_2[20], autor_3[20], pesquisa_livro[20], pesquisa_autor[20] ;

void entrada_dados()
{
    system("cls");
    FILE *arquivo;
    arquivo = fopen("livros.txt", "w+");

    printf("            ENTRADA DADOS:\n\n");
    printf("Digite o nome do primeiro livro:\n");
    getchar();
    gets(livro_1);
    fwrite(livro_1, sizeof(livro_1), 1, arquivo);

    printf("Digite o nome do autor do primeiro livro:\n");
    gets(autor_1);
    fwrite(autor_1, sizeof(autor_1), 1, arquivo);

    printf("Digite o nome do segundo livro:\n");
    gets(livro_2);
    fwrite(livro_2, sizeof(livro_2), 1, arquivo);
    printf("Digite o nome do autor do segundo livro:\n");
    gets(autor_2);
    fwrite(autor_2, sizeof(autor_2), 1, arquivo);

    printf("Digite o nome do terceiro livro:\n");
    gets(livro_3);
    fwrite(livro_3, sizeof(livro_3), 1, arquivo);
    printf("Digite o nome do autor do terceiro livro:\n");
    gets(autor_3);
    fwrite(autor_3, sizeof(autor_3), 1, arquivo);

}

void lista_dados()
{
    FILE *arquivo;
    arquivo = fopen("livros.txt", "r");

    fread(&livro_1, sizeof(char), 20, arquivo);
    fread(&autor_1, sizeof(char), 20, arquivo);

    fread(&livro_2, sizeof(char), 20, arquivo);
    fread(&autor_2, sizeof(char), 20, arquivo);

    fread(&livro_3, sizeof(char), 20, arquivo);
    fread(&autor_3, sizeof(char), 20, arquivo);
    fclose(arquivo);
    system("cls");

    printf("            LISTAR DADOS:\n\n");
    printf("\nLivro 1: %s\n", livro_1);
    printf("\Autor 1: %s\n", autor_1);

    printf("\nLivro 2: %s\n", livro_2);
    printf("\Autor 2: %s\n", autor_2);

    printf("\nLivro 3: %s\n", livro_3);
    printf("\Autor 3: %s\n\n\n", autor_3);
}

void pesquisar_livro()
{
    system("cls");
    printf("            PESQUISAR LIVRO:\n\n");
    printf("Digite o nome do livro:\n");
    getchar();
    gets(pesquisa_livro);

    int a=1,b=1,c=1;

    for(int i=0; i<20; i++)
    {
        if(pesquisa_livro[i] != livro_1[i])
        {
            a=0;
        }
        if(pesquisa_livro[i] != livro_2[i])
        {
            b=0;
        }
        if(pesquisa_livro[i] != livro_3[i])
        {
            c=0;
        }
    }
    if(a==0 && b==0 && c==0)
    {
        printf("Livro nao encontrado!");
    }
    if(a==1)
    {
        printf("Livro encontrado! %s de %s \n",livro_1,autor_1);
    }
    if(b==1)
    {
        printf("Livro encontrado! %s de %s \n",livro_2,autor_2);
    }
    if(c==1)
    {
        printf("Livro encontrado! %s de %s \n",livro_3,autor_3);
    }
}



int pesquisar_autor()
{
    system("cls");
    char inicial;
    int a = 1, b = 1, c = 1; // Boleanos

    system("cls");

    printf("Insira a inicial do autor:\n\n");
    getchar();
    scanf("%c",&inicial);

    // verificando se os autores tem o mesmo nome
    for(int i=0; i<20; i++)
    {

        if (autor_1[i] != autor_2[i])
        {
            a = 0;
        }
        if (autor_1[i] != autor_3[i])
        {
            b = 0;
        }
        if (autor_2[i] != autor_3[i])
        {
            c = 0;
        }
    }

    // Imprimindo o autor e seus livros
    if (inicial == autor_1[0])
    {
        printf("\nAutor: %s",autor_1);
        printf("\n\t1 - %s",livro_1);

        a == 1 ? printf("\n\t2 - %s",livro_2): 0;
        b == 1 ? printf("\n\t3 - %s",livro_3): 0;
    }
    if(inicial == autor_2[0] && a == 0)
    {
        printf("\nAutor: %s",autor_2);
        printf("\n\t2 - %s",livro_2);

        c == 1 ? printf("\n\t3 - %s",livro_3): 0;
    }
    if(inicial == autor_3[0] && b == 0 && c == 0)
    {
        printf("\nAutor: %s",autor_3);
        printf("\n\t3 - %s",livro_3);
    }
    if(inicial != autor_1[0] && inicial != autor_2[0] && inicial != autor_3[0])
    {
        printf("\nAutor não encontrado!");
    }
    printf("\n");

}


int altera_dados()
{
    lista_dados();
    int op;

    system("cls");
    printf("         ALTERAR DADOS:\n\n");
    printf("Digite o numero do livro que deseja alterar: ");
    scanf(" %d", &op);
    getchar();

    FILE * arquivo;
    arquivo = fopen("livros", "w+");

    switch(op)
    {
    case 1:
        printf("Digite o novo nome do livro:\n");
        gets(livro_1);
        fwrite(livro_1, sizeof(livro_1), 1, arquivo);
        printf("Digite o novo nome do autor:\n");
        gets(autor_1);
        fwrite(autor_1, sizeof(autor_1), 1, arquivo);
        break;

    case 2:
        fwrite(livro_1, sizeof(livro_1), 1, arquivo);
        fwrite(autor_1, sizeof(autor_1), 1, arquivo);
        printf("Digite o novo nome do livro:\n");
        gets(livro_2);
        fwrite(livro_2, sizeof(livro_2), 1, arquivo);
        printf("Digite o novo nome do autor:\n");
        gets(autor_2);
        fwrite(autor_2, sizeof(autor_2), 1, arquivo);
        break;

    case 3:
        fwrite(livro_1, sizeof(livro_1), 1, arquivo);
        fwrite(autor_1, sizeof(autor_1), 1, arquivo);
        fwrite(livro_2, sizeof(livro_2), 1, arquivo);
        fwrite(autor_2, sizeof(autor_2), 1, arquivo);
        printf("Digite o novo nome do livro:\n");
        gets(livro_3);
        fwrite(livro_3, sizeof(livro_3), 1, arquivo);
        printf("Digite o novo nome do autor:\n");
        gets(autor_3);
        fwrite(autor_3, sizeof(autor_3), 1, arquivo);
        break;

    default:
        printf("\nOpção digitada é inválida.\n\n");
        break;

    }
}
int exclui_dados()
{
    system("cls");
    printf("            EXCLUIR DADOS:\n\n");

    lista_dados();
    int op;
    printf("Digite o numero do livro que deseja excluir: ");
    scanf(" %d", &op);
    getchar();

    FILE * arquivo;
    arquivo = fopen("livros", "w+");


    switch(op)
    {
    case 1:
        livro_1[0] = '*';
        autor_1[0] = '*';
        fwrite(livro_1, sizeof(livro_1), 1, arquivo);
        fwrite(autor_1, sizeof(autor_1), 1, arquivo);

        printf("Livro 1 excluído\n\n");
        break;

    case 2:
        livro_2[0] = '*';
        autor_2[0] = '*';
        fwrite(livro_2, sizeof(livro_2), 1, arquivo);
        fwrite(autor_2,sizeof(autor_2),1,arquivo);
        printf("Livro 2 excluído\n\n");
        break;

    case 3:
        livro_3[0] = '*';
        autor_3[0] = '*';
        fwrite(livro_3, sizeof(livro_3), 1, arquivo);
        fwrite(autor_3, sizeof(autor_3), 1, arquivo);

        printf("Livro 3 excluído\n\n");
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }
    fclose(arquivo);

}

int saida()
{
    printf("\n\nEncerrando o programa...\n\nAté a próxima!\n");
}

void main()
{
    setlocale(LC_ALL,"");
    int escolha;
    FILE *arquivo;
    arquivo=fopen("livros.txt", "r+");
    if(arquivo==NULL)
    {
        printf("\nArquivo inexistente.");
    }
    else
    {
        fclose(arquivo);
    }

    do
    {
        // system("cls");

        printf("Escolha a opção que deseja:\n");
        printf("\n1 – Entrada de dados.");
        printf("\n2 – Listar todos os dados na tela.");
        printf("\n3 – Pesquisa um livro com o nome completo");
        printf("\n4 – Pesquisa autor pela primeira letra");
        printf("\n5 – Altera dados.");
        printf("\n6 – Exclui dados.");
        printf("\n7 - Encerrar programa\n");
        scanf("%d",&escolha);
        //system("cls");

        switch(escolha)
        {
        case 1:
            entrada_dados();
            break;
        case 2:
            lista_dados();
            break;
        case 3:
            pesquisar_livro();
            break;
        case 4:
            pesquisar_autor();
            break;
        case 5:
            altera_dados();
            break;
        case 6:
            exclui_dados();
            break;
        case 7:
            saida();
            break;
        default:
            printf("\nOpção inválida\n");
            break;
        }
    }
    while(escolha!=7);

    return (0);
}

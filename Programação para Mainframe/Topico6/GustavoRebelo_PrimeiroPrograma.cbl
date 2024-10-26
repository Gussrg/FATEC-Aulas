      ******************************
      * Author:Gustavo Rebelo Godoy
      * Date:26/10/2024
      * Purpose:
      * Tectonics: cobc
      ******************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. MeuPrimeiroPrograma.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 WS-MENSAGEM PIC X(20) VALUE SPACES.
       01 WS-NOME     PIC X(20) VALUE SPACES.
       PROCEDURE DIVISION.
       PRIMEIRA-SECAO.
       PRIMEIRO-PARAG.
           MOVE 'Como vai mundo!' TO WS-MENSAGEM.
           DISPLAY WS-MENSAGEM
           DISPLAY 'Por favor, digite seu nome:'.
           ACCEPT WS-NOME
           DISPLAY 'Prazer em conhece-lo, ' WS-NOME.
           MOVE 'Tenha um otimo dia' to WS-MENSAGEM.
           DISPLAY WS-MENSAGEM
           STOP RUN.
       END PROGRAM MeuPrimeiroPrograma.

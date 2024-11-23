      ******************************************************************
      * Author:
      * Date:
      * Purpose:
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROG05.
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       77 WRK-NOME     PIC X(30).
       77 WRK-MATERIA  PIC X(15).
       77 WRK-NOTA     PIC 9(02)V9.
       77 WRK-SITUACAO PIC X(20).
       77 WRK-CONTINUA PIC X(01).
       PROCEDURE DIVISION.

           MOVE 'N' TO WRK-CONTINUA
           PERFORM SOLICITA-INFORMACOES UNTIL WRK-CONTINUA ='S' OR
                   WRK-CONTINUA = 's'
           GOBACK.
       SOLICITA-INFORMACOES.
           MOVE SPACES TO WRK-NOME, WRK-MATERIA
           INITIALIZE WRK-NOTA

           DISPLAY 'POR FAVOR, DIGITE SEU NOME'
           ACCEPT WRK-NOME

           DISPLAY 'DIGITE A MATERIA QUE VOCE ESTA CURSANDO'
           ACCEPT WRK-MATERIA

           DISPLAY 'INFORME A NOTA QUE VOCE TIROU NESTA DISCIPLINA'
           ACCEPT WRK-NOTA

       EVALUATE WRK-NOTA
           WHEN 0 THRU 4
               MOVE 'REPROVADO' TO WRK-SITUACAO
           WHEN 5 THRU 6
               MOVE 'EM RECUPERACAO' TO WRK-SITUACAO
           WHEN 7 THRU 10
               MOVE 'APROVADO' TO WRK-SITUACAO
           WHEN OTHER
               MOVE 'NOTA INVALIDA' TO WRK-SITUACAO
       END-EVALUATE
           DISPLAY 'OLA ' WRK-NOME
               'VOCE ESTA MATRICULADO NA MATERIA: ' WRK-MATERIA
               'E SUA NOTA FOI: ' WRK-NOTA
               ' E SUA SITUACAO FOI: ' WRK-SITUACAO.
           DISPLAY 'DESEJA CONTINUAR? S/N'
           ACCEPT WRK-CONTINUA.
           GOBACK.
            STOP RUN.

       END PROGRAM PROG05.

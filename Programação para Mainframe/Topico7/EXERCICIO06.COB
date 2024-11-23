       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROG06.
      ******************************************************************
      * Author:
      * Date:
      * Purpose:
      * Tectonics: cobc
      ******************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       77 WRK-NOME     PIC X(30).
       77 WRK-MATERIA  PIC X(15).
       77 WRK-NOTA     PIC 99.
       77 WRK-SITUACAO PIC X(20).
       77 WRK-CONTINUA PIC X(01).
       PROCEDURE DIVISION.
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR
           PERFORM 0200-PROCESSAR
           PERFORM 0300-CONTINUAR
           IF WRK-CONTINUA = 'S' OR WRK-CONTINUA = 's'
               PERFORM 0400-FINALIZAR
           ELSE
               PERFORM 0001-PRINCIPAL
           END-IF.

       0100-INICIALIZAR.
           MOVE 'N' TO WRK-CONTINUA.
           MOVE SPACES TO WRK-NOME WRK-MATERIA WRK-SITUACAO.
           MOVE 0 TO WRK-NOTA.

           DISPLAY 'POR FAVOR, DIGITE SEU NOME: '.
           ACCEPT WRK-NOME.

           DISPLAY 'DIGITE A MATERIA QUE VOCE ESTA CURSANDO: '.
           ACCEPT WRK-MATERIA.

           DISPLAY 'INFORME A NOTA QUE VOCE TIROU NESTA DISCIPLINA: '.
           ACCEPT WRK-NOTA.

       0200-PROCESSAR.
           EVALUATE WRK-NOTA
               WHEN 0 THRU 4
                   MOVE 'REPROVADO' TO WRK-SITUACAO
               WHEN 5 THRU 6
                   MOVE 'EM RECUPERACAO' TO WRK-SITUACAO
               WHEN 7 THRU 10
                   MOVE 'APROVADO' TO WRK-SITUACAO
               WHEN OTHER
                   MOVE 'NOTA INVALIDA' TO WRK-SITUACAO
           END-EVALUATE.
           DISPLAY 'OLA ' WRK-NOME
                   ', VOCE ESTA MATRICULADO NA MATERIA: ' WRK-MATERIA
                   ', SUA NOTA FOI: ' WRK-NOTA
                   ', E SUA SITUACAO FOI: ' WRK-SITUACAO '.'.

       0300-CONTINUAR.
           DISPLAY 'DESEJA ENCERRAR O PROGRAMA? S/N: '.
           ACCEPT WRK-CONTINUA.

       0400-FINALIZAR.
           DISPLAY 'FIM DO PROGRAMA...'.
           STOP RUN.

       END PROGRAM PROG06.

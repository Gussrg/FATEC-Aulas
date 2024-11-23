       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROG07.
      ******************************************************************
      * Autor:
      * Data:
      * Purpose:
      * Tectonics: cobc
      ******************************************************************

       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       INPUT-OUTPUT SECTION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-INDICE       PIC 9 VALUE 1.        *> Índice para controle do loop
       77 WRK-ITENS        PIC 9 VALUE 6.       *> Número de disciplinas
       01 DISCIPLINAS.
           05 DISCIPLINA-NOME OCCURS 6 TIMES
              PIC X(40).                *> Matriz de 6 nomes de disciplinas

       PROCEDURE DIVISION.
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR.
           PERFORM 0200-PROCESSAR.
           PERFORM 0300-FINALIZAR.

       0100-INICIALIZAR.
           DISPLAY "Digite os nomes de 6 disciplinas do curso de ADS:"
           PERFORM VARYING WRK-INDICE FROM 1 BY 1
                   UNTIL WRK-INDICE > WRK-ITENS
               DISPLAY "Disciplina " WRK-INDICE ":"
               ACCEPT DISCIPLINA-NOME(WRK-INDICE)
           END-PERFORM.

       0200-PROCESSAR.
           DISPLAY "As disciplinas cadastradas são:"
           PERFORM VARYING WRK-INDICE FROM 1 BY 1
                   UNTIL WRK-INDICE > WRK-ITENS
               DISPLAY "Disciplina " WRK-INDICE ": "
                       DISCIPLINA-NOME(WRK-INDICE)
           END-PERFORM.

       0300-FINALIZAR.
           DISPLAY"-----------------------------"
           DISPLAY "FIM DO PROGRAMA!"
           STOP RUN.

       END PROGRAM PROG07.

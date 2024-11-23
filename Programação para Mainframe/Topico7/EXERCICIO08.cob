       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROG08.
      ******************************************************************
      * Autor:
      * Data:
      * Purpose:
      * Tectonics: cobc
      ******************************************************************

       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.
       INPUT-OUTPUT SECTION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-INDICE       PIC 9 VALUE 1.       *> Índice para controle do loop
       77 WRK-ITENS        PIC 9 VALUE 6.       *> Número de disciplinas
       01 DISCIPLINAS.
           05 DISCIPLINA-NOME OCCURS 6 TIMES
              PIC X(40).                        *> Nomes das disciplinas
           05 NOTAS OCCURS 6 TIMES.             *> Notas para cada disciplina
              10 NOTA-P1      PIC 99.           *> Nota da P1
              10 NOTA-P2      PIC 99.           *> Nota da P2
              10 NOTA-ATIV    PIC 99.           *> Nota da Atividade

       PROCEDURE DIVISION.
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR-DISCIPLINAS
           PERFORM 0200-INICIALIZAR-NOTAS.
           PERFORM 0300-EXIBIR.
           PERFORM 0400-FINALIZAR.

       0100-INICIALIZAR-DISCIPLINAS.
           DISPLAY "Digite os nomes de 6 disciplinas do curso de ADS:"
           PERFORM VARYING WRK-INDICE FROM 1 BY 1
                   UNTIL WRK-INDICE > WRK-ITENS
               DISPLAY "Disciplina " WRK-INDICE ":"
               ACCEPT DISCIPLINA-NOME(WRK-INDICE)
           END-PERFORM.

       0200-INICIALIZAR-NOTAS.
           DISPLAY "Agora, informe as notas de cada disciplina:"
           PERFORM VARYING WRK-INDICE FROM 1 BY 1
                   UNTIL WRK-INDICE > WRK-ITENS
               DISPLAY "Disciplina " WRK-INDICE ": "
                       DISCIPLINA-NOME(WRK-INDICE)
               DISPLAY "Digite a nota da P1:"
               ACCEPT NOTA-P1(WRK-INDICE)
               DISPLAY "Digite a nota da P2:"
               ACCEPT NOTA-P2(WRK-INDICE)
               DISPLAY "Digite a nota da Atividade:"
               ACCEPT NOTA-ATIV(WRK-INDICE)
           END-PERFORM.

       0300-EXIBIR.
           MOVE 1 TO WRK-INDICE            *> Reinicializando o índice
           DISPLAY "Resultados das disciplinas:"
           PERFORM VARYING WRK-INDICE FROM 1 BY 1
                   UNTIL WRK-INDICE > WRK-ITENS
               DISPLAY "Disciplina " WRK-INDICE ": "
                       DISCIPLINA-NOME(WRK-INDICE)
               DISPLAY "  Nota P1: " NOTA-P1(WRK-INDICE)
               DISPLAY "  Nota P2: " NOTA-P2(WRK-INDICE)
               DISPLAY "  Nota Atividade: " NOTA-ATIV(WRK-INDICE)
           END-PERFORM.

       0400-FINALIZAR.
           DISPLAY "-----------------------------"
           DISPLAY "FIM DO PROGRAMA!"
           STOP RUN.

       END PROGRAM PROG08.

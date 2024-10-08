       IDENTIFICATION DIVISION.
       PROGRAM-ID. YOUR-PROGRAM-NAME.
      *****************************************************************
      * Author:
      * Date:
      * Purpose:
      * Tectonics: cobc
      *****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       77 WRK-NUMERO        PIC 9(003)V9(001)  VALUE ZEROS.
       77 WRK-RESTO         PIC 9(003)V9(001)  VALUE ZEROS.
       77 WRK-ENTRADAPAR    PIC 9(003)         VALUE ZEROS.
       77 WRK-ENTRADAIMPAR  PIC 9(003)         VALUE ZEROS.
       77 WRK-CONTADOR      PIC 9(001)         VALUE ZEROS.
       77 WRK-SAIDAPAR      PIC 9(003) OCCURS 5 TIMES  VALUE ZEROS.
       77 WRK-SAIDAIMPAR    PIC 9(003) OCCURS 5 TIMES  VALUE ZEROS.
       77 WRK-SOMAPAR       PIC 9(003)         VALUE ZEROS.
       77 WRK-SOMAIMPAR     PIC 9(003)         VALUE ZEROS.
       77 WRK-MAIORPAR      PIC 9(003)         VALUE ZEROS.
       77 WRK-MAIORIMPAR    PIC 9(003)         VALUE ZEROS.
       77 WRK-MENORPAR      PIC 9(003)         VALUE ZEROS.
       77 WRK-MENORIMPAR    PIC 9(003)         VALUE ZEROS.

       PROCEDURE DIVISION.
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR.


       0100-INICIALIZAR.
           DISPLAY "DIGITE O NUMERO DESEJADO"
           ACCEPT WRK-NUMERO.
       0200-PROCESSAR.

       0300-FINALIZAR.



      *VERIFICA SE O N�MERO � PAR OU IMPAR

           MOVE FUNCTION REM (WRK-NUMERO 2) TO WRK-RESTO.

           IF WRK-RESTO = 0
               MOVE WRK-NUMERO TO WRK-ENTRADAPAR
               MOVE 1 TO WRK-CONTADOR
           ELSE
               MOVE WRK-NUMERO TO WRK-ENTRADAIMPAR
           END-IF.

           IF WRK-CONTADOR = 1
               MOVE (WRK-ENTRADAPAR+2)  TO WRK-SAIDAPAR(1)
               MOVE (WRK-SAIDAPAR(1)+2) TO WRK-SAIDAPAR(2)
               MOVE (WRK-SAIDAPAR(2)+2) TO WRK-SAIDAPAR(3)
               MOVE (WRK-SAIDAPAR(3)+2) TO WRK-SAIDAPAR(4)
               MOVE (WRK-SAIDAPAR(4)+2) TO WRK-SAIDAPAR(5)

           ELSE
               MOVE (WRK-ENTRADAIMPAR+2)  TO WRK-SAIDAIMPAR(1)
               MOVE (WRK-SAIDAIMPAR(1)+2) TO WRK-SAIDAIMPAR(2)
               MOVE (WRK-SAIDAIMPAR(2)+2) TO WRK-SAIDAIMPAR(3)
               MOVE (WRK-SAIDAIMPAR(3)+2) TO WRK-SAIDAIMPAR(4)
               MOVE (WRK-SAIDAIMPAR(4)+2) TO WRK-SAIDAIMPAR(5)
           END-IF.

           MOVE (1) TO WRK-CONTADOR

      *PARA MOSTRAR OS PR�XIMOS 5 PARES AP�S O N�MERO DIGITADO

           PERFORM UNTIL WRK-CONTADOR = 5
              DISPLAY WRK-SAIDAPAR(CONTADOR)
              MOVE FUNCTION SUM(WRK-CONTADOR 1) TO WRK-CONTADOR
           END-PERFORM.

      *    MOVE (1) TO WRK-CONTADOR

      **PARA MOSTRAR OS PR�XIMOS 5 PARES AP�S O N�MERO DIGITADO

           PERFORM UNTIL WRK-CONTADOR = 5
              DISPLAY WRK-SAIDAIMPAR(CONTADOR)
              MOVE FUNCTION SUM(WRK-CONTADOR 1) TO WRK-CONTADOR
           END-PERFORM.
           STOP RUN.
           END PROGRAM YOUR-PROGRAM-NAME.

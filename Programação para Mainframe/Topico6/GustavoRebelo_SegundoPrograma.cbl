      ******************************
      * Author:Gustavo Rebelo Godoy
      * Date:26/10/2024
      * Purpose:
      * Tectonics: cobc
      ******************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. SegundoPrograma.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       77 LARGURA     PIC 9(003) VALUE ZEROES.
       77 ALTURA      PIC 9(003) VALUE ZEROES.
       77 AREA-RESULT PIC 9(006) VALUE ZEROES.

       PROCEDURE DIVISION.
       INICIO.

           DISPLAY "Calculo de área (quadrados/retangulos)"
           DISPLAY "Largura: "
           ACCEPT LARGURA
           DISPLAY "ALTURA: "
           ACCEPT ALTURA
           MULTIPLY LARGURA BY ALTURA GIVING AREA-RESULT
           DISPLAY "Area       :" AREA-RESULT
           STOP RUN.
       END PROGRAM SegundoPrograma.

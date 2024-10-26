      ******************************
      * Author:Gustavo Rebelo Godoy
      * Date:26/10/2024
      * Purpose:
      * Tectonics: cobc
      ******************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. TerceiroPrograma.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       77 WRK-NOME      PIC X(30) VALUE SPACES.
       77 WRK-MATERIA   PIC X(15) VALUE SPACES.
       77 WRK-NOTA      PIC 9(02) VALUE ZEROES.

       PROCEDURE DIVISION.
       INICIO.

           DISPLAY 'POR FAVOR, DIGITE SEU NOME '
           ACCEPT WRK-NOME

           DISPLAY 'DIGITE A MATERIA QUE VOCE ESTA CURSANDO '
           ACCEPT WRK-MATERIA

           DISPLAY 'INFORME A NOTA QUE VOCE TIROU NESTA DISCIPLINA '
           ACCEPT WRK-NOTA

           DISPLAY 'OLA ' WRK-NOME
           ' VOCE ESTA MATRICULADO NA MATERIA ' WRK-MATERIA
           ' E SUA NOTA FOI ' WRK-NOTA.
           GOBACK.
           STOP RUN.
       END PROGRAM TerceiroPrograma.

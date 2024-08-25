       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCOB08.
      ***************************
      *AREA DE COMENTARIOS - REMARKS
      *AUTHOR = GUSTAVO REBELO
      *OBJETIVO: COMANDOS IF/ELSE/ENDIF
      *DATA = 25/08/2024
      ***************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-NOTA1  PIC 9(02) VALUE ZEROS.
       77 WRK-NOTA2  PIC 9(02) VALUE ZEROS.
       77 WRK-MEDIA  PIC 9(02) VALUE ZEROS.
       77 WRK-FMEDIA PIC Z9    VALUE ZEROS.
       PROCEDURE DIVISION.
           ACCEPT WRK-NOTA1 FROM CONSOLE.
           ACCEPT WRK-NOTA2 FROM CONSOLE.
            COMPUTE WRK-MEDIA = (WRK-NOTA1 + WRK-NOTA2)/2.
           MOVE WRK-MEDIA TO WRK-FMEDIA.
           DISPLAY 'MEDIA: ' WRK-FMEDIA.
               EVALUATE WRK-MEDIA
                WHEN 10
                   DISPLAY 'APROVADO COM BONUS'
                WHEN 6 THRU 9.9
                    DISPLAY 'APROVADO!'
                WHEN 2 THRU 5.9
                    DISPLAY 'RECUPERACAO!'
                WHEN OTHER
                     DISPLAY 'REPROVADO!'
                    END-EVALUATE


           STOP RUN.

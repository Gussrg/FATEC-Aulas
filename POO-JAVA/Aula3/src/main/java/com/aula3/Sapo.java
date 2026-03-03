
package com.aula3;

public class Sapo {

    private int qtPulo; //Depende da instancia
    private static int qtSapo; //Não depende da instancia

    public Sapo(){
        qtPulo++; //Um por sapo, pois não é estatico
        qtSapo++; //tres, todos os sapos, pois é uma variavel estatica
    }

    public int getQtPulo(){
        return qtPulo;
    }

    public static int getQtSapo(){
        return qtSapo;
    }

}

package com.aula4;

public enum Status {
    DESLIGADO, LIGADO;

    //TEM QUE SER CHAMADO DA CLASSE
    public static boolean ligado(Status s){
        return s == LIGADO;
    }

    public static boolean desligado(Status s){
        return s == DESLIGADO;
    }
}


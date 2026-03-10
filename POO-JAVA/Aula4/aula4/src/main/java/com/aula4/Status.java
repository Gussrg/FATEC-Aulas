package com.aula4;

public enum Status {
    DESLIGADO, LIGADO;

    public boolean ligado(status s){
        return s == LIGADO;
    }

    public boolean desligado(status s){
        return s == DESLIGADO;
    }

}

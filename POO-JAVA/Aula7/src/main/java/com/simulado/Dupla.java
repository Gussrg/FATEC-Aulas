package com.simulado;

public class Dupla<T> {

    //Temos dois atributos: primeiro de tipo T
    //e segundo de tipo T.
    private T primeiro, segundo;

    public Dupla(T primeiro, T segundo) {
        this.primeiro = primeiro;
        this.segundo = segundo;
    }

    public T getPrimeiro() {
        return primeiro;
    }

    public T getSegundo() {
        return segundo;
    }

}

package com.aula1;

public class Aula1 {

    public static void main(String[] args) {
        Cachorro c = new Cachorro();
        c.nome = "BIDU";
        c.raca = "SRD";
        c.latir();
        c.mostrarRaca();

        Cachorro d = new Cachorro();
        d.nome = "REX";
        d.raca = "BULLDOG";
        d.latir();
        d.mostrarRaca();
    }
}

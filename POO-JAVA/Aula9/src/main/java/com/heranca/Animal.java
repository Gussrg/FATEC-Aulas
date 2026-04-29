package com.heranca;


public class Animal {

    private String nome;
    protected int algo;

    //OBS: Construtor explicito na superclasse
    //obriga a subclasse a ter construtor tb.
    public Animal(String nome){
        this.nome = nome;
    }

    public void dormir(){
        System.out.println("ZZZZZZZZZZzzzz");
    }

    public String getNome(){
        return nome;
    }

    protected void emitirSom() {
        System.out.println("GENERICO");
    }

}

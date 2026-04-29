package com.heranca;

public class Cachorro extends Animal {

    private String raca;
    //LP? []
    public Cachorro(){
        super("Super Cachorro");
    }
    //LP? [String]
    public Cachorro(String nome){
        super(nome);
    }
    //LP? [String, String]
    public Cachorro(String nome, String raca) {
        super(nome);
        this.raca = raca;
    }

    @Override
    public void emitirSom(){
        System.out.println(getNome() + ": AU AU");
    }

}

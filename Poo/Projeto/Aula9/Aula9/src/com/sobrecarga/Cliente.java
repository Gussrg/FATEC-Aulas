package com.sobrecarga;

public class Cliente {
    private int id; //CP
    private String nome, cpf;

    //update
    public Cliente (int id, String nome, String cpf){
        this.id = id;
        this.nome = nome;
        this.cpf = cpf;

    }
    
    //inserção 
    public Cliente(String nome, String cpf){
        this.nome = nome;
        this.cpf = cpf;
    }
    }

}

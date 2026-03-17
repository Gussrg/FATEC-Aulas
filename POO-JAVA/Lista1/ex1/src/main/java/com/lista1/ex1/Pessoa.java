package com.lista1.ex1;

public class Pessoa {
    private String nome;
    private String sexo;
    private int idade;
    private boolean vegetariana;
    
    public Pessoa(String nome, String sexo, int idade, boolean vegetariana) {
        this.nome = nome;
        this.sexo = sexo;
        this.idade = idade;
        this.vegetariana = vegetariana;
    }

    public String getNome() {
        return nome;
    }

    public String getSexo() {
        return sexo;
    }

    public int getIdade() {
        return idade;
    }

    public boolean isVegetariana() {
        return vegetariana;
    }


}

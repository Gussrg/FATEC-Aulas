package com.Aula4;

public class Aluno {
    private String nome, email;
    private Endereco endereco;

    public Aluno(String nome, String email, Endereco endereco) {
        this.nome = nome;
        this.email = email;
        this.endereco = endereco;
    }
    
    public String getNome() {
        return nome;
    }

    public String getEmail() {
        return email;
    }

    public Endereco getEndereco() {
        return endereco;
    }

    public void mostrar(){
        System.out.println("nome: " + nome);
        System.out.println("email: " + email);
        endereco.mostrar();
    }

    
}



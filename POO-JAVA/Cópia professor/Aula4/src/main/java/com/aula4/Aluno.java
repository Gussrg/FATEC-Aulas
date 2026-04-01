package com.aula4;

//Aluno HAS-A Endereco
//Type-driven development
public class Aluno {

    private NomeAluno nome;
    private Endereco  endereco;

    public Aluno(Endereco endereco, NomeAluno nome) {
        this.endereco = endereco;
        this.nome = nome;
    }

    public void mostrarInfo(){
        System.out.println("Nome: " + nome.nomeAluno());
        endereco.mostrarInfo();
    }

}

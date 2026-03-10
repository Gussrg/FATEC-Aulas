package com.aula4;

//Aluno HAS-A Endereco
//Type-driven development
public class Aluno {

    private NomeAluno nome;
    private Endereco endereco;

    public Aluno(nomeAluno nome, Endereco endereco) {
        this.nome = nome;
        this.endereco = endereco;
    }

    public void monstrarInfo(){
        System.out.println("Nome: " + nome.nomeAluno());
        endereco.mostrarInfo();
    }

}

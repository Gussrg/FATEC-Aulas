package com.aula5;

public class Aluno {
	
	private String nome, ra;
	//Aluno HAS-A Endereco por causa dessa linha:
	private Endereco endereco;
	//Aqui na classe Aluno, "puxamos" todos os
	//membros acessíveis (por exemplo, public).
	
	public Aluno(String nome, String ra, Endereco endereco) {
		this.nome = nome;
		this.ra = ra;
		this.endereco = endereco;
	}
	
	public void mostrar() {
		System.out.println("Nome: " + nome);
		System.out.println("RA: " + ra);
		endereco.mostrar();
	}
	
}

package com.aula7;

public class Passageiro {
	
	private String nome;
	private boolean estudante;
	
	public Passageiro(String nome, boolean estudante) {
		this.nome = nome;
		this.estudante = estudante;
	}
	
	public void mostrar() {
		System.out.println(nome);
		System.out.println(estudante);
	}

	public boolean isEstudante() {
		return estudante;
	}
	
}

package com.aula3;

public class Gato {
	
	String nome, raca;
	
	Gato(String nome, String raca) {
		this.nome = nome;
		this.raca = raca;
	}

	void miar() {
		System.out.println(nome + ": MIAUUU");
	}
	
	void mostrarRaca() {
		System.out.println(raca);
	}
	
}

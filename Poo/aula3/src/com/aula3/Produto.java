package com.aula3;

public class Produto {
	
	double preco;
	String nome;
	Tipo tipo;
	
	Produto(double preco, String nome, Tipo tipo) {
		this.preco = preco;
		this.nome = nome;
		this.tipo = tipo;
	}
	
	void mostrarInfo() {
		System.out.println(preco);
		System.out.println(nome);
		System.out.println(tipo);
	}
	
	void calcularDesconto() {
		switch(tipo) {
		case LIVRO:
			System.out.println(0.85*preco);
			break;
		case ESCRITORIO:
			System.out.println(0.8*preco);
			break;
		default:
			System.out.println(0.9*preco);
		}
	}
}

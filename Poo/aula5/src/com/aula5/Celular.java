package com.aula5;

public class Celular {

	private String nome, numero;
	private Bateria bateria;
	
	public Celular(String nome, 
			       String numero, 
			       Bateria bateria) {
		this.nome = nome;
		this.numero = numero;
		this.bateria = bateria;
	}
	
	public void mostrar() {
		// ! => not
		//Se bateria nao vazia
		//Desafio: colocar o erro de bateria vazia
		//sem usar else.
		if(!bateria.isVazia()) {
			System.out.println("Nome: " + nome);
			System.out.println("Numero: " + numero);
			bateria.gastar();
			mostrarCarga();
			return;
		}
		System.out.println("Erro");
	}
	
	public void mostrarCarga() {
		System.out.println("A carga eh: " + bateria.getCarga());
	}
	
	public void mostarPercentual() {
		System.out.println(bateria.calcPercentual() + "%");
	}
	
}

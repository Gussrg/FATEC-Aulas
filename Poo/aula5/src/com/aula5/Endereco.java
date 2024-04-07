package com.aula5;

public class Endereco {
	
	private String logradouro, cidade;
	//Endereco HAS-A Estado
	private Estado estado;
	
	public Endereco(String logradouro, 
			        String cidade, 
			        Estado estado) {
		this.logradouro = logradouro;
		this.cidade = cidade;
		this.estado = estado;
	}
	
	public void mostrar() {
		System.out.println("Logradouro: " + logradouro);
		System.out.println("Cidade: " + cidade);
		System.out.println("Estado: " + estado);
	}
	
	
	
	
}

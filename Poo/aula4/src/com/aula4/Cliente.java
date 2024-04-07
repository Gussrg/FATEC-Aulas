package com.aula4;

public record Cliente(String nome, String cpf) {
	
	public boolean isNomeValido() {
		return nome != null;
	}
	
	public void mostrarNomeCPF() {
		System.out.println(nome);
		System.out.println(cpf);
	}
	
}

package com.aula2;

public class Contador {
	int qtPessoas;

	void incrementar() {
		qtPessoas = qtPessoas + 1;
	}

	void decrementar() {
		if (qtPessoas > 0) {
			qtPessoas = qtPessoas - 1;
		} else {
			System.out.println("Erro");
		}
	}

	void zerar() {
		qtPessoas = 0;
	}

	void mostrar() {
		System.out.println(qtPessoas);
	}
}

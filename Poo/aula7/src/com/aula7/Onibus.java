package com.aula7;

public class Onibus {

	private Passageiro[] assentos;
	private double preco;

	public Onibus(double preco, int quantidade) {
		this.preco = preco;
		assentos = new Passageiro[quantidade];
	}

	public void adicionar(Passageiro p, int indice) {
		if (indice < 0 || indice >= assentos.length) {
			System.out.println("Erro");
			return;
		}
		if (p == null) {
			System.out.println("Produto nulo");
			return;
		}
		if (assentos[indice] != null) {
			System.out.println("Erro");
			return;
		}
		assentos[indice] = p;
	}

	public void mostrarPassageiros() {
		for (Passageiro p : assentos) {
			p.mostrar();
		}
		// OU
		for (int i = 0; i < assentos.length; i++) {
			assentos[i].mostrar();
		}
	}

	public void mostrarEstudante() {
		for (Passageiro p : assentos) {
			if (p.isEstudante()) {
				p.mostrar();
			}
		}
	}

	public double calcularPreco() {
		double soma = 0;
		for (Passageiro p : assentos) {
			if (p.isEstudante()) {
				soma = soma + preco/2;
			} else {
				soma = soma + preco;
			}
		}
		return soma;
	}

}

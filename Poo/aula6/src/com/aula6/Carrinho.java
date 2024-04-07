package com.aula6;

public class Carrinho {
	
	private Produto[] produtos;
	
	public Carrinho(int tamanho) {
		produtos = new Produto[tamanho];
	}
	
	public void inserir(Produto p, int i) {
		if(i < 0 || i >= produtos.length) {
			System.out.println("Erro");
			return;
		}
		if(p == null) {
			System.out.println("Produto nulo");
			return;
		}
		if(produtos[i] != null) {
			System.out.println("Erro");
			return;
		}
		produtos[i] = p;
	}
	
	public void remover(int i) {
		if(i < 0 || i >= produtos.length) {
			System.out.println("Erro");
			return;
		}
		produtos[i] = null;
	}
	
	//TODO: Corrigir
	public void listar() {
		for(int i=0; i < produtos.length; i++) {
			//O metodo mostrar esta sendo chamado
			//para cada produto indexado por i.
			produtos[i].mostrar();
		}
	}
	
	public double calcularTotal() {
		double soma = 0;
		for(int i=0; i < produtos.length; i++) {
			//Pego o valor de cada produto indexado
			//por i e somo.
			soma = soma + produtos[i].valor();
		}
		return soma;
	}
	
	//Records nao precisam de get
	public void buscarPorNome(String nome) {
		for(int i=0; i < produtos.length; i++) {
			if(produtos[i].nome().equals(nome)) {
				produtos[i].mostrar();
			}
		}
	}
}

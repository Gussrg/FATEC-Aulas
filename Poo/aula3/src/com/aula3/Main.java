package com.aula3;

public class Main {

	public static void main(String[] args) {
		//Moeda m = new Moeda(7,Correncia.BTC);
		//m.converterReal();
		
		Produto p = 
			new Produto(60,"Haskell: Uma introducao a programacao funcional",Tipo.LIVRO);
		p.calcularDesconto();
		p.mostrarInfo();
	}

}

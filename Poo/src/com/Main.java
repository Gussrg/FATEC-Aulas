package com;

public class Main {

	public static void main(String[] args) {
		Cachorro c = new Cachorro();
		c.nome = "BIDU";
		c.raca = "SRD;";
		c.idade = 67;
		c.latir();
		c.mostrarIdade();
		c.mostrarRaca();
		
		Cachorro d = new Cachorro();
		d.nome = "Kleber";
		d.raca = "Dachshund";
		d.idade = 13;
		d.mostrarRaca();
		d.latir();
		d.mostrarIdade();
		}

}

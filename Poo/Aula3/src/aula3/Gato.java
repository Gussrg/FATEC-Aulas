package aula3;

public class Gato {
	String nome, raca;
	
	gato(String nome, String raca){
		this.nome = nome;
		this.raca = raca;
	}
	void miar() {
		System.out.println(nome + ": MIAUU");
	}
}

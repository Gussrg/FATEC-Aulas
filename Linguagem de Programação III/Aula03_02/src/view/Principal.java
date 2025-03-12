package view;

import business.Figura;
import business.Quadrado;

public class Principal {

	public static void main(String[] args) {
		/*** UPCASTING ***/
		// instancia objeto da classe filha
		Quadrado quadradoUp = new Quadrado();
		quadradoUp.setLado(5);
		// ...
		// bloco para representar hipotéticas linhas de código com regras diversas...
		// ...
		
		// via atribuição direta (casting implícito), atribui instância do objeto 
		// da classe filha para gerar objeto da classe pai (upcasting)
		Figura figuraUp = quadradoUp;
		System.out.println(String.format(
				"[Upcasting] Área da figura: %.2f cm².", figuraUp.calcularArea()));
		
		/*** DOWNCASTING ***/
		Figura figuraDown = new Quadrado(); // especificamente nesta linha ocorre, também, um upcasting
		// ...
		// bloco para representar hipotéticas linhas de código com regras diversas...
		// ...
		
		// via atribuição indireta (casting explícito), atribui instância do objeto 
		// da classe pai para gerar objeto da classe filha (downcasting)
		Quadrado quadradoDown = (Quadrado) figuraDown;

		quadradoDown.setLado(6);
		System.out.println(String.format(
				"[Downcasting] Área do quadrado: %.2f cm².", quadradoDown.calcularArea()));
	}

}














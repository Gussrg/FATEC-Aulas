package view;

import business.Figura;
import business.Quadrado;

public class Principal {

	public static void main(String[] args) {
		// *** UPCASTING ***
		Quadrado quadradoUp = new Quadrado();
		quadradoUp.setLado(5);
		// ...
		// linhas comentadas para representar uma lógica ou regra 
		// de negócio que trouxesse a necessidade de um upcasting
		// ...
		
		// atribuição direta (casting implícito) do tipo
		// da classe filha para gerar objeto da classe pai
		Figura figuraUp = quadradoUp;
		// executa método no objeto da pai e exibe o resultado
		System.out.println(String.format(
				"[Upcasting] Área da figura: %.2f cm².",
					figuraUp.calcularArea()));
		
		// *** DOWNCASTING ***
		Figura figuraDown = new Quadrado(); // aqui ocorre um upcasting
		// ...
		// linhas comentadas para representar uma lógica ou regra  
		// de negócio que trouxesse a necessidade de um downcasting
		// ...
		
		// atribuição indireta (casting explícito) do tipo
		// da classe pai para gerar objeto da classe filha
		Quadrado quadradoDown = (Quadrado)figuraDown;
		quadradoDown.setLado(6);
		// executa método no objeto da filha e exibe o resultado
		System.out.println(String.format(
				"[Downcasting] Área do quadrado: %.2f cm².",
					quadradoDown.calcularArea()));
		
	}
}

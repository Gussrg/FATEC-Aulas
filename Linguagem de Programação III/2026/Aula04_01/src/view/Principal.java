package view;

import business.Figura;
import business.Quadrado;

public class Principal {

	public static void main(String[] args) {
		// *** UPCASTING ***
		Quadrado quadradoUp = new Quadrado();
		quadradoUp.setLado(5);
		
		// essas linhas comentadas aqui representam/simbolizam a existência de 
		// regra(s) de negócio que crie(m) a necessidade de realização do upcasting
		
		// via atribuição direta (casting implícito), atribui objeto
		// da classe filha a objeto da classe pai (upcasting)
		Figura figuraUp = quadradoUp;
		
		// executa método da regra de negócio a partir do objeto da classe pai
		System.out.println(String.format(
				"[Upcasting] Área da figura: %.2f cm².", figuraUp.calcularArea()));
		
		// *** DOWNCASTING ***
		Figura figuraDown = new Quadrado(); // nesta linha especificamente ocorre um upcasting
		
		// essas linhas comentadas aqui representam/simbolizam a existência de 
		// regra(s) de negócio que crie(m) a necessidade de realização do downcasting
		
		// via atribuição indireta (casting explícito), atribui objeto
		// da classe pai a objeto da classe filha (downcasting)
		Quadrado quadradoDown = (Quadrado)figuraDown;
		quadradoDown.setLado(7);

		// executa método da regra de negócio a partir do objeto da classe filha
		System.out.println(String.format(
				"[Downcasting] Área da quadrado: %.2f cm².", quadradoDown.calcularArea()));
		
	}
}


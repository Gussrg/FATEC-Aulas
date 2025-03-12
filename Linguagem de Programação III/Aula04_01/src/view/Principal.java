package view;

import java.util.Scanner;

import business.Adicao;
import business.Divisao;
import business.Multiplicacao;
import business.Subtracao;
import business.Calculo;

public class Principal {

	public static void main(String[] args) {

		// configura objeto para ler dados do usuário
		Scanner leitor = new Scanner(System.in);
		
		System.out.println("Calculadora com OO");
		System.out.println("Informe a operação desejada:\n" +
				"1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir");
		// lê a operação desejada
		int operacao = leitor.nextInt();
		
		// lê os valores a serem usados nas operações
		System.out.print("Valor 1: ");
		float v1 = leitor.nextFloat();
		System.out.print("Valor 2: ");
		float v2 = leitor.nextFloat();
		
		// declara variável do tipo da classe pai
		Calculo calc = null;
		
		// a partir da operação desejada, instanciar a classe 
		// correspondente - utilizando, para isso, o conceito de 
		// upcasting (quando se atribui um objeto da filha para
		// gerar um objeto da classe pai)
		switch(operacao) {
			case 1: calc = new Adicao(v1, v2); break;
			case 2: calc = new Subtracao(v1, v2); break;
			case 3: calc = new Multiplicacao(v1, v2); break;
			case 4: calc = new Divisao(v1, v2); break;
			default: System.out.println("Opção inválida.");
		}
		
		if (calc != null) {
			calc.calcular();
			System.out.println(String.format("Resultado: %.2f.", calc.getResultado()));
		}

	}

}




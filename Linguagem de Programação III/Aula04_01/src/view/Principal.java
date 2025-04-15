package view;

import java.util.Scanner;

import business.Adicao;
import business.Divisao;
import business.Multiplicacao;
import business.Subtracao;

public class Principal {

	public static void main(String[] args) {
		
		// instancia objeto para leitura de dados do usuário
		Scanner entrada = new Scanner(System.in);
		
		// solicita ao usuário 2 valores para cálculo
		System.out.println("*** Calculadora OO ***");
		System.out.print("Informe o valor 1: ");
		float v1 = entrada.nextFloat();
		System.out.print("Informe o valor 2: ");
		float v2 = entrada.nextFloat();
		
		// solicita ao usuário a operação desejada
		System.out.println("Informe a operação desejada:\n" +
				"1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir");
		int opcao = entrada.nextInt();
		
		switch(opcao) {
			case 1: 
				Adicao adicao = new Adicao(v1, v2);
				adicao.calcular();
				System.out.println(String.format(
					"Resultado da operação: %.2f", adicao.getResultado()));
				break;
			case 2: 
				Subtracao subtr = new Subtracao(v1, v2);
				subtr.calcular();
				System.out.println(String.format(
					"Resultado da operação: %.2f", subtr.getResultado()));
				break;
			case 3: 
				Multiplicacao multi = new Multiplicacao(v1, v2);
				multi.calcular();
				System.out.println(String.format(
					"Resultado da operação: %.2f", multi.getResultado()));
				break;
			case 4: 
				Divisao divisao = new Divisao(v1, v2);
				divisao.calcular();
				System.out.println(String.format(
					"Resultado da operação: %.2f", divisao.getResultado()));
				break;
		}
		
	}

}

package view;

import java.nio.channels.MulticastChannel;
import java.util.Scanner;

import business.Adicao;
import business.Divisao;
import business.Multiplicacao;
import business.Subtracao;

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
		
		// a partir da operação desejada, instanciar a classe correspondente
		switch(operacao) {
			case 1: 
				Adicao adicao = new Adicao(v1, v2);
				adicao.calcular();
				System.out.println(String.format("Resultado: %.2f.", adicao.getResultado()));
				break;
			case 2: 
				Subtracao subt = new Subtracao(v1, v2);
				subt.calcular();
				System.out.println(String.format("Resultado: %.2f.", subt.getResultado()));
				break;
			case 3: 
				Multiplicacao mult = new Multiplicacao(v1, v2);
				mult.calcular();
				System.out.println(String.format("Resultado: %.2f.", mult.getResultado()));
				break;
			case 4: 
				Divisao divisao = new Divisao(v1, v2);
				divisao.calcular();
				System.out.println(String.format("Resultado: %.2f.", divisao.getResultado()));
				break;
			default: 
				System.out.println("Opção inválida.");
		}

	}

}




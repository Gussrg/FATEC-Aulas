package view;
import java.util.Scanner;

import model.Adicao;

public class Principal {

	public static void main(String[] args) {
		//Cabeçalho
		System.out.println("**Calculadora em POO**");
		System.out.printf("Selecione a operação desejada: \n" + "1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão");
		
		Scanner entrada = new Scanner(System.in);
		System.out.print("Valor 1: ");
		float v1 = entrada.nextFloat();
		System.out.println("Valor 2:");
		float v2 = entrada.nextFloat();
		
		int operacao = entrada.nextInt;
		
		switch(operacao) {
		case 1:
			Adicao adicao = new Adicao(v1, v2);
			Resultado = adicao.getResultado();
			System.out.printf("Resultado: %.2f", resultado);
			break;
		case 2:
			Subtracao subtracao = new Subtracao(v1, v2);
			Resultado = subtracao.getResultado();
			System.out.printf("Resultado: %.2f", resultado);
			break;
		case 3:
			Multiplicacao multiplicacao = new Multiplicacao(v1, v2);
			Resultado = multiplicacao.getResultado();
			System.out.printf("Resultado: %.2f", resultado);
			break;
		case 4:
			Divisao divisao = new divisao(v1, v2);
			Resultado = divisao.getResultado();
			System.out.printf("Resultado: %.2f", resultado);
			break;
		}

		//System.out.println(String.format("Opção selecionada: %d"));
	}

}

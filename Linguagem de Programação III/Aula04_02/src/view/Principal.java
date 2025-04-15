package view;

import java.util.Scanner;

import business.Carro;
import business.Veiculo;
import business.Moto;

public class Principal {

	public static void main(String[] args) {
		
		System.out.println("*** Locadora de veículos com OOP ***");
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Escolha qual veículo deseja utilizar:\n" +
				"1 - Carro\n2 - Moto");
		int opcao = entrada.nextInt();

		System.out.print("Informe o modelo: ");
		String modelo = entrada.next();
		System.out.print("Informe o fabricante: ");
		String fabricante = entrada.next();
		System.out.print("Informe o ano de fabricação: ");
		int ano = entrada.nextInt();
		
		// declara variável da classe pai
		Veiculo veiculo = null;
		
		if (opcao == 1) {
			System.out.print("Informe a quantidade de portas: ");
			int qtdePortas = entrada.nextInt();
			// instancia objeto da classe Carro (fazendo upcasting)
			veiculo = new Carro(modelo, fabricante, ano, qtdePortas);
		}
		else if (opcao == 2) {
			// instancia objeto da classe Moto (fazendo upcasting)
			veiculo = new Moto(modelo, fabricante, ano);
		}
		else {
			System.out.println("Veículo inexistente");
			return;
		}
		
		// apresenta dados do veículo
		System.out.println(veiculo);
		
		for (int i = 0; i < 20; i++) {
			veiculo.acelerar();
			System.out.println(veiculo);
		}
		
			
	}

}








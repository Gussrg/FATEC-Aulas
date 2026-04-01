package view;

import java.util.Scanner;

import business.Carro;
import business.Manutencao;
import business.Moto;
import business.Veiculo;

public class Principal {

	public static void main(String[] args) {

		System.out.println("*** Locadora com OOP ***");
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Escolha o veículo que deseja utilizar hoje:\n" +
				"1 - Carro\n2 - Moto");
		int opcaoVeiculo = entrada.nextInt();
		
		// recebe dados para instanciar um veículo
		System.out.print("Modelo: ");
		String modelo = entrada.next();
		System.out.print("Fabricante: ");
		String fabricante = entrada.next();
		System.out.print("Ano Fabricação: ");
		int anoFabricacao = entrada.nextInt();
		System.out.print("Potência do motor: ");
		int potenciaMotor = entrada.nextInt();
		System.out.print("Tipo do motor: ");
		String tipoMotor = entrada.next();
		
		Veiculo veiculo = null;
		
		// instancia objeto da classe correspondente ao veículo escolhido
		if (opcaoVeiculo == 1) {
			System.out.print("Quantidade de portas: ");
			int qtdePortas = entrada.nextInt();
			
			veiculo = new Carro(modelo, fabricante, anoFabricacao, potenciaMotor, tipoMotor, qtdePortas);
		}
		else if (opcaoVeiculo == 2) {
			veiculo = new Moto(modelo, fabricante, anoFabricacao, potenciaMotor, tipoMotor);
		}
		else {
			System.out.println("Tipo de veículo inválido.");
			return;
		}
		
		// acelera e exibe informações do veículo
		for (int i = 0; i < 20; i++) {
			veiculo.acelerar();
			System.out.println(veiculo);
		}
		
		for (int i = 0; i < 30; i++) {
			veiculo.desacelerar();
			System.out.println(veiculo);
		}
		

		
	}

}

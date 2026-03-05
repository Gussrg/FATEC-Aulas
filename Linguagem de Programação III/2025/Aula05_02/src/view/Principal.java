package view;

import java.util.Scanner;

import business.Carro;
import business.Manutencao;
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
		System.out.print("Informe a potência do veículo: ");
		int potencia = entrada.nextInt();
		System.out.print("Informe o tipo do motor: ");
		String tipoMotor = entrada.next();
		
		// declara variável da classe pai
		Veiculo veiculo = null;
		
		if (opcao == 1) {
			System.out.print("Informe a quantidade de portas: ");
			int qtdePortas = entrada.nextInt();
			// instancia objeto da classe Carro (fazendo upcasting)
			veiculo = new Carro(modelo, fabricante, ano, potencia, tipoMotor, qtdePortas);
		}
		else if (opcao == 2) {
			// instancia objeto da classe Moto (fazendo upcasting)
			veiculo = new Moto(modelo, fabricante, ano, potencia, tipoMotor);
		}
		else {
			System.out.println("Veículo inexistente");
			return;
		}
		
		// apresenta dados do veículo
		System.out.println(veiculo);
		
		// faz laço apenas para simular que o veículo está acelerando
		for (int i = 0; i < 20; i++) {
			veiculo.acelerar();
			System.out.println(veiculo);
		}
		
		// pergunta ao usuário se deseja fazer manutenção do veículo
		System.out.print("\nDeseja fazer manutenção do veículo? (S/N)");
		String fazerManutencao = entrada.next();
		
		if (fazerManutencao.equalsIgnoreCase("S")) {
			// recebe informações de manutenção
			System.out.print("Informe a data (dd/MM/aaaa): ");
			String dataManutencao = entrada.next();
			System.out.print("Informe o tipo de manutenção: ");
			String tipoManutencao = entrada.next();
			
			// instancia Manutenção do veículo
			Manutencao manutencao = new Manutencao(dataManutencao, tipoManutencao);
			// seta atributo
			veiculo.setManutencao(manutencao);
		}
		
		veiculo.acelerar();
		veiculo.acelerar();

		// imprime informações do veículo, inclusive de manutenção (se houver)
		System.out.println(veiculo + 
				(veiculo.getManutencao() == null ? 
						"" : "; " + veiculo.getManutencao()));
			
	}

}








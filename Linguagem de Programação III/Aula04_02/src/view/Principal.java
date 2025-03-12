package view;

import business.Carro;
import business.Moto;
import business.Veiculo;

public class Principal {

	public static void main(String[] args) {
		
		Veiculo veiculo = null;
		

		veiculo = new Carro("V", "A", 1, 2);
		
		
		
		veiculo.acelerar();
		System.out.println(veiculo);
		
	}

}

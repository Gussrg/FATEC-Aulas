package view;

import business.CamaraTermica;

public class Principal {

	public static void main(String[] args) {
		// instancia objeto do tipo CamaraTermica (classe-todo), que contém,
		// em seus atributos, objetos da classe Temperatura (classe-parte)
		CamaraTermica camaraFria = new CamaraTermica(-8, -2);
		
		// exibe os valores mínimo e máximo (em Celsius e em 
		// Fahrenheit) para operação da câmara
		System.out.println(String.format("Faixa de operação da câmara fria:\n" +
				" - em graus Celsius:\tentre %.2f °C e %.2f °C\n" +
				" - em graus Fahrenheit:\tentre %.2f °F e %.2f °F\n",
				camaraFria.getTemperaturaMinima().getGrausCelsius(),
				camaraFria.getTemperaturaMaxima().getGrausCelsius(),
				camaraFria.getTemperaturaMinima().getGrausFahrenheit(),
				camaraFria.getTemperaturaMaxima().getGrausFahrenheit()));

	}

}

package view;

import business.CamaraTermica;

public class Principal {

	public static void main(String[] args) {
		// instancia objeto da regra de negócio
		CamaraTermica camaraFria = new CamaraTermica(-10, -2);
		
		// exibe valores do tipo "Temperatura", que são atributos de "CamaraTermica"
		System.out.println(
				String.format("[Câmara fria] Temp. mínima: %.2f ºC; temp. máxima: %.2f ºC",
					camaraFria.getTemperaturaMinima().getGrausCelsius(),
					camaraFria.getTemperaturaMaxima().getGrausCelsius()));
		
		System.out.println(
				String.format("[Câmara fria] Temp. mínima: %.2f ºF; temp. máxima: %.2f ºF",
					camaraFria.getTemperaturaMinima().getGrausFahrenheit(),
					camaraFria.getTemperaturaMaxima().getGrausFahrenheit()));
	}

}

package com.aula2;

public class MassaCorporal {
	String nome;
	double peso, altura;
	
	void calcular() {
		double imc = peso / altura / altura;
		if(imc < 18) {
			System.out.println(nome + " esta abaixo do peso");
		}
		if(imc >= 18 && imc < 25) {
			System.out.println(nome + " esta no peso ideal");
		}
		if(imc >= 25) {
			System.out.println(nome + " esta acima do peso");
		}
	}
}

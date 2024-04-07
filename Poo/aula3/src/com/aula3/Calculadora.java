package com.aula3;

public class Calculadora {
	
	double op1, op2;

	Calculadora(double op1, double op2) {
		this.op1 = op1;
		this.op2 = op2;
	}
	
	void somar() {
		System.out.println("O resultado eh: " + (op1 + op2));
	}
	
	void subtrair() {
		System.out.println("O resultado eh: " + (op1 - op2));
	}
	
	void multiplicar() {
		System.out.println("O resultado eh: " + (op1 * op2));
	}
	
	void dividir() {
		if(op2 == 0) {
			System.out.println("Erro");
		}else {
			System.out.println("O resultado eh: " + (op1 / op2));
		}
	}
}

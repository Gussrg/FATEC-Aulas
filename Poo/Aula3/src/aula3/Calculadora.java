package aula3;

public class Calculadora {
	
	double op1, op2;

	public Calculadora(double op1, double op2) {
		super();
		this.op1 = op1;
		this.op2 = op2;
	}
	
	void somar() {
		System.out.println("O resultado da soma é:" );
	}
	
	void subtrair() {
		System.out.println("O resultado da subtração é: ");
	}
	
	void multiplicar() {
		System.out.println("O resultado da multiplicação é: ");
	}
	
	void dividir() {
		System.out.println("O resultado da divisão é: ");
	}
	
}

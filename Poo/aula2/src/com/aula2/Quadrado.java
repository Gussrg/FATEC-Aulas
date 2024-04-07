package com.aula2;

public class Quadrado {
	
	double lado;
	
	void calcularArea() {
		if(lado > 0)
			System.out.println(Math.pow(lado, 2));
	}
	
	void calcularPerimetro() {
		if(lado > 0)
			System.out.printf("%.2f\n",4*lado);
	}
}

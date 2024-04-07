package com.aula4;

public record Circulo(double raio) {
	
	public double calcularPerimetro() {
		double perimetro = 2*Math.PI*raio;
		return perimetro;
	}
	
	public double calcularArea() {
		double area = Math.PI*raio*raio;
		return area;
	}
	
}

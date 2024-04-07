package com.aula4;

public class Main {

	public static void main(String[] args) {
		Circulo c = new Circulo(1);
		System.out.println(c.calcularArea());
		System.out.println(c.calcularPerimetro());
		
		NomeAluno na = new NomeAluno("Victor");
		Aluno a = new Aluno(na,"0050482223015",Curso.ADS);
		System.out.println(a.getNome());
	}

}

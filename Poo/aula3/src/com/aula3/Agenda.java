package com.aula3;

public class Agenda {
	
	int numDia;
	Dia diaSemana;
	
	Agenda(int numDia, Dia diaSemana){
		this.numDia = numDia;
		this.diaSemana = diaSemana;
	}
	
	void verificarTarefa() {
		System.out.println("Dia: " + numDia);
		switch(diaSemana) {
			case SEGUNDA:
				System.out.println("JAVA");
				break;
			case QUARTA:
				System.out.println("Linux");
				break;
			case SEXTA:
				System.out.println("MALDADE!");
				break;
			case SABADO:
				System.out.println("CERVEJA E COBOL");
				break;
			case DOMINGO:
				System.out.println("PEIXAO");
				break;
			default:
				System.out.println("NGM LIGA!");
		}
	}
	
}

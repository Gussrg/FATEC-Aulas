package com.aula5;

public class Bateria {
	
	private int carga;
	//final torna os atributos constantes
	private final int CARGA_MAXIMA = 10;
	private final int CARGA_MINIMA = 0;
	
	public Bateria() {
		carga = CARGA_MAXIMA;
	}
	
	public boolean isVazia() {
		return carga == CARGA_MINIMA; 
	}
	
	public void recarregar() {
		if(carga < CARGA_MAXIMA) {
			carga++;
		}
	}
	
	public void gastar() {
		if(carga > CARGA_MINIMA) {
			carga--;
		}
	}

	public int getCarga() {
		return carga;
	}
	
	public double calcPercentual() {
		return (100*carga)/CARGA_MAXIMA;
	}
}

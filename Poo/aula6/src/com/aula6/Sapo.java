package com.aula6;

public class Sapo {
	
	private int qtPulo;
	private static int qtSapo;
	
	public Sapo() {
		qtSapo = qtSapo + 1;
		pular();
	}
	
	public void pular() {
		qtPulo = qtPulo + 1;
	}
	
	public int getQtPulo() {
		return qtPulo;
	}
	
	public static int getQtSapo() {
		return qtSapo;
	}
	
}

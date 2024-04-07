package com.aula2;

public class Revolver {
	
	int qtMunicao, qtMax;
	
	void atirar() {
		if(qtMunicao > 0) {
			qtMunicao--;
		}else {
			System.out.println("Erro");
		}
	}
	
	void recarregar() {
		if(qtMunicao < qtMax) {
			qtMunicao++;
		}else {
			System.out.println("Erro");
		}
	}
	
	void mostrar() {
		System.out.println(qtMunicao);
	}
	
}

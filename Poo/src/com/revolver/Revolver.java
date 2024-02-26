package com.revolver;
/* Implemente a classe revolver qye vau expor as funcionalidades: Atirar, Recarregar e mostrar. A munição
 deverá sempre ser maior que 0 e menor que o maximo que a depender do revolver */

public class Revolver {
	int municao;
	int maxMunicao;
	
	void atirar(){
		if(municao > 0) {
			municao --;
		}else {
			System.out.println("erro");
		}
	}
	void recarregar() {
		if(municao < maxMunicao) {
			municao = maxMunicao;
		}else {
			System.out.println("Erro");
		}
		
	}
	void mostrar() {
		System.out.println("municao");
	}

}

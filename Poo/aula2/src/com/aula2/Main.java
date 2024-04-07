package com.aula2;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		//Contador k = new Contador();
		//k.incrementar();
		//k.incrementar();
		//k.incrementar();
		//k.mostrar();
		
		//Contador c = new Contador();
		//c.decrementar();
		//c.decrementar();
		//c.mostrar();
		/**
		Revolver r = new Revolver();
		r.qtMax = 5;
		r.qtMunicao = 5;
		r.atirar();
		r.atirar();
		r.atirar();
		r.atirar();
		r.atirar();
		r.atirar();
		r.mostrar();
		**/
		//MassaCorporal mc = new MassaCorporal();
		//mc.altura = 1.77;
		//mc.peso = 78;
		//mc.nome = "Eu";
		//mc.calcular();
		
		Quadrado q = new Quadrado();
		System.out.println("Digite o lado: ");
		Scanner s = new Scanner(System.in);
		q.lado = s.nextDouble();
		q.calcularPerimetro();
		q.calcularArea();
	}

}

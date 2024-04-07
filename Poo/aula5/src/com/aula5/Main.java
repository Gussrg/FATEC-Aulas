package com.aula5;

public class Main {

	public static void main(String[] args) {
		Endereco end = 
			new Endereco("Rua Senador Feijo","Santos",Estado.SP);
		Aluno a = new Aluno("Natanael","0050832223043",end);
		a.mostrar();
		
		//Colocar um celular, uma bateria e descarregar
		//o celular. Após descarregar, dê apenas uma
		//recarga.
		Bateria b = new Bateria();
		Celular c = new Celular("Eu","9951654614",b);
		for(int i=0; i < 10; i++) {
			c.mostrar();
			c.mostarPercentual();
		}
		b.recarregar();
		c.mostrar();
		c.mostrar();
	}

}

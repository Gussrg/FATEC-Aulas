package view;

import business.Aluno;
//import business.Pessoa;
import business.Professor;

public class Principal {

	public static void main(String[] args) {

		Aluno aluno1 = new Aluno("Davi", "davi@fatec", 123);
		System.out.println(aluno1.entrarNaSala());
		
		Aluno aluno2 = new Aluno("Fabio", "fabio@fatec", 234);
		System.out.println(aluno2.entrarNaSala());
		
		Professor prof1 = new Professor("Rubens Lara", "rubens@fatec");
		System.out.println(prof1.entrarNaSala());
		
		Professor prof2 = new Professor("Lara", "lara@fatec");
		System.out.println(prof2.entrarNaSala("Dr."));
		
//		Pessoa pessoaQQ = new Pessoa("Arthur", "arthur@gmail.com");
//		System.out.println(pessoaQQ.entrarNaSala());
		
	}

}

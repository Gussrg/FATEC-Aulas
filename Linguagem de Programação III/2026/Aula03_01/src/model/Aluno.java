package model;

public class Aluno extends Pessoa {
	private int ra;
	
	public int getRA(){ return this.ra; }
	
	public Aluno(String nome, String email, int ra) {
		super(nome, email);
		this.ra = ra;
	}

}

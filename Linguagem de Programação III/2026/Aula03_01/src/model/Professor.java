package model;

public class Professor extends Pessoa {

	private int matricula;
	
	public int getMatricula() { return this.matricula; }
	
	public Professor(String nome, String email, int matricula) {
		super(nome, email);
		this.matricula = matricula;
	}

	@Override
	public String entrarNaSala() {
		// return super.entrarNaSala() + " Serei o professor de hoje.";
		return String.format("Olá, meu nome é Prof. %s.", nome);
	}
	
	// overload
	public String entrarNaSala(String tratamento) {
		return String.format("Olá, meu nome é Prof. %s %s.", tratamento, nome);
	}
}






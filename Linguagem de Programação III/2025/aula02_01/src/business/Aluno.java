package business;

public class Aluno extends Pessoa{

	private int ra;
	
	public int getRa() { return ra; }

	public Aluno(String nome, String email, int ra) {
		super(nome, email);
		this.ra = ra;
	}
	
}

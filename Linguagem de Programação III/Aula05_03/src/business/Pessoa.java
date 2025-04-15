package business;

public abstract class Pessoa {

	protected String nome, email;

	public String getNome() { return nome; }

	public String getEmail() { return email; }
	public void setEmail(String email) { this.email = email; }

	public Pessoa(String nome) {
		this.nome = nome;
	}
	
}

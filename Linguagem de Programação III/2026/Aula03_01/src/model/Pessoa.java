package model;

abstract class Pessoa {
	protected String nome;
	private String email;
	
	public String getNome() { return nome; }
	// public void setNome(String nome) { this.nome = nome; }
	
	public String getEmail() { return email; }
	public void setEmail(String email) { this.email = email; }
	
	public Pessoa(String nome, String email) {
		this.nome = nome;
		this.email = email;
	}
	
	public String entrarNaSala() {
		return String.format("Olá, meu nome é %s.", nome);
	}
	
}

package business;

abstract class Animal {

	private String nome;
	private int idade;
	private float peso;
	
	public int getIdade() { return idade; }
	public void setIdade(int idade) { this.idade = idade; }

	public float getPeso() { return peso; }
	public void setPeso(float peso) { this.peso = peso; }

	public String getNome() { return nome; }

	public Animal(String nome) {
		this.nome = nome;
		idade = 0;
		peso = 0;
	}
	
	public String brincar() {
		return String.format("O animal %s brinca.", nome);
	}
	
	
}

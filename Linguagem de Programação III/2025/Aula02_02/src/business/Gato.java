package business;

public class Gato extends Animal {

	public Gato(String nome) {
		super(nome);
	}

	@Override
	public String brincar() {
		return super.brincar() + 
			" No caso, com uma bolinha, por ser um gato...";
	}

	public String miar() {
		return "Miau... miau...";
	}
}

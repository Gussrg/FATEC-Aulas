package business;

public class Cachorro extends Animal {

	public Cachorro(String nome) {
		super(nome);
	}

	@Override
	public String brincar() {
		return super.brincar() + 
			" No caso, com um graveto, por ser um cachorro.";
	}

	public String latir() {
		return "Au-au!!";
	}
}

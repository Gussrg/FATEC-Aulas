package business;

public class Professor extends Pessoa {

	private int registro;
	
	public int getRegistro() { return registro; }

	public Professor(String nome, int registro) {
		super(nome);
		this.registro = registro;
	}

}

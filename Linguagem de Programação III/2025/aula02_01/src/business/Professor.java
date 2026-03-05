package business;

public class Professor extends Pessoa {

	public Professor(String nome, String email) {
		super(nome, email);
	}

//	@Override
//	public String entrarNaSala() {
//		return super.entrarNaSala() + " Sou o professor de hoje.";
//	}
	
	@Override
	public String entrarNaSala() {
		return String.format(
			"Ola, boa noite. Sou o(a) Prof(a). %s.", nome);
	}
	
	public String entrarNaSala(String tratamento) {
		return String.format(
			"Ola, boa noite. Sou o(a) Prof(a). %s. %s.", tratamento, nome);
	}
}

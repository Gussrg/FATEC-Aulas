package business;

public class Carro extends Veiculo {

	private int quantidadePortas;
	
	public Carro(String modelo, String fabricante, int ano, int quantidadePortas) {
		super(modelo, fabricante, ano);
		this.quantidadePortas = quantidadePortas;
	}

	@Override
	public void acelerar() {
		velocidadeAtual += 10;
	}

	@Override
	public String toString() {
		return super.toString() + 
			String.format("; %d portas", quantidadePortas);
	}
	
	
	
}

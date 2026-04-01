package business;

public class Carro extends Veiculo {

	private int quantidadePortas;
	
	public int getQuantidadePortas() { return quantidadePortas; }

	public Carro(String modelo, String fabricante, int ano, int qtdePortas) {
		super(modelo, fabricante, ano);
		this.quantidadePortas = qtdePortas;
	}

	@Override
	public void acelerar() {
		velocidade += 10;
		super.controlarVelocidadeMaxima();
	}

	@Override
	public String toString() {
		return super.toString() + "; quantidade de portas: " + quantidadePortas;
	}

}

package business;

public class Carro extends Veiculo {

	private int quantidadePortas;
	
//	public int getQuantidadePortas() { return quantidadePortas;}
	
	public Carro(String modelo, String fabricante, int ano, int potencia, String tipo, int quantidadePortas) {
		super(modelo, fabricante, ano, potencia, tipo);
		this.quantidadePortas = quantidadePortas;
	}

	@Override
	public void acelerar() {
		velocidadeAtual += 10;
		controlarVelocidadeMaxima();
	}

	@Override
	public String toString() {
		return super.toString() + "; qtde portas: " + quantidadePortas;
	}
	
}

package business;

public abstract class Veiculo {
	protected String modelo, fabricante;
	protected int ano, velocidade;
	
	protected final int VELOCIDADE_MAXIMA = 170;
	protected final int VELOCIDADE_MINIMA = 0;

	public String getModelo() { return modelo; }
	public String getFabricante() { return fabricante; }
	public int getAno() { return ano; }
	public int getVelocidade() { return velocidade; }

	public Veiculo(String modelo, String fabricante, int ano) {
		this.modelo = modelo;
		this.fabricante = fabricante;
		this.ano = ano;
		this.velocidade = 0;
	}
	
	public void acelerar() {
		velocidade += 5;
		controlarVelocidadeMaxima();
	}
	
	public void desacelerar() {
		velocidade -= 5;
		controlarVelocidadeMinima();
	}
	
	public void parar() {
		velocidade = 0;
	}

	protected void controlarVelocidadeMaxima() {
		if (velocidade > VELOCIDADE_MAXIMA)
			velocidade = VELOCIDADE_MAXIMA;
	}
	
	protected void controlarVelocidadeMinima() {
		if (velocidade < VELOCIDADE_MINIMA)
			velocidade = VELOCIDADE_MINIMA;
	}
	
	@Override
	public String toString() {
		return String.format("Veículo: %s; velocidade: %d km/h", modelo, velocidade);
	}
	
}

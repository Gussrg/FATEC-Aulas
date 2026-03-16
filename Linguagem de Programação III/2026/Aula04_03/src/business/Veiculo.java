package business;

public abstract class Veiculo {
	protected String modelo, fabricante;
	protected int ano, velocidade;

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
	}
	
	public void desacelerar() {
		velocidade -= 5;
	}
	
	public void parar() {
		velocidade = 0;
	}
	
	@Override
	public String toString() {
		return String.format("Veículo: %s, velocidade: %d km/h.", modelo, velocidade);
	}
	
}

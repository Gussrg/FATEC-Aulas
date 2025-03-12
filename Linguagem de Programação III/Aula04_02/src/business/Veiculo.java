package business;

public abstract class Veiculo {

	private String modelo, fabricante;
	private int ano;
	protected int velocidadeAtual;
	
	public String getModelo() { return modelo; }

	public String getFabricante() { return fabricante; }

	public int getAno() { return ano; }

	public int getVelocidadeAtual() { return velocidadeAtual; }

	public Veiculo(String modelo, String fabricante, int ano) {
		this.modelo = modelo;
		this.fabricante = fabricante;
		this.ano = ano;
		velocidadeAtual = 0;
	}
	
	public void acelerar() {
		velocidadeAtual += 5;
	}
	
	public void desacelerar() {
		velocidadeAtual -= 5;
	}
	
	public void parar() {
		velocidadeAtual = 0;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return String.format("Veiculo: %s; velocidade: %d km/h", 
				modelo, velocidadeAtual);
	}
	
	
}

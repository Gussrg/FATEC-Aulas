package business;

public abstract class Veiculo {

	private final int VELOCIDADE_MAXIMA = 180;
	private final int VELOCIDADE_MINIMA = 0;
	
	private String modelo, fabricante;
	private int ano;
	protected int velocidadeAtual;
	
	private Motor motor;
	
	private Manutencao manutencao;

	public Manutencao getManutencao() { return manutencao; }
	public void setManutencao(Manutencao manutencao) { this.manutencao = manutencao; }

	public Veiculo(String modelo, String fabricante, int ano, int potencia, String tipo) {
    	this.modelo = modelo;
    	this.fabricante = fabricante;
    	this.ano = ano;
    	this.velocidadeAtual = 0;
    	// instancia Motor, passando informações de potência e tipo
    	motor = new Motor(potencia, tipo);
    }

    public void acelerar() {
    	velocidadeAtual += 5;
    	controlarVelocidadeMaxima();
    }

    public void desacelerar() {
    	velocidadeAtual -= 5;
    	controlarVelocidadeMinima();
    }

    public void parar() {
    	velocidadeAtual = 0;
    }
    
	@Override
	public String toString() {
		return String.format(
			"Veículo: %s; velocidade atual: %d km/h; motor: %s", 
				modelo, velocidadeAtual, motor);
	}
	
	protected void controlarVelocidadeMaxima() {
		if (velocidadeAtual > VELOCIDADE_MAXIMA)
			velocidadeAtual = VELOCIDADE_MAXIMA;
	}
    
	protected void controlarVelocidadeMinima() {
		if (velocidadeAtual < VELOCIDADE_MINIMA)
			velocidadeAtual = VELOCIDADE_MINIMA;
	}
    
}


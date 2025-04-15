package business;

public abstract class Veiculo {

	private final int VELOCIDADE_MAXIMA = 180;
	private final int VELOCIDADE_MINIMA = 0;
	
	private String modelo, fabricante;
	private int ano;
	protected int velocidadeAtual;
	
//	public String getModelo() { return modelo;}
//	public String getFabricante() { return fabricante;}
//	public int getAno() { return ano;}
	
    public Veiculo(String modelo, String fabricante, int ano) {
    	this.modelo = modelo;
    	this.fabricante = fabricante;
    	this.ano = ano;
    	this.velocidadeAtual = 0;
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

//    public String retornarInfo() {
//		return String.format(
//				"Veículo: %s; velocidade atual: %d km/h", 
//					modelo, velocidadeAtual);
//    }
    
	@Override
	public String toString() {
		return String.format(
			"Veículo: %s; velocidade atual: %d km/h", 
				modelo, velocidadeAtual);
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


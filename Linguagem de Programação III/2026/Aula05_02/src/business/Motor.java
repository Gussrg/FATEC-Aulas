package business;

public class Motor {

	private final int POTENCIA_MINIMA = 50;
	private final int POTENCIA_MAXIMA = 500;
	
	private int potencia;
	private String tipo;
	
	public int getPotencia() { return this.potencia; }
	public String getTipo() { return this.tipo; }
	
	public Motor(int potencia, String tipo) {
		if (potencia < POTENCIA_MINIMA) potencia = POTENCIA_MINIMA;
		if (potencia > POTENCIA_MAXIMA) potencia = POTENCIA_MAXIMA;
		
		this.potencia = potencia;
		this.tipo = tipo;
	}
	
	@Override
	public String toString() {
		return String.format("potência: %d cv; tipo: %s", potencia, tipo);
	}
	
	
	
}

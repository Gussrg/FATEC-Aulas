package business;

public class Motor {
	
	private String tipo;
	private int potencia;

	public String getTipo() { return tipo; }
	public int getPotencia() { return potencia; }
	
	public Motor(int potencia, String tipo) {
		if (potencia < 50)
			potencia = 50;
		else if (potencia > 500)
			potencia = 500;
		this.potencia = potencia;
		this.tipo = tipo;
	}

	@Override
	public String toString() {
		return "Potencia: " + potencia + "cv; tipo: " + tipo;
	}
}

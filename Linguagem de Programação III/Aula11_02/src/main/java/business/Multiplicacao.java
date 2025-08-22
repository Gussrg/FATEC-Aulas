package business;

public class Multiplicacao implements ICalculo {

	@Override
	public float calcular(float valor1, float valor2) {
		return valor1 * valor2;
	}

}

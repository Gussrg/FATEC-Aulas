package business;

public class Subtracao implements ICalculo {

	@Override
	public float calcular(float valor1, float valor2) {
		return valor1 - valor2;
	}

}

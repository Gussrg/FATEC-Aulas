package business;

public class CamaraTermica {

	private Temperatura temperaturaMinima, temperaturaMaxima;
	
	public Temperatura getTemperaturaMinima() { return temperaturaMinima; }
	
	public Temperatura getTemperaturaMaxima() { return temperaturaMaxima; }
	
	public CamaraTermica(float tempMinima, float tempMaxima) {
		// instancia objeto das classes-parte e configura-lhes
		// valores recebidos via construtor
		temperaturaMinima = new Temperatura();
		temperaturaMinima.setGrausCelsius(tempMinima);
		
		temperaturaMaxima = new Temperatura();
		temperaturaMaxima.setGrausCelsius(tempMaxima);
	}

}

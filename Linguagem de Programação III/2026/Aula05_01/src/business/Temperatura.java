package business;

public class Temperatura {
	private float grausCelsius;
	
	public float getGrausCelsius() { return grausCelsius; }
	public void setGrausCelsius(float grausCelsius) { this.grausCelsius = grausCelsius; }
	
	public float getGrausFahrenheit() {
		return grausCelsius * 1.8f + 32;
	}
	
}

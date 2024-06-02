package triangulo;

public class Equilatero {
	
	private double lado;
	
	public Equilatero(double lado) {
		this.lado = lado;
	}

	public void calcArea() {
		var area = ((lado * lado) * Math.sqrt(3)) / 4;
		System.out.println("Area: " + area); 
	}
	
	public void calcPerimetro() {
		var perimetro = 3 * lado;
		System.out.println("Perimetro: " + perimetro);
	}

}

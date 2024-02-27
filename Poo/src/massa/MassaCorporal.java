package massa;
/*Implemente a classe MassaCorporal. Essa classe possui 1 funcionalidade, Mostrar se a pessoa está acima do peso
 no formato de mensagem: 
 João está no peso ideal
 João está acima do peso
 João está abaixo do peso 
 imc = peso/altura^2, imc>=25 = acima, imc <=18  abaixo, 18<=imc<25 = peso ideal */
public class MassaCorporal {
	String nome;
	double peso, altura;
	
	void calcular() {
		double imc = peso/altura/altura;
	}
	void mostrar() {
		
		
		if(imc>=25) {
			System.out.println(nome + "Está acima do peso!");
		}else if(imc<18) {
			System.out.println(nome +"Está abaixo do peso!");
			
		}else {
			System.out.println(nome +"Está no peso ideal");
		}
	}

}

package aula3;

public class Moeda {
	double valor;
	Correncia correncia;
	
	Moeda(double valor, Correncia correncia){
		this.valor = valor;
		this.correncia = correncia;
		
	}
	void converterReal() {
		switch(correncia) {
		case USD:
			System.out.println(4.95*valor + "Reais");
			break;
		case BTC:
			System.out.println(336437.80*valor +"reais");
			break;
		case EUR:
			System.out.println(5.37*valor +"reais");
			break;
		case BRL:
			System.out.println(valor +"reais");
			break;
		}
		
		void converterBTC() {
			switch(correncia) {
			case USD:
				System.out.println(0.000015*valor + "BTC");
				break;
			case BTC:
				System.out.println(valor +"BTC");
				break;
			case EUR:
				System.out.println(0.000016*valor +"BTC");
				break;
			case BRL:
				System.out.println(0.0000030*valor +"BTC");
				break;
			}
	}
}

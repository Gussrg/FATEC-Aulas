package com.aula3;

public class Moeda {

	double valor;
	Correncia correncia;

	Moeda(double valor, Correncia correncia) {
		this.valor = valor;
		this.correncia = correncia;
	}

	void converterReal() {
		switch (correncia) {
		case USD:
			System.out.println(4.95 * valor + " Reais");
			break;
		case BTC:
			System.out.println(336437.80 * valor + " Reais");
			break;
		case EUR:
			System.out.println(5.37 * valor + " Reais");
			break;
		case BRL:
			System.out.println(valor + " Reais");
		}
	}

	void converterBTC() {
		switch (correncia) {
		case USD:
			System.out.println(0.000015 * valor + " BTC");
			break;
		case BTC:
			System.out.println(valor + " BTC");
			break;
		case EUR:
			System.out.println(0.000016 * valor + " BTC");
			break;
		case BRL:
			System.out.println(0.000030 * valor + " BTC");
		}
	}
	
	void converterUSD() {
		switch (correncia) {
		case USD:
			System.out.println(valor + " USD");
			break;
		case BTC:
			System.out.println(68328*valor + " USD");
			break;
		case EUR:
			System.out.println(1.09 * valor + " USD");
			break;
		case BRL:
			System.out.println(0.2 * valor + " USD");
		}
	}
	
	void converterEUR() {
		switch (correncia) {
		case USD:
			System.out.println(0.92*valor + " EUR");
			break;
		case BTC:
			System.out.println(62464.41*valor + " EUR");
			break;
		case EUR:
			System.out.println(valor + " EUR");
			break;
		case BRL:
			System.out.println(0.19 * valor + " EUR");
		}
	}

}

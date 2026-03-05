package business;

public class Moto extends Veiculo {

	private boolean descansoAcionado = true;
	
	public boolean isDescansoAcionado() { return descansoAcionado; }

	public Moto(String modelo, String fabricante, int ano, int potencia, String tipo) {
		super(modelo, fabricante, ano, potencia, tipo);
	}

	@Override
	public void acelerar() {
		super.acelerar();
		descansoAcionado = false;
	}

	@Override
	public void desacelerar() {
		super.desacelerar();
		descansoAcionado = (velocidadeAtual == 0);
		
		// operador ternário
//		descansoAcionado = (velocidadeAtual == 0) ? true : false; 
		
//		if (velocidadeAtual == 0)
//			descansoAcionado = true;
//		else
//			descansoAcionado = false;
		
	}

	@Override
	public void parar() {
		super.parar();
		descansoAcionado = true;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return super.toString() + "; descanso acionado: " + descansoAcionado;
	}
	
}

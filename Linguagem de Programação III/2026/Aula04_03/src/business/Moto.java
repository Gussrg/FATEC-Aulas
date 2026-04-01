package business;

public class Moto extends Veiculo {

	private boolean descansoAcionado;
	
	public boolean isDescansoAcionado() { return descansoAcionado; }

	public Moto(String modelo, String fabricante, int ano) {
		super(modelo, fabricante, ano);
	}

	@Override
	public void acelerar() {
		super.acelerar();
		descansoAcionado = false;
	}

	@Override
	public void desacelerar() {
		super.desacelerar();

		descansoAcionado = (velocidade == 0);
		
		/*
		if (velocidade == 0)
			descansoAcionado = true;
		else
			descansoAcionado = false;
		
		// operador ternário
		descansoAcionado = (velocidade == 0) ? true : false;
		*/
	}

	@Override
	public void parar() {
		super.parar();
		descansoAcionado = true;
	}

	@Override
	public String toString() {
		return super.toString() + "; apoio acionado: " + descansoAcionado;
	}

	
	
}
